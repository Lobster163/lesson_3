#pragma once

#include <iostream>
#include <string>
using namespace std;


//создать класс : fraction(дробь).дробь имеет числитель и знаменатель(например, 3 / 7 или 9 / 2).предусмотреть, чтобы знаменатель не был равен 0. перегрузить :
//	математические бинарные операторы(+, -, *, / ) для выполнения действий с дробями
//	унарный оператор(-)
//	логические операторы сравнения двух дробей(== , != , <, >, <= , >= ).

class Fraction
{
	private:
		int _numerator;
		int _denominator = 1;
		double _result;
		string _sResult;
	public:
		Fraction() : _numerator(0), _denominator(1), _result(0), _sResult("") {};
		Fraction(int numerator, int denominator = 1);
		double getResult();
		string get_sResult();
		uint32_t getDenominator();
		uint32_t getNumerator();
		friend Fraction operator+ (const Fraction& f1, const Fraction& f2);
		friend Fraction operator- (const Fraction& f1, const Fraction& f2);
		friend Fraction operator/ (const Fraction& f1, const Fraction& f2);
		friend Fraction operator* (const Fraction& f1, const Fraction& f2);
		friend Fraction operator- (const Fraction& f);

};