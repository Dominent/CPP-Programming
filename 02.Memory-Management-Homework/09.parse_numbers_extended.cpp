#include <iostream>
#include <string>
#include <sstream>
#include <cstring>
#include <cstdlib>
#include <fstream>

using namespace std;

#define INPUT_FILE_NAME "Input.txt"
#define OUTPUT_FILE_NAME "Output.txt"

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

    ofstream FileOutStr(OUTPUT_FILE_NAME);

    if(FileOutStr.is_open())
    {
	FileOutStr << Sum;
	
	FileOutStr.close();
    }
    
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
    string Input;
    int InputCount = 0;
    ifstream FileInStr(INPUT_FILE_NAME);

    if( FileInStr.is_open() )
    {
	getline ( FileInStr, Input );

	InputCount = stoi ( Input );

	Input = "";
	for (int i = 0; i < InputCount; ++i, Input += " ")
	{
	    string Tmp;
	    getline( FileInStr, Tmp );

	    Input += Tmp;
	}

	FileInStr.close();
    }
    

    return Input;
}    
