#include "Animal.h"

class Cow :public Animal
{
public:
	static int numberOfCow;

	Cow()
	{
		numberOfCow++;
		int _sex = rand() % 1;//0-1
		setSex(_sex);
		ani = 1;
	}
	~Cow()
	{
		numberOfCow--;
	}
};