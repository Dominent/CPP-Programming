#include <iostream>
#include <string>
#include <regex>

using namespace std;

void Replace( string &, string, string );

int main ( void )
{
    string Text;
    string Pattern;
    string Insert;
    
    getline ( cin, Text );
    getline ( cin, Pattern );
    getline ( cin, Insert );    

    Replace( Text, Pattern, Insert );
    
    cout << Text << endl;

    return ( 0 );
}

void Replace( string & Text, string Pattern, string Insert )
{
    Text = regex_replace( Text, regex ( Pattern ), Insert );
}
