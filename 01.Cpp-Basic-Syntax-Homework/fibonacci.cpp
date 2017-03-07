#include <iostream>

int Fibonacci(int);

int main(void)
{
	int Input = 0;
	std::cin >> Input;

	int Result = Fibonacci(Input);

	std::cout << Result << std::endl;

	return ( 0 );
}

int Fibonacci(int x)
{
	if (x == 0)
		return 0;

	if (x == 1)
		return 1;

	return Fibonacci(x - 1) + Fibonacci(x - 2);
}
