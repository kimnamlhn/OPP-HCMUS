#include "DynamicArray.h"

DynamicArray::DynamicArray()
{
	a = new int[INITIAL_SIZE];
	_max = 128;
	_len = 128;
	for (int i = 0; i < INITIAL_SIZE; i++)
	{
		a[i] = 0;
	}
}

DynamicArray::~DynamicArray()
{
	delete[] a;
}

DynamicArray::DynamicArray(int *arr, int size)
{
	_len = size;
	_max = _len;
	a = new int[_len];
	for (int i = 0; i < size; i++)
	{
		a[i] = arr[i];
	}

}

int DynamicArray::getAt(int index)
{
	return a[index];
}

void DynamicArray::pushBack(int value)
{
	a[_len] = value;
	_len++;
}

void DynamicArray::printArray()
{
	for (int i = 0; i < _len; i++)
	{
		cout << "a[" << i << "]= " << a[i] << endl;
	}
	cout << endl;
}