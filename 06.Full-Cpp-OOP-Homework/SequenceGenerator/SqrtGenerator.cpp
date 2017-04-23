#include "SqrtGenerator.h"
#include "String.h"

#include <cmath>

SqrtGenerator::SqrtGenerator(int start, int end)
	:ISequenceGenerator(start, end)
{
}

void SqrtGenerator::GenerateSequence(void)
{
	for (int i = start, j = 0; i < end; ++i, ++j)
	{
		this->valueSequence[j] = sqrt(i);
		this->nameSequence[j] = String::Format("Sqrt(%d)", i);
	}
}