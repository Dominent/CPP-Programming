#include "SequenceGenerator.h"

#include <sstream>

ISequenceGenerator::ISequenceGenerator( )
	: start(0), end(0), valueSequence(0), nameSequence(0)
{
}

ISequenceGenerator::ISequenceGenerator(ISequenceGenerator & other)
	: start(other.start), end(other.end), valueSequence(other.valueSequence), nameSequence(other.nameSequence)
{
}

ISequenceGenerator::~ISequenceGenerator( )
{
	delete[](this->valueSequence);
	delete[](this->nameSequence);
}

ISequenceGenerator::ISequenceGenerator(int start, int end)
	: start(start), end(end)
{
	int count = ( end - start );

	this->valueSequence = new double[count];
	this->nameSequence = new std::string[count];
}

double ISequenceGenerator::GetValue(int index)
{
	return *( this->valueSequence + index );
}

std::string ISequenceGenerator::GetName(int index)
{
	return *( this->nameSequence + index );
}

std::string ISequenceGenerator::ToString( )
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
