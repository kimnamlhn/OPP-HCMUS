#include "CFraction.h"

int CFraction::getNum()
{
	return _num;
}

int CFraction::getDen()
{
	return _den;
}

void CFraction::setNum(int num)
{
	_num = num;
}

void CFraction::setDen(int den)
{
	_den = den;
}

CFraction::CFraction()
{
	_num = 0;
	_den = 1;
}

CFraction::CFraction(int num, int den)
{
	_num = num;
	_den = den;
}

CFraction::~CFraction()
{

}
