#include "Animal.h"

class Sheep :public Animal
{
public:
	static int numberOfSheep;

	void getBirth()
	{
		if (this->getSex() == 0) {
			int ran = rand();
			Sheep::numberOfSheep = Sheep::numberOfSheep + ran;
		}
	}
	void getMilk()
	{
		if (this->getSex() == 0) {
			int milk = rand() % 5; // 0-20
			Animal::numberOfMilk += milk;
		}
	}
	void sound()
	{
		cout << "Cuu keu  ";
	}

	Sheep()
	{
		numberOfSheep++;
		int _sex = rand() % 1;//0-1
		setSex(_sex);
	}
	~Sheep()
	{
		numberOfSheep--;
	}
};