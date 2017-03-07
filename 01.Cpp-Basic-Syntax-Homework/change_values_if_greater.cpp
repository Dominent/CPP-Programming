#include <iostream>

int main ( void )
{
    int Val1, Val2;

    std::cout << "Enter two numbers: " << std::endl;

    std::cin >> Val1 >> Val2;

    if(Val1 > Val2)
    {
	Val1 = Val1 ^ Val2;
	Val2 = Val1 ^ Val2;
	Val1 = Val1 ^ Val2;
    }

    std::cout << "Val1: "<< Val1 << std::endl;
    std::cout << "Val2: "<< Val2 << std::endl;
    
    return ( 0 );
}

