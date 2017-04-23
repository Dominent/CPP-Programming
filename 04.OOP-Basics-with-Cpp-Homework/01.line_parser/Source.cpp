#include <iostream>
#include "LineParser.hpp"

int main( )
{
	LineParser lineParser("In up so discovery m 968 z 32 nested 7 discard");
	cout << lineParser.ToString( ) << endl;

	lineParser.ChangeLine("");
	cout << lineParser.ToString( ) << endl;

	lineParser.ChangeLine("Here, type is the placeholder type name, which will be specified when a class is instantiated. \
						  You can define more than one generic data type by using a comma-separated list.");
	cout << lineParser.ToString( ) << endl;

	return ( 0 );
}