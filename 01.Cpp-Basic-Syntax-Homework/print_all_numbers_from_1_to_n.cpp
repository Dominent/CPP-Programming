#include <iostream>

int main(void)
{
    int ValN = 0;

    std::cout << "Enter N: " << std::endl;
    std::cin >> ValN;
    
    for(int i = 1; i <= ValN; i++)
    {
	std::cout << i << std::endl;
    }

    return ( 0 );
}
