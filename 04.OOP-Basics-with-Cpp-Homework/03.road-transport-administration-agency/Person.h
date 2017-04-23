#ifndef PERSON_H
#define PERSON_H

#include <vector>
#include <string>

#include "Car.h"

class Person
{
public:
	int Id;
	int Age;
	std::string Name;

	std::vector<Car> Cars;
};

#endif // !PERSON_H