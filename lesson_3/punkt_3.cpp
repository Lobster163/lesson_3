#include "include/punkt_3.h"

Fraction::Fraction(uint32_t numerator, uint32_t denominator) : _numerator(numerator)
{
	if (denominator > 0)
		_denominator = denominator;
	else
		_denominator = 1;
}

double Fraction::getResult(){ return _result; }
uint32_t Fraction::getDenominator() { return _denominator; }
uint32_t Fraction::getNumerator() { return _numerator; }

Fraction operator+ (const Fraction& f1, const Fraction& f2)
{
	uint32_t z = f1._denominator * f2._denominator;
	uint32_t a = f2._denominator * f1._numerator;
	uint32_t b = f1._denominator * f2._numerator;
	Fraction result = Fraction(a + b, z);
	result._result = (double)result._numerator / (double)result._denominator;
	return result;
}

