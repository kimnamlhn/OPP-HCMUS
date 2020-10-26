#include "Random.h"
class Dice
{
private:
	int _rollCount;
public:
	int roll() {
		Random temp;
		int value = temp.Next(1,6);
		_rollCount++;
		return value;
	}

	int getRollCount()
	{
		return _rollCount;
	}
	Dice() {
		_rollCount = 0;
	}

};