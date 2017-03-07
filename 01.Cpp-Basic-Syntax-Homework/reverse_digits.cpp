#include <iostream>

int main(void)
{
	int Input = 0;
	std::cin >> Input;

	int Output = 0;
	while (Input != 0)
	{
		Output *= 10;
		Output += Input % 10;
		Input /= 10;
	}

	std::cout << Output << std::endl;

	return ( 0 );
}
