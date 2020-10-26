#include "Animal.h"

class Goat :public Animal
{
public:
	static int numberOfGoat;

	void getBirth()
	{
		if (this->getSex() == 0) {
			int ran = rand();
			Goat::numberOfGoat = Goat::numberOfGoat + ran;
		}
	}
	void getMilk()
	{
		if (this->getSex() == 0) {
			int milk = rand() % 10; // 0-10
			Animal::numberOfMilk += milk;
		}
	}
	void sound()
	{
		cout << "De keu  ";
	}

	Goat()
	{
		numberOfGoat++;
		int _sex = rand() % 1;//0-1
		setSex(_sex);
	}
	~Goat()
	{
		numberOfGoat--;
	}
};