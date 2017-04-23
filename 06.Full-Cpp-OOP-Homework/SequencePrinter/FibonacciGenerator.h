#ifndef FIBONACCI_GENERATOR_H
#define FIBONACCI_GENERATOR_H

#include "SequenceGeneratorBase.h"

class FibonacciGenerator : public SequenceGeneratorBase
{
public:
	FibonacciGenerator(int start, int end);

	virtual void GenerateSequence(void);
private:
	double Fibonaci(int n);
};
#endif // !FIBONACCI_GENERATOR_H