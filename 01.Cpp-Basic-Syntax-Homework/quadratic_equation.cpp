#include <iostream>
#include <cmath> //sqrt

int main(void )
{
    // NOTE(Domi): Zero is initialization!
    float ValA, ValB, ValC = 0;
    float Discriminant = 0;
    float X1, X2 = 0;
    
    std::cout << "Enter the coeficients a, b and c: "<< std::endl;
    std::cin >> ValA >> ValB >> ValC;

    Discriminant = (ValB * ValB) - (4.0f * ValA * ValC);
    
    if(Discriminant == 0)
    {
	// NOTE(Domi): X1 == X2
	X1 = X2 = - ( ValB / ( 2 *  ValA ) );
    }
    else if(Discriminant > 0)
    {
	float DSqrt = sqrt( Discriminant);
	
	// NOTE(Domi): X1 X2
	// NOTE(Domi): (-b +- sqrt(D)) / (2 * ValA)
	X1 =  ( -ValB + DSqrt ) / (2.0f * ValA);
	X2 =  ( -ValB - DSqrt ) / (2.0f * ValA);
    }
    else
    {
	// NOTE(Domi): None
	std::cout << "The equation has no roots!"<< std::endl;
	
	return ( 0 );
    }

    std::cout << "X1: "<< X1 << std::endl;
    std::cout << "X2: "<< X2 << std::endl;
         
    return(0);
}
