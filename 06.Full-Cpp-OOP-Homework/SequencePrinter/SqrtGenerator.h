#ifndef SQRT_GENERATOR_H
#define SQRT_GENERATOR_H

#include "SequenceGeneratorBase.h"

class SqrtGenerator : public SequenceGeneratorBase
{
public:
	SqrtGenerator(int start, int end);

	virtual void GenerateSequence(void);
};
#endif // !SQRT_GENERATOR_H