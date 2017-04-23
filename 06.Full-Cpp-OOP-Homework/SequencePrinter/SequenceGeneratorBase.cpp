#include "SequenceGeneratorBase.h"

#include <sstream>

SequenceGeneratorBase::SequenceGeneratorBase( )
	: start(0), end(0), valueSequence(0), nameSequence(0)
{
}

SequenceGeneratorBase::SequenceGeneratorBase(SequenceGeneratorBase & other)
	: start(other.start), end(other.end), valueSequence(other.valueSequence), nameSequence(other.nameSequence)
{
}

SequenceGeneratorBase::~SequenceGeneratorBase( )
{
	delete[](this->valueSequence);
	delete[](this->nameSequence);
}

SequenceGeneratorBase::SequenceGeneratorBase(int start, int end)
	: start(start), end(end)
{
	int count = ( end - start );

	this->valueSequence = new double[count];
	this->nameSequence = new std::string[count];
}

double SequenceGeneratorBase::GetValue(int index)
{
	return *( this->valueSequence + index );
}

std::string SequenceGeneratorBase::GetName(int index)
{
	return *( this->nameSequence + index );
}

std::string SequenceGeneratorBase::ToString( )
{
	std::stringstream stream;

	stream << "Start: " << this->start << " End: " << this->end << std::endl;

	for (int i = 0; i < end - start; ++i)
	{
		stream << valueSequence[i] << " ";
	}

	stream << std::endl;

	for (int i = 0; i < end - start; ++i)
	{
		stream << nameSequence[i] << " ";
	}

	return stream.str( );
}
