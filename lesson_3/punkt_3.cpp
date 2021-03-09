#include "include/punkt_3.h"

Fraction::Fraction(int numerator, int denominator) : _numerator(numerator)
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
	int a = f2._denominator * f1._numerator;
	int b = f1._denominator * f2._numerator;
	int z = f1._denominator * f2._denominator;	
	return Fraction(a + b, z);
}

Fraction operator- (const Fraction& f1, const Fraction& f2)
{
	int a = f2._denominator * f1._numerator;
	int b = f1._denominator * f2._numerator;
	int z = f1._denominator * f2._denominator;
	return Fraction(a - b, z);
}

Fraction operator/ (const Fraction& f1, const Fraction& f2)
{
	int a = f1._numerator * f2._denominator;
	int z = f1._denominator * f2._numerator;	
	return Fraction(a, z);
}

Fraction operator* (const Fraction& f1, const Fraction& f2)
{
	int a = f1._numerator * f2._numerator;
	int z = f1._denominator * f2._denominator;	
	return Fraction(a, z);
}

Fraction operator- (const Fraction& f)
{
	int a = -f._numerator;
	int z = f._denominator;	
	if (a < 0 && z < 0)
	{
		-a; -z;
	}
	else if (z < 0)
	{
		-a; -z;
	}
	return Fraction(a, z);
}

bool operator== (const Fraction& f1, const Fraction& f2)
{
	int a = f1._numerator * f2._denominator;
	int b = f1._denominator * f2._numerator;
	return a == b; 
}

bool operator!= (const Fraction& f1, const Fraction& f2){ return !(f1 == f2); }

bool operator< (const Fraction& f1, const Fraction& f2)
{
	if (f1 == f2)
		return false;
	if (f1._denominator == f2._denominator)
		return f1._numerator < f2._numerator;

	int a = f1._numerator * f2._denominator;
	int b = f2._numerator * f1._denominator;
	return a < b;
}

bool operator> (const Fraction& f1, const Fraction& f2) 
{ 
	if (f1 != f2)
		return !(f1 < f2);
	else
		return false;
}

bool operator>= (const Fraction& f1, const Fraction& f2)
{
	if (f1 != f2)
		return f1 > f2;
	else
		return true;
}

bool operator<= (const Fraction& f1, const Fraction& f2)
{
	if (f1 != f2)
		return f1 < f2;
	else
		return true;
}
