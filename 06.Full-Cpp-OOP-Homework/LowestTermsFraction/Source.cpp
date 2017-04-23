#include <iostream>

#include "Fraction.h"

typedef Fraction LowestTermsFraction;

using namespace std;

int main( )
{
	LowestTermsFraction a, b;

	a = LowestTermsFraction(1, 2);
	b = LowestTermsFraction(3, 4);

	//cin >> a >> b;

	a *= 3;
	a /= 3;
	a *= b;
	a /= b;
	LowestTermsFraction multBy3 = a * 3;
	LowestTermsFraction multByB = a * b;
	LowestTermsFraction divBy3 = a / 3;
	LowestTermsFraction divByB = a / b;
	LowestTermsFraction reciprocalA = a.GetReciprocal( );

	cout << a << endl
		<< b << endl
		<< multBy3 << endl
		<< multByB << endl
		<< divBy3 << endl
		<< divByB << endl
		<< reciprocalA << endl;

	return ( 0 );
}