#ifndef SEQUENCE_GENERATOR_BASE_H
#define SEQUENCE_GENERATOR_BASE_H

#include "ISequenceGenerator.h"
 
class SequenceGeneratorBase : public ISequenceGenerator
{
public:
	SequenceGeneratorBase( );
	SequenceGeneratorBase(SequenceGeneratorBase & other);
	virtual ~SequenceGeneratorBase( );

	SequenceGeneratorBase(int start, int end);

	virtual void GenerateSequence(void) = 0;

	virtual double GetValue(int index);
	virtual std::string GetName(int index);

	virtual std::string ToString( );
protected:
	double * valueSequence;
	std::string * nameSequence;

	int start;
	int end;
};

#endif // !SEQUENCE_GENERATOR_BASE_H