#ifndef _CPoint_
#define _CPoint_
#include "CPoint.h"
#endif // !_CPOINT_

template <typename T>
class DynamicArray
{
private:
	const int INITIAL_SIZE = 128;
private:
	T* a;
	int _len;
	int _max;
public:
	DynamicArray()
	{
		a = new T[INITIAL_SIZE];
		_max = 128;
		_len = 0;
		//for (int i = 0; i < INITIAL_SIZE; i++)
		//{
		//	a[i] = 0;
		//}
	}
	DynamicArray(int* arr, int size)
	{
		_len = size;
		_max = INITIAL_SIZE;
		a = new T[_len];
		for (int i = 0; i < size; i++)
		{
			a[i] = arr[i];
		}

	}
	~DynamicArray()
	{
		delete[] a;
	}
	void pushBack(T value)
	{
		a[_len] = value;
		_len++;
	}
	T getAt(int index)
	{
		return a[index];
	}
	void printArray()
	{
		for (int i = 0; i < _len; i++)
		{
			cout << a[i] << " ";
		}
		cout << endl;
	}
	DynamicArray(const DynamicArray& src)
	{
		_len = src._len;
		_max = INITIAL_SIZE;
		a = new T[INITIAL_SIZE];
		for (int i = 0; i < _len; i++)
		{
			a[i] = src.a[i];
		}
	}
	string toString()
	{
		stringstream writer;
		for (int i = 0; i < _len; i++) {
			writer << a[i] << " ";
		}
		return writer.str();
	}
	void setDynamicArray(int temp[], int size)
	{

		this->_len = size;
		this->_max = INITIAL_SIZE;
		for (int i = 0; i < size; i++)
		{
			this->a[i] = temp[i];
		}
	}
	friend istream& operator >>	(istream& in, DynamicArray* p)
	{
		int size;
		int temp[128];
		cout << "Input dynamic array:	" << endl;
		cout << "Enter length of array: ";
		in >> size;
		for (int i = 0; i < size; i++)
		{
			cout << "a[" << i << "]= ";
			in >> temp[i];
		}
		p->setDynamicArray(temp, size);
		return in;
	}
	friend ostream& operator <<(ostream& out, DynamicArray* p)
	{
		cout << "Show dynamic array: " << endl;
		for (int i = 0; i < p->_len; i++)
		{
			out << p->a[i] << "  ";
		}
		return out;
	}

	void Sort() {
		for (int i = 0; i < _len - 1; i++)
			for (int j = _len - 1; i < j; j--)
				if (a[j] < a[j - 1])
					swap(a[j], a[j - 1]);
	}
	T getMax() {
		T max = a[0];
		for (int i = 1; i < _len; i++)
		{
			if (max < a[i])
				max = a[i];
		}
		return max;
	}
};

