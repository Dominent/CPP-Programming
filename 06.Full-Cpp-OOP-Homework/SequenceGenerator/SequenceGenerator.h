#ifndef SEQUENCE_GENERATOR_H
#define SEQUENCE_GENERATOR_H

#include <iostream>

class ISequenceGenerator
{
public:
	ISequenceGenerator( );
	ISequenceGenerator(ISequenceGenerator & other);
	~ISequenceGenerator( );

	ISequenceGenerator(int start, int end);

	virtual void GenerateSequence( void ) = 0;

	double GetValue( int index);
	std::string GetName(int index);

	std::string ToString( );
protected:
	double * valueSequence;
	std::string * nameSequence;

	int start;
	int end;
};

#endif // !SEQUENCE_GENERATOR_H