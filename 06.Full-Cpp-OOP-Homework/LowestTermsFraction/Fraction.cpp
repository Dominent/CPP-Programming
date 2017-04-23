#include "Fraction.h"

Fraction::Fraction( ) :
	nominator(0),
	denominator(0)
{
}

Fraction::Fraction(int nominator, int denominator) :
	nominator(nominator),
	denominator(denominator)
{
}

Fraction Fraction::GetReciprocal( )
{
	return Fraction(this->denominator, this->nominator);
}

std::ostream & operator<<(std::ostream & stream, const Fraction & fraction)
{
	stream << fraction.nominator << "/" << fraction.denominator;

	return stream;
}

std::istream & operator>>(std::istream & stream, Fraction & fraction)
{
	stream >> fraction.nominator;
	stream >> fraction.denominator;

	return stream;
}

Fraction operator+(const Fraction & lhs, const Fraction & rhs)
{
	return Fraction(
		lhs.nominator * rhs.denominator + rhs.nominator * lhs.nominator,
		lhs.denominator * rhs.denominator);
}

Fraction & Fraction::operator++( )
{
	( *this ) = ( *this ) + Fraction(1, 1);

	return *this;
}

Fraction Fraction::operator++(int)
{
	Fraction beforeIncrement = *this;

	++( *this );

	return beforeIncrement;
}

Fraction Fraction::operator*(const Fraction & multiplier)
{
	return Fraction(
		this->nominator * multiplier.nominator,
		this->denominator * multiplier.denominator);
}

Fraction& Fraction::operator*=(const Fraction & multiplier)
{
	( *this ) = ( *this ) * multiplier;

	return ( *this );
}

Fraction Fraction::operator*(const int multiplier)
{
	return Fraction(
		this->nominator * multiplier,
		this->denominator * 1);
}

Fraction & Fraction::operator*=(const int multiplier)
{
	( *this ) = ( *this ) * multiplier;

	return ( *this );
}

Fraction Fraction::operator/(const Fraction & divisor)
{
	return Fraction(
		this->nominator * divisor.denominator,
		this->denominator * divisor.nominator);
}

Fraction & Fraction::operator/=(const Fraction & divisor)
{
	( *this ) = ( *this ) / divisor;

	return ( *this );
}

Fraction Fraction::operator/(const int divisor)
{
	return Fraction(
		this->nominator * divisor,
		this->denominator * 1);
}

Fraction & Fraction::operator/=(const int divisor)
{
	( *this ) = ( *this ) / divisor;

	return ( *this );
}
