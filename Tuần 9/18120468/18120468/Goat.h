#include "Animal.h"

class Goat :public Animal
{
public:
	static int numberOfGoat;

	Goat()
	{
		numberOfGoat++;
		int _sex = rand() % 1;//0-1
		setSex(_sex);
		ani = 3;
	}
	~Goat()
	{
		numberOfGoat--;
	}
};