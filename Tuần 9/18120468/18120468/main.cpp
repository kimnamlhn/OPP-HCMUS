#pragma once
#include "Carbriolet.h"
#include "gmtTime.h"
#include "Time.h"
#include "Farm.h"
#include <vector>

int Cow::numberOfCow = 0;
int Goat::numberOfGoat = 0;
int Sheep::numberOfSheep = 0;
long Animal::numberOfMilk = 0;

int main()
{
	//test xe mui trần
	Carbriolet car;
	car.startEngine();
	cout << "----------------------------------" << endl;

	//test lớp thời gian (time)
	gmtTime now;
	cout << now.toString(0) << endl;
	cout << now.toString(7) << endl;
	cout << now.toString(25) << endl;
	cout << "----------------------------------" << endl;


	//test nông trại
	Farm farm;
	farm.getBirth();
	farm.getMilk();
	//tiếng kêu của tất cả các gia súc
	cout << "Animal sounds: " << endl;
	farm.sound();
	//thông tin của trang trại
	cout << "\n\nInformation of farm: " << endl;
	cout << "Number of Cow: " << Cow::numberOfCow << endl;
	cout << "Number of Sheep: " << Sheep::numberOfSheep << endl;
	cout << "Number of Goat: " << Goat::numberOfGoat << endl;
	cout << "Number of milk: " << Animal::numberOfMilk << endl;
	


	return 0;
}