#ifndef SQRT_GENERATOR_H
#define SQRT_GENERATOR_H

#include "SequenceGenerator.h"

class SqrtGenerator : public ISequenceGenerator
{
public:
	SqrtGenerator(int start, int end);

	virtual void GenerateSequence(void);
};
#endif // !SQRT_GENERATOR_H