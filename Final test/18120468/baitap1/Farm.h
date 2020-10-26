#pragma once
#include <vector>
#include "Animal.h"
#include "Goat.h"
#include "Sheep.h"
#include "Cow.h"
class Farm
{
private:
	vector<Animal*> animalArr;
public:

	Farm();
	~Farm();
	void getBirthOfFarm();
	void getMilkOfFarm();
	void soundOfFarm();
};