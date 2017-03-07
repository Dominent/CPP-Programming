#include <iostream>
#include <cmath>

int GetTrailingZeros(int, int, int *);

int main(void)
{
	int Input;

	std::cin >> Input;

	int TrailingZerosSum = 0;

	for (int i = 1; GetTrailingZeros(i, Input, &TrailingZerosSum) > 0; ++i) {}

	std::cout << TrailingZerosSum << std::endl;

	return ( 0 );
}

int GetTrailingZeros(int Power, int Value, int * TrailingZerosSum)
{
	int Result = Value / std::pow(5, Power);

	*TrailingZerosSum += Result;

	return Result;
}
