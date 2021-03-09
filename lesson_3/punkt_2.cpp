#include "include/punkt_2.h"

void printData(string nameClass, uint8_t type){
	string text = "";
	if (type == 0)
		text = "constructed";
	else
		text = "destructed";

	std::cout << nameClass << " " << text << std::endl;
}

Car::Car(string company, string model) : _company(company), _model(model) { printData(typeid(*this).name(), 0); }
Car::~Car() {	printData(typeid(*this).name(), 1); }
string Car::getCompanyName() { return _company; }
string Car::getModelName() { return _model; }

PassengerCar::PassengerCar(string company, string model) : Car(company, model)
{	
	printData(typeid(*this).name(), 0);
	printInfo(this);
}
PassengerCar::~PassengerCar(){	printData(typeid(*this).name(), 1);}

Bus::Bus(string company, string model) : Car(company, model)
{
	printData(typeid(*this).name(), 0);
	printInfo(this);
}
Bus::~Bus() { printData(typeid(*this).name(), 1); }

Minivan::Minivan(string company, string model) : PassengerCar(company, model), Bus(company, model), Car(company, model)
{
	printData(typeid(*this).name(), 0);
	printInfo(this);
}
Minivan::~Minivan() { printData(typeid(*this).name(), 1); }

void printInfo(Car* car)
{
	std::cout << "----------Info----------\n";
	std::cout << typeid(*car).name() << std::endl;
	std::cout << "Company: " << car->getCompanyName() <<std::endl;
	std::cout << "Model: " << car->getModelName() << std::endl;
	std::cout << "--------Info end--------\n";
}
