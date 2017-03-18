#include <iostream>
#include <string>
#include <regex>
#include <vector>
#include <map>

using namespace std;

#define PATTERN "[a-z]+"
#define SIZE 2

int main ( void )
{
    string Input = "";
    string CmpWord = "";
    vector<string>Buffer;
    int P = 0;
    int Counter = 0;
    
    getline ( cin, Input );
   
    for( smatch Matches;
	 regex_search ( Input, Matches, regex ( PATTERN ) ); )
    {
	for ( auto Match : Matches)
	{
	    Buffer.push_back(Match);
	}
	
	Input = Matches.suffix().str();
    }

    cin >> CmpWord >> P;

    for (auto Word : Buffer)
    {
	map <char, int> Occurunces;
	    
	if ( Word.size() == CmpWord.size() &&
	     Word[0] == CmpWord[0])
	{
	    for ( int i = 0; i < Word.size(); ++i)
	    {
		if(Word[i] == CmpWord[i])
		{
		    ++Occurunces[Word[i]];
		}
	    }

	    int Percentage = (((float)Occurunces.size() / Word.size() ) * 100);
	    if ( Percentage >= P )
	    {
		++Counter;
	    }
	}
    }

    cout << Counter << endl;

    return ( 0 );
}
