#ifndef SEQUENCE_PRINTER_TO_CONSOLE_H
#define SEQUENCE_PRINTER_TO_CONSOLE_H

#include "SequencePrinterBase.h"

class SequencePrinterToConsole : public SequencePrinterBase
{
public:
	virtual void Print(void);
};
#endif // !SEQUENCE_PRINTER_TO_CONSOLE_H