#ifndef _RANDOM_
#define _RANDOM_
#include <random>
#include <time.h>
class Random
{
private:
public:
	Random() {
		srand(time(NULL));
	}

	int Next() {
		int value = rand() % 2147483647;
		return value;
	}

	int Next(int max)
	{
		int value = rand() % max;
		return value;
	}
	int Next(int start, int end)
	{
		int value = rand() % end + start;
		return value;
	}
};

#endif // !_RANDOM_


