#ifndef _DECLARED_
#define _DECLARED_

#include <iostream>
#include <sstream>
using namespace std;

#endif // !_DECLARED_

#include "Random.h"

class CFraction
{
private:
	int _num;
	int _den;
public:
	int getNum();
	int getDen();
	void setNum(int num);
	void setDen(int den);
	string toString();
	bool checkFraction();
	int gcd(int a, int b);
	void abridgedFractions();
	friend istream& operator>>(istream& in, CFraction* p);
	friend ostream& operator <<(ostream& out, CFraction* p);
public:
	CFraction();
	CFraction(int num, int den);
	~CFraction();
};