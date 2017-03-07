#include <iostream>

int ReverseDigits(int);

char ReverseDigits_WhenPassedDifferentValues_ShouldReturnCorrectValues( );

int main(void)
{
	char IsSucceeded = ReverseDigits_WhenPassedDifferentValues_ShouldReturnCorrectValues( );

	std::cout << (IsSucceeded ? "True" : "False") << std::endl;

	return ( 0 );
}

int ReverseDigits(int Input)
{
	int Output = 0;
	while (Input != 0)
	{
		Output *= 10;
		Output += Input % 10;
		Input /= 10;
	}

	return Output;
}

char ReverseDigits_WhenPassedDifferentValues_ShouldReturnCorrectValues( )
{
	int TestValues[] = { 1234, 9324, 142, 398, 987, 675, 421, 289123, 87654321, 5341 };
	int ResultValues[] = { 4321, 4239, 241, 893, 789, 576, 124, 321982, 12345678, 1435 };

	int Length = sizeof(TestValues) / sizeof(int);
	for (int i = 0;
		 i < Length;
		 ++i)
	{
		if (ReverseDigits(TestValues[i]) != ResultValues[i])
		{
			return 0;
		}
	}

	return 1;
}
