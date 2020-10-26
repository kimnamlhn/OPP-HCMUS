#ifndef _CPoint_
#define _CPoint_
#include "CPoint.h"
#endif // !_CPOINT_


class DynamicArray
{
private:
	const int INITIAL_SIZE = 128;
private:
	int* a;
	int _len;
	int _max;
public:
	DynamicArray();
	DynamicArray(int *arr, int size);
	~DynamicArray();
	void pushBack(int value);
	int getAt(int index);
	void printArray();
};