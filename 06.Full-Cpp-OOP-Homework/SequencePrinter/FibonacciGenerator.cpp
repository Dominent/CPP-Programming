#include "FibonacciGenerator.h"
#include "String.h"

FibonacciGenerator::FibonacciGenerator(int start, int end)
	: SequenceGeneratorBase(start, end)
{
}

void FibonacciGenerator::GenerateSequence(void)
{
	for (int i = start, j = 0; i < end; ++i, ++j)
	{
		if (i < start + 2)
		{
			this->valueSequence[j] = this->Fibonaci(i);
		}
		else
		{
			this->valueSequence[j] = this->valueSequence[j - 2] + this->valueSequence[j - 1];
		}

		this->nameSequence[j] = String::Format("Fibonacci %d", i);
	}
}

double FibonacciGenerator::Fibonaci(int n)
{
	double * buffer = ( double * ) malloc(( n + 1 ) * sizeof(double));
	if (!buffer)
	{
		exit(1);
	}

	buffer[0] = 0;
	buffer[1] = 1;

	for (int i = 2; i <= n; ++i)
	{
		buffer[i] = buffer[i - 1] + buffer[i - 2];
	};

	double output = buffer[n];

	free(buffer);

	return output;
}
