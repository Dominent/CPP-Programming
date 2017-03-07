#include <iostream>

#define MAX_NUMBER_COUNT 3

int main (void)
{
    int Input, NegativeCounter = 0;
        
    for(int i = 0; i < MAX_NUMBER_COUNT; i++ )
    {
	std::cin >> Input;

	if(Input < 0)
	{
	    NegativeCounter++;
	}
    }

    char IsPositive = NegativeCounter % 2;
    
    std::cout << (IsPositive ? '-' : '+') << std::endl;

    return ( 0 );
}
