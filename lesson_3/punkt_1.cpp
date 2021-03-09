#include "include/punkt_1.h"

float Parallelogram::area()
{
	return _a * _b;
}

float Circle::area()
{
	return pi * powf(_radius, 2);
}

void printArea(Figure* figure)
{
	std::cout << "Area = " << figure->area() << " \n";
}