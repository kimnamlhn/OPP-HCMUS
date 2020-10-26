#include "Animal.h"

class Sheep :public Animal
{
public:
	static int numberOfSheep;

	Sheep()
	{
		numberOfSheep++;
		int _sex = rand() % 1;//0-1
		setSex(_sex);
		ani = 2;
	}
	~Sheep()
	{
		numberOfSheep--;
	}
};