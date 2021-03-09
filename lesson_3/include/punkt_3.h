#pragma once

#include <iostream>
#include <string>
using namespace std;


//������� ����� : fraction(�����).����� ����� ��������� � �����������(��������, 3 / 7 ��� 9 / 2).�������������, ����� ����������� �� ��� ����� 0. ����������� :
//	�������������� �������� ���������(+, -, *, / ) ��� ���������� �������� � �������
//	������� ��������(-)
//	���������� ��������� ��������� ���� ������(== , != , <, >, <= , >= ).

class Fraction
{
	private:
		uint32_t _numerator;
		uint32_t _denominator = 1;
		double _result;
		string _sResult;
	public:
		Fraction() : _numerator(0), _denominator(1), _result(0), _sResult("") {};
		Fraction(uint32_t numerator, uint32_t denominator = 1);
		double getResult();
		string get_sResult();
		uint32_t getDenominator();
		uint32_t getNumerator();
		friend Fraction operator+ (const Fraction& f1, const Fraction& f2);
		friend Fraction operator- (const Fraction& f1, const Fraction& f2);
		friend Fraction operator/ (const Fraction& f1, const Fraction& f2);
		friend Fraction operator* (const Fraction& f1, const Fraction& f2);

};