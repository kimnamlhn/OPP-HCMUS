#include "Animal.h"
#include "Farm.h"

int Cow::numberOfCow = 0;
int Sheep::numberOfSheep = 0;
int Goat::numberOfGoat = 0;
long Animal::numberOfMilk = 0;

int main()
{
	Farm farm;
	farm.getBirthOfFarm();
	farm.getMilkOfFarm();

	cout << "Animal sounds of farm: " << endl;
	farm.soundOfFarm();
	cout << "\n\nInformation of farm: " << endl;
	cout << "Number of Cow: " << Cow::numberOfCow << endl;
	cout << "Number of Sheep: " << Sheep::numberOfSheep << endl;
	cout << "Number of Goat: " << Goat::numberOfGoat << endl;
	cout << "Number of Milk: " << Animal::numberOfMilk << endl;

	return 0;
}