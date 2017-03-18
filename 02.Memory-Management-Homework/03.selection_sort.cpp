#include <iostream>

using namespace std;

void SelectionSort ( int [], int, int );

int main ( void )
{
    int Input[] = { 5, 17, 34, 125, 125, -7, 5, 14, 127, 5, 3, 1, 5 };

    SelectionSort(Input, 0, 13);

    for(int Number : Input)
    {
	cout << Number << " ";
    }
    cout << endl;

    return ( 0 );
}

void SelectionSort ( int Array [], int Start, int End )
{
    for ( int i = Start; i < End - 1; ++i)
    {
	int Min = i;

	for ( int j = i + 1; j < End; ++j)
        {
	    if(Array[j] < Array[Min])
	    {
		Min = j;
	    }
	}

	if(Min != i)
	{
	    swap(Array[i], Array[Min]);
	}
    }
}
