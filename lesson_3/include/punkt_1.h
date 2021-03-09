#pragma once

#include <iostream>
#include <cmath>


class Figure
{
	public:
		virtual float area() = 0;
		virtual ~Figure() {};
};

void printArea(Figure* figure);

class Parallelogram : public Figure
{
	float _a, _b;
	public:
		Parallelogram(float a, float b) : _a(a), _b(b) {}
		float area();
};

class Circle : public Figure
{
	const float pi = 3.14f;
	float _radius;
	public:
		Circle(float radius) : _radius(radius) {};
		float area();
};

class Rectangle : public Parallelogram
{	
	public:
		Rectangle(float a, float b) : Parallelogram(a, b) {}
};

class Square : public Parallelogram
{
	public:
		Square(float a, float b) : Parallelogram(a, b) {}
};

class Rhombus : public Parallelogram
{
	public:
		Rhombus(float a, float b) : Parallelogram(a, b) {}
};