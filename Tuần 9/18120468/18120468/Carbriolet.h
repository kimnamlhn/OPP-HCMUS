#include "Car.h"

class Carbriolet:public Car
{
public:
	void startEngine()
	{
		cout << "Removing roof" << endl;
		Car::startEngine();
	}
};