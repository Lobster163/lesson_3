#pragma once

#include <iostream>
#include <string>

using namespace std;

class Car
{
	string _company;
	string _model;
	public:
		Car(string company, string model);
		virtual ~Car();
		string getCompanyName();
		string getModelName();
};

void printInfo(Car* car);

class PassengerCar : virtual public Car
{
	public:
		PassengerCar(string company, string model);
		~PassengerCar();
};

class Bus : virtual public Car
{
	public:
		Bus(string company, string model);
		~Bus();
};

class Minivan : public PassengerCar, public Bus
{
	public:
		Minivan(string company, string model);
		~Minivan();
};
