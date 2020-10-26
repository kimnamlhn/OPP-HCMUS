#include "Farm.h"

Farm::Farm()
{
	int numOfAninal = rand();
	int ran;
	Animal* animal;
	for (int i = 0; i < numOfAninal; i++)
	{
		ran = rand() % 3 + 1;
		if (ran == 1) {
			animal = new Cow;
			animalArr.push_back(animal);
		}
		else if (ran == 2)
		{
			animal = new Sheep;
			animalArr.push_back(animal);
		}
		else
		{
			animal = new Goat;
			animalArr.push_back(animal);
		}

	}
}

Farm::~Farm()
{
	for (int i = 0; i < animalArr.size(); i++)
		delete animalArr[i];
}

void Farm::getBirth()
{
	for (int i = 0; i < animalArr.size(); i++)
	{
		if (animalArr[i]->ani == 1)
			if (animalArr[i]->getSex()==0) {
				int ran = rand();
				Cow::numberOfCow = Cow::numberOfCow + ran;
			}
		if (animalArr[i]->ani == 2)
			if (animalArr[i]->getSex() == 0) {
				int ran = rand();
				Sheep::numberOfSheep = Sheep::numberOfSheep + ran;
			}
		if (animalArr[i]->ani == 3)
			if (animalArr[i]->getSex() == 0) {
				int ran = rand();
				Goat::numberOfGoat = Goat::numberOfGoat + ran;
			}
	}
}

void Farm::getMilk()
{
	for (int i = 0; i < animalArr.size(); i++)
	{
		if (animalArr[i]->ani == 1)
			if (animalArr[i]->getSex() == 0) {
				int milk = rand() % 20; // 0-20
				Animal::numberOfMilk += milk;
			}
		if (animalArr[i]->ani == 2)
			if (animalArr[i]->getSex() == 0) {
				int milk = rand() % 5; // 0-5
				Animal::numberOfMilk += milk;
			}
		if (animalArr[i]->ani == 3)
			if (animalArr[i]->getSex() == 0) {
				int milk = rand() % 10; // 0-10
				Animal::numberOfMilk += milk;
			}
	}
}

void Farm::sound()
{
	for (int i = 0; i < animalArr.size(); i++)
	{
		if (animalArr[i]->ani == 1)
			cout << "Bo keu  ";
		if (animalArr[i]->ani == 2)
			cout << "Cuu keu  ";
		if (animalArr[i]->ani == 3)
			cout << "De keu  ";
	}
}
