#ifndef ISEQUENCE_GENERATOR_H
#define ISEQUENCE_GENERATOR_H

#include <string>

class ISequenceGenerator
{
public:
	virtual void GenerateSequence( void ) = 0;

	virtual  double GetValue( int index) = 0;
	virtual  std::string GetName(int index) = 0;

	virtual std::string ToString( void) = 0;
};
#endif // !ISEQUENCE_GENERATOR_H