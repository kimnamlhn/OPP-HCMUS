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

string CFraction::toString()
{
	stringstream writer;
	writer << _num << "/" << _den;
	return writer.str();
}

bool CFraction::checkFraction()
{
	if (this->_den == 0)
		return false;
	if (this->_den < 0) {
		_num = -_num;
		_den = -_den;
	}
	return true;
}

int CFraction::gcd(int a, int b)
{
	if (a == 0)
		return b;
	if (b == 0)
		return a;

	if (a == b)
		return a;

	if (a > b)
		return gcd(a - b, b);
	return gcd(a, b - a);

}

void CFraction::abridgedFractions()
{
	int gcdFraction = this->gcd(this->_num, this->_den);
	this->_num = this->_num / gcdFraction;
	this->_den = this->_den / gcdFraction;
}

CFraction::CFraction()
{
	Random rd;
	_num = rd.Next();
	_den = rd.Next();
}

CFraction::CFraction(int num, int den)
{
	_num = num;
	_den = den;
}

CFraction::~CFraction()
{

}

istream& operator>>(istream& in, CFraction* p)
{
	cout << "Input fraction: " << endl;
	int num, den;
	cout << "Enter numerator: ";
	in >> num;
	cout << "Enter denominator: ";
	in >> den;
	p->setNum(num);
	p->setDen(den);
	if (p->checkFraction() == false) {
		cout << "Please input correct fraction! " << endl;
		in >> p;

	}
	return in;
}

ostream& operator<<(ostream& out, CFraction* p)
{
	out << "Fraction: " << p->_num << "/" << p->_den;
	return out;
}
