#include <iostream>

int EucledianGCD(int, int);

int main(void)
{
    int A, B = 0;
    int GCD = 0;
    
    std::cout << "Enter A and B: "<< std::endl;
    std::cin >> A >> B;

    GCD = EucledianGCD(A, B);

    std::cout << "The GCD of " << A << " and " << B << " is " << GCD <<std::endl; 

    return ( 0 );
}

int EucledianGCD(int A, int B)
{
    if(B == 0)
    {
	return A;
    }
    
    return EucledianGCD(B , A % B);
}

