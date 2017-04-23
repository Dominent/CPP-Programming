#include "SequencePrinterBase.h"

SequencePrinterBase::SequencePrinterBase( )
	: sequence(0)
{
}

SequencePrinterBase::SequencePrinterBase(SequencePrinterBase & other)
	: sequence(other.sequence)
{
}

SequencePrinterBase::~SequencePrinterBase( )
{
	free(this->sequence);
}

void SequencePrinterBase::SetSequence(ISequenceGenerator * sequence)
{
	this->sequence = sequence;
}
