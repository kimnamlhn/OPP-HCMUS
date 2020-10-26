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

void Farm::getBirthOfFarm()
{
	for (int i = 0; i < animalArr.size(); i++)
	{
		animalArr[i]->getBirth();
	}
}

void Farm::getMilkOfFarm()
{
	for (int i = 0; i < animalArr.size(); i++)
	{
		animalArr[i]->getMilk();
	}
}

void Farm::soundOfFarm()
{
	for (int i = 0; i < animalArr.size(); i++)
	{
		animalArr[i]->sound();
	}
}


