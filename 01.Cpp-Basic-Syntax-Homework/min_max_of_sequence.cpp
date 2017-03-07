#include <iostream>
#include <climits> // INT_MAX, INT_MIN

int main(void)
{
    int ValN, Input = 0;
    
    int Max = INT_MIN;
    int Min = INT_MAX;

    std::cout << "Enter N: " << std::endl;
    std::cin >> ValN;
    
    for(int i = 0; i < ValN; i++)
    {
	std::cin >> Input;

	if(Input > Max)
	{
	    Max = Input;
	}
	
	if(Input < Min)
	{
	    Min = Input;
	}
    }

    std::cout << "Max: "<< Max << std::endl;
    std::cout << "Min: "<< Min << std::endl;    

    return ( 0 );
}
