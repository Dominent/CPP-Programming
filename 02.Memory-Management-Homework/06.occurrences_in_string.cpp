#include <iostream>
#include <string>
#include <regex>

using namespace std;

#define SEARCH "on"

int Occurrences( const string &, const string & ); 

int main ( void )
{
    string Input;
    
    getline(cin, Input);

    cout << Occurrences ( Input, SEARCH ) << endl;

    return ( 0 );
}

int Occurrences( const string & Text, const string & Search)
{
    string TextCopy = Text;
    
    int Counter = 0;
    for( smatch Matches;
	 regex_search ( TextCopy, Matches, regex ( Search ) ); )
    {
	for ( auto Match : Matches)
	{
	    ++Counter;
	}
	
	TextCopy = Matches.suffix().str();
    }

    return Counter;
}
