#include <iostream>
#include <string>
#include <sstream>
#include <cstring>
#include <cstdlib>

using namespace std;

string GetInput ();

int * ParseNumbers ( const string &, int );

int main(void)
{
    string Input = GetInput();

    int Count = Input.size() - count ( Input.begin(), Input.end(), ' ' );
    
    int * Numbers = ParseNumbers( Input, Count);

    int Sum = 0;
    for (int i = 0; i < Count; ++i)
    {
	Sum += *(Numbers + i);
    }

    cout << Sum << endl;
    
    return ( 0 );
}

int * ParseNumbers ( const string & Input, int Length )
{
    int * Result = ( int * )malloc ( Length * sizeof ( int ));

    istringstream InputStream(Input);

    for (int i = 0; InputStream >> *(Result + i); ++i);

    return Result;
}

string GetInput ()
{
    int InputCount = 0;
    string Input;

    int Length = 0;

    cin >> InputCount;
    cin.ignore( );

    for (int i = 0; i < InputCount; ++i, Input += " ")
    {
	string tmp;
	getline(cin, tmp);

	Input += tmp;
    }

    return Input;
}
    
