#include <iostream>
#include <string>

#include "FibonacciGenerator.h"
#include "SqrtGenerator.h"

int main( )
{
	FibonacciGenerator fibonacci(5, 10);
	fibonacci.GenerateSequence( );
	std::cout << fibonacci.ToString( ) << std::endl;

	SqrtGenerator sqrt(1, 10);
	sqrt.GenerateSequence( );
	std::cout << sqrt.ToString( ) << std::endl;

	return 0;
}