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

CFraction* CFraction::Parse(string line)
{
	CFraction* tmp = new CFraction();

	vector <string> str;

	str = Tokenizer::Parse(line, "/");

	vector <int> numbers;
	for (int i = 0; i < str.size(); i++)
	{
		auto num = stoi(str[i]);
		numbers.push_back(num);
	}

	tmp->setNum(numbers[0]);
	tmp->setDen(numbers[1]);

	return tmp;
}

CFraction& CFraction::operator+(const CFraction& other)
{
	int num = _num * other._den + _den * other._num;
	int den = _den * other._den;

	CFraction result(num / Utils::Gcd(num, den), den / Utils::Gcd(num, den));
	return result;
}

CFraction& CFraction::operator-(const CFraction& other)
{
	int num = _num * other._den - _den * other._num;
	int den = _den * other._den;
	
	CFraction result(num / Utils::Gcd(num, den), den / Utils::Gcd(num, den));
	return result;
}

CFraction& CFraction::operator*(const CFraction& other)
{
	int num = _num * other._num;
	int den = _den * other._den;

	CFraction result(num / Utils::Gcd(num, den), den / Utils::Gcd(num, den));
	return result;
}

CFraction& CFraction::operator/(const CFraction& other)
{
	//(a/b)/(c/d) = (a/b) * (d/c)
	int num = _num * other._den;
	int den = _den * other._num;

	CFraction result(num / Utils::Gcd(num, den), den / Utils::Gcd(num, den));
	return result;
}

CFraction& CFraction::operator++()
{
	_num = _num * 1 + _den * 1;

	int gcd = Utils::Gcd(_num, _den);
	_num = _num / gcd;
	_den = _den / gcd;

	return *this;
}

CFraction& CFraction::operator++(int dummy)
{
	_num = _num * 1 + _den * 1;

	int gcd = Utils::Gcd(_num, _den);
	_num = _num / gcd;
	_den = _den / gcd;

	return *this;
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
