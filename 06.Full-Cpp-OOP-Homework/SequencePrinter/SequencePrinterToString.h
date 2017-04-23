#ifndef SEQUENCE_PRINTER_TO_STRING_H
#define SEQUENCE_PRINTER_TO_STRING_H

#include "SequencePrinterBase.h"

class SequencePrinterToString : public SequencePrinterBase
{
public:
	SequencePrinterToString(std::string * target);

	virtual void Print(void);
private:
	std::string * target;
};
#endif // !SEQUENCE_PRINTER_TO_STRING_H
