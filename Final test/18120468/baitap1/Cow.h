#include "Animal.h"

class Cow :public Animal
{
public:
	static int numberOfCow;

	void getBirth()
	{
		if (this->getSex() == 0) {
			int ran = rand();
			Cow::numberOfCow = Cow::numberOfCow + ran;
		}
	}
	void getMilk()
	{
		if (this->getSex() == 0) {
			int milk = rand() % 20; // 0-20
			Animal::numberOfMilk += milk;
		}
	}
	void sound()
	{
		cout << "Bo keu  ";
	}

	Cow()
	{
		numberOfCow++;
		int _sex = rand() % 1;//0-1
		setSex(_sex);
	}
	~Cow()
	{
		numberOfCow--;
	}
};