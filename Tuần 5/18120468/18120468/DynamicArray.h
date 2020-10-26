#ifndef _DECLARED_
#define _DECLARED_

#include <iostream>
#include <sstream>
using namespace std;

#endif // !_DECLARED_



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
	DynamicArray(int* arr, int size);
	~DynamicArray();
	int getLen()
	{
		return _len;
	}
	void pushBack(int value);
	int getAt(int index);
	void printArray();
	DynamicArray(const DynamicArray&);
	string toString();
	void setDynamicArray(int temp[], int size);
	friend istream& operator >>	(istream& in, DynamicArray* p);
	friend ostream& operator <<(ostream& out, DynamicArray* p);
};