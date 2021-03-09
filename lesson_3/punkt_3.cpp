#include "include/punkt_3.h"


Fraction::Fraction(uint32_t numerator, uint32_t denominator) : _numerator(numerator)
{
	if (denominator > 0)
		_denominator = denominator;
	else
		_denominator = 1;

	_result = (double)numerator / (double)denominator;
	_sResult = to_string(numerator) + "/" + to_string(denominator);
}

double Fraction::getResult(){ return _result; }
uint32_t Fraction::getDenominator() { return _denominator; }
uint32_t Fraction::getNumerator() { return _numerator; }
string Fraction::get_sResult(){	return _sResult;}

Fraction operator+ (const Fraction& f1, const Fraction& f2)
{
	uint32_t z = f1._denominator * f2._denominator;
	uint32_t a = f2._denominator * f1._numerator;
	uint32_t b = f1._denominator * f2._numerator;
	return Fraction(a + b, z);
}

Fraction operator- (const Fraction& f1, const Fraction& f2)
{
	uint32_t z = f1._denominator * f2._denominator;
	uint32_t a = f2._denominator * f1._numerator;
	uint32_t b = f1._denominator * f2._numerator;
	return Fraction(a - b, z);;
}

Fraction operator/ (const Fraction& f1, const Fraction& f2)
{
	uint32_t z = f1._denominator * f2._numerator;
	uint32_t a = f1._numerator * f2._denominator;
	return Fraction(a, z);;
}

Fraction operator* (const Fraction& f1, const Fraction& f2)
{
	uint32_t z = f1._denominator * f2._denominator;
	uint32_t a = f1._numerator * f2._numerator;
	return Fraction(a, z);;
}

