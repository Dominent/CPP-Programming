#include <iostream>
#include <string>  // getline ()
#include <cstring> // strtok ()

using namespace std;

int main ( void )
{
    bool IsValid = true;
    
    string Input;
    getline( cin, Input );

    char * Token = strtok(&Input[0], ";");
    while ( Token && IsValid )
    {
	size_t Size = strlen( Token );
	
	int BraceCount = 0;
	
	for( int i = 0; i < Size; ++i )
	{
	    char Symbol = *(Token + i);
	    
	    if ( Symbol == ')')
		++BraceCount;
	    else if (Symbol == '(')
		--BraceCount;
	}

	IsValid = !BraceCount;

	Token = strtok(0 , ";");
    }

    cout << IsValid << endl;
    
    return ( 0 );
}
