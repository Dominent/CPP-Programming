#include "SequencePrinterToConsole.h"

#include <iostream>

void SequencePrinterToConsole::Print(void)
{
	std::cout << this->sequence->ToString( ) << std::endl;
}
