#ifndef FRACTION_H
#define FRACTION_H

#include<ostream>
#include<istream>

typedef class Fraction
{
protected:
	int nominator;
	int denominator;

public:
	Fraction( );

	Fraction(int nominator, int denominator);

	Fraction GetReciprocal( );

	friend std::ostream& operator<<(std::ostream& stream, const Fraction &fraction);
	friend std::istream& operator>>(std::istream& stream, Fraction &fraction);

	friend Fraction operator+(const Fraction & lhs, const Fraction & rhs);

	Fraction& operator++( );
	Fraction operator++(int);

	Fraction operator*(const Fraction &multiplier);
	Fraction operator*(const int multiplier);

	Fraction& operator*=(const Fraction &multiplier);
	Fraction& operator*=(const int multiplier);

	Fraction operator/(const Fraction &divisor);
	Fraction operator/(const int divisor);

	Fraction& operator/=(const Fraction &divisor);
	Fraction& operator/=(const int divisor);
};
#endif // !LOWEST_TERMS_FRACTION_H