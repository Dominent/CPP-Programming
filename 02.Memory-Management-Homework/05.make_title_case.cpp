#include <iostream>
#include <string>  // getline ()
#include <cctype>  // isalpha(), toupper()

using namespace std;

void MakeTitleCase( string & );

int main ( void )
{
    string Input;
    getline( cin, Input );

    MakeTitleCase(Input);

    cout << Input << endl;
    
    return ( 0 );
}

void MakeTitleCase( string & Text )
{
    if(isalpha(Text[0]))
    {
	Text[0] = toupper(Text[0]);
    }
    
    for( int i = 1; i < Text.length(); ++i )
    {
	bool IsLetter = isalpha(Text[i]);
	bool PrevIsNotLetter = !isalpha(Text[i - 1]);

	if(IsLetter && PrevIsNotLetter)
	{
	    Text[i] = toupper(Text[i]);
	}
    }
}
