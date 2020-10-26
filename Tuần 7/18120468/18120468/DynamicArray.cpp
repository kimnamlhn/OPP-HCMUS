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

DynamicArray::DynamicArray(int* arr, int size)
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

DynamicArray::DynamicArray(const DynamicArray& src)
{
	_len = src._len;
	_max = src._max;
	a = new int[_len];
	for (int i = 0; i < _len; i++)
	{
		a[i] = src.a[i];
	}
}

string DynamicArray::toString()
{
	stringstream writer;
	for (int i = 0; i < _len; i++) {
		writer << a[i] << " ";
	}
	return writer.str();
}

void DynamicArray::setDynamicArray(int temp[], int size)
{
	this->_len = size;
	this->_max = size;
	for (int i = 0; i < size; i++)
	{
		this->a[i] = temp[i];
	}
}

DynamicArray* DynamicArray::Parse(string line)
{
	DynamicArray* tmp = new DynamicArray();

	vector <string> str;

	str = Tokenizer::Parse(line, ", ");
	vector <int> numbers;
	for (int i = 0; i < str.size(); i++)
	{
		auto num = stoi(str[i]);
		numbers.push_back(num);
	}

	tmp->setDynamicArray(&numbers[0], numbers.size());

	return tmp;
}

istream& operator>>(istream& in, DynamicArray* p)
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

ostream& operator<<(ostream& out, DynamicArray* p)
{
	cout << "Show dynamic array: " << endl;
	for (int i = 0; i < p->_len; i++)
	{
		out << p->a[i] << "  ";
	}
	return out;
}
