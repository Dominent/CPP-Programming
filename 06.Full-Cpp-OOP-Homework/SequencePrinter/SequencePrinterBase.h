#ifndef I_SEQUENCE_PRINTER_BASE_H
#define I_SEQUENCE_PRINTER_BASE_H

#include "ISequencePrinter.h"

class SequencePrinterBase : public ISequencePrinter
{
public:
	SequencePrinterBase( );
	SequencePrinterBase(SequencePrinterBase & other);
	virtual ~SequencePrinterBase( );

	virtual void Print(void) = 0;
	virtual void SetSequence(ISequenceGenerator * sequence);
protected:
	ISequenceGenerator * sequence;
};

#endif // !I_SEQUENCE_PRINTER_BASE_H