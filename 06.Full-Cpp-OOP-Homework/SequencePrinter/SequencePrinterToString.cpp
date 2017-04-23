#include "SequencePrinterToString.h"

SequencePrinterToString::SequencePrinterToString(std::string * target)
	:target(target)
{
}

void SequencePrinterToString::Print(void)
{
	*(this->target) = this->sequence->ToString();
}