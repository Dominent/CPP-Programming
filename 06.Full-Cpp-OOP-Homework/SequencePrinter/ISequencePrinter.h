#ifndef ISEQUENCE_PRINTER_H
#define ISEQUENCE_PRINTER_H

#include "ISequenceGenerator.h"

class ISequencePrinter
{
public:
	virtual void Print(void) = 0;
	virtual void SetSequence(ISequenceGenerator * sequence) = 0;
};

#endif // !ISEQUENCE_PRINTER_H