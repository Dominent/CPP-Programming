#include "../Includes/ChessBoard.h"
#include "../Includes/ChessPieceFactory.h"

#include <sstream>

#define EMPTY_CHAR '#'
std::string ChessBoard::ToString( )
{
	std::stringstream stream;

	stream << std::string(17, '=') << std::endl;

	for (int r = 0; r < ROWS; ++r)
	{
		stream << '|';
		for (int c = 0; c < COLS - 1; ++c)
		{
			stream << this->Board[r][c] << " ";
		}
		stream << this->Board[r][COLS - 1] << '|';
		stream << std::endl;
	}
	stream << std::string(17, '=');

	return stream.str( );
}

// TODO(Domi): Is this necessary?

void ChessBoard::Init(ChessPieceFactory factory)
{
	for (int r = 0; r < ROWS; ++r)
	{
		for (int c = 0; c < COLS; ++c)
		{
			this->Board[r][c] = EMPTY_CHAR;
		}
	}

	this->Black = new ChessSet(factory, ColorType::BLACK);
	this->White = new ChessSet(factory, ColorType::WHITE);
}

ChessSetPtr ChessBoard::GetSet(ColorType color)
{
	if (color == ColorType::BLACK)
		return this->Black;
	else
		return this->White;
}

IChessPiece * ChessBoard::Find(position position)
{
	IChessPiecePtr piece = this->Find(position, ColorType::BLACK);
	if (!piece)
	{
		piece = this->Find(position, ColorType::WHITE);
	}

	return piece;
}

IChessPiece * ChessBoard::Find(position position, ColorType color)
{
	IChessPiecePtr * fullSet = this->GetSet(color)->GetFullSet( );
	for (int i = 0; i < PIECE_COUNT; ++i)
	{
		IChessPiecePtr piece = fullSet[i];

		if (piece->GetPosition( ) == position)
		{
			return piece;
		}
	}

	return 0;
}

ChessBoard * ChessBoard::Instance(void)
{
	static ChessBoard * board = new ChessBoard();

	return board;
}

// TODO(Domi): Rewrite Upper methods!

bool ChessBoard::ChangePosition(IChessPiecePtr piece, position currentPosition, position newPosition)
{
	if (this->Check(newPosition))
	{
		this->Set(EMPTY_CHAR, currentPosition);

		this->Set(piece->GetSymbol( ), newPosition);

		return true;
	}

	return false;
}

bool ChessBoard::SetPosition(IChessPiecePtr piece, position position)
{
	if (this->Check(position))
	{
		this->Set(piece->GetSymbol( ), position);

		return true;
	}

	return false;
}

bool ChessBoard::CheckPosition(position position)
{
	return this->Check(position);
}

void ChessBoard::ClearPosition(position position)
{
	this->Set(EMPTY_CHAR, position);
}

#define Private
ChessBoard::ChessBoard( )
{
}

void ChessBoard::Set(char symbol, position position)
{
	this->Board[position.x][position.y] = symbol;
}

bool ChessBoard::Check(position position)
{
	return this->Board[position.x][position.y] == EMPTY_CHAR;
}

char ChessBoard::Get(position position)
{
	return this->Board[position.x][position.y];
}
#undef Private