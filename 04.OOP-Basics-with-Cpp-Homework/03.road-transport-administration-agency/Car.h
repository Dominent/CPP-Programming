#ifndef CAR_H
#define CAR_H

#include <string>

#include "Person.h"

class Car
{
public:
	std::string Manufacturer;
	std::string Model;
	std::string Registration;
	int HorsePower;

	Person * Owner;
};

#endif // !CAR_H