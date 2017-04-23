#include <iostream>

#include "SequencePrinterToString.h"
#include "SequencePrinterToFile.h"
#include "SequencePrinterToConsole.h"

#include "FibonacciGenerator.h"

int main( )
{
	std::string target = "";

	ISequencePrinter * toStringPrinter =
		new SequencePrinterToString(&target);

	ISequencePrinter * toFilePrinter =
		new SequencePrinterToFile("test.txt");

	ISequencePrinter * toConsolePrinter =
		new SequencePrinterToConsole();

	ISequenceGenerator * fibonacci =
		new FibonacciGenerator(5, 10);

	fibonacci->GenerateSequence( );

	toStringPrinter->SetSequence(fibonacci);
	toFilePrinter->SetSequence(fibonacci);
	toConsolePrinter->SetSequence(fibonacci);

	toStringPrinter->Print( );
	toFilePrinter->Print( );
	toConsolePrinter->Print( );

	return ( 0 );
}