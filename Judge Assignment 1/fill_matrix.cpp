#include <iostream>
#include <cstdlib>
#include <string>
#include <sstream>
#include <stack>

using namespace std;

typedef struct 
{
	unsigned int X;
	unsigned int Y;
} point;

int main(void)
{
	unsigned int Row = 0;
	unsigned int Col = 0;
	char ** Matrix2D = NULL;

	cin >> Row >> Col;
	cin.ignore( );

	Matrix2D = ( char ** ) calloc(Row, sizeof(char *));
	if (!Matrix2D)
	{
		return ( 1 );
	}

	for (int r = 0; r < Row; ++r)
	{
		*( Matrix2D + r ) = ( char * ) calloc(Row, sizeof(char));
		if (!( *( Matrix2D + r ) ))
		{
			return ( 1 );
		}

		string Tmp = "";
		getline(cin, Tmp);

		stringstream TmpStream(Tmp);

		for (int c = 0; c < Col; ++c)
		{
			TmpStream >> *( *( Matrix2D + r ) + c );
		}
	}

	unsigned int StartRow = 0;
	unsigned int StartCol = 0;
	char FillChar;
	char StartChar;

	cin >> FillChar;

	cin >> StartRow >> StartCol;

	StartChar = Matrix2D[StartRow][StartCol];
	Matrix2D[StartRow][StartCol] = FillChar;

	// NOTE(Domi): End of Input

	stack <point> Points;
	point Point = { StartRow, StartCol };
	Points.push(Point);
	for (;;)
	{
		bool CanMoveLeft = ( ( Point.Y > 0 ) && ( Matrix2D[Point.X][Point.Y - 1] == StartChar ) );
		bool CanMoveRight = ( ( Point.Y < Col - 1 ) && ( Matrix2D[Point.X][Point.Y + 1] == StartChar ) );
		bool CanMoveUp = ( ( Point.X > 0 ) && ( Matrix2D[Point.X - 1][Point.Y] == StartChar ) );
		bool CanMoveDown = ( ( Point.X < Row - 1 ) && ( Matrix2D[Point.X + 1][Point.Y] == StartChar ) );

		bool CanMove = true;
		
		if (CanMoveLeft)
		{
			--Point.Y;
		}
		else if (CanMoveRight)
		{
			++Point.Y;
		}
		else if (CanMoveUp)
		{
			--Point.X;
		}
		else if (CanMoveDown)
		{
			++Point.X;
		}
		else
		{
			CanMove = false;

			Points.pop( );

			if (!Points.size( ))
			{
				break;
			}

			Point = Points.top( );
		}

		if (CanMove)
		{
			Matrix2D[Point.X][Point.Y] = FillChar;

			Points.push(Point);
		}
	}

	// NOTE(Domi): End of Logic

	for (int r = 0; r < Row; ++r)
	{
		for (int c = 0; c < Col; ++c)
		{
			cout << Matrix2D[r][c];
		}

		cout << endl;
	}

	return ( 0 );
}
