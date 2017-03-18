#include <iostream>
#include <string> 
#include <algorithm> // replace
#include <sstream>
#include <iomanip>

using namespace std;

#define SIZE 6

typedef struct
{
    unsigned int Red;
    unsigned int Green;
    unsigned int Blue;
} color;

int main ( void )
{
    string Input;
    
    unsigned int Buffer[SIZE] = {};
    
    getline(cin, Input);

    replace ( Input.begin(), Input.end(), '#', ' ' );

    stringstream InputStream ( Input );

    int j = 0;
    for (string Token = ""; InputStream >> Token;)
    {
	for ( int i = 0; i < Token.size(); i+=2, ++j )
	{
	    string Tmp = "";
	    
	    Tmp += Token[i];
	    Tmp += Token[i + 1];
	    
	    stringstream TmpStream(Tmp);

	    TmpStream >> hex >> Buffer[j];
	}
    }
    
    color ColorInput1 = { Buffer[0], Buffer[1], Buffer[2] };
    color ColorInput2 = { Buffer[3], Buffer[4], Buffer[5] };

    color ColorResult = {
	( ColorInput1.Red + ColorInput2.Red ) / 2,
	( ColorInput1.Green + ColorInput2.Green ) / 2,
	( ColorInput1.Blue + ColorInput2.Blue ) / 2 };

    stringstream OutputStream;

    OutputStream << '#';
    OutputStream << hex << ColorResult.Red;
    OutputStream << hex << ColorResult.Green;
    OutputStream << hex << ColorResult.Blue;

	while(OutputStream.str( ).size( ) <= 6)
	{
		OutputStream << '0';
	}

	cout << OutputStream.str( ) << endl;

    return ( 0 );
}
