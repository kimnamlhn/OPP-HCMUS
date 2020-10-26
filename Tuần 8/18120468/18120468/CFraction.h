#ifndef _CPoint_
#define _CPoint_
#include "CPoint.h"


#endif // !_CPoint_

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
	friend istream& operator>>(istream& in, CFraction* p);
	friend ostream& operator <<(ostream& out, CFraction* p);
	friend ostream& operator <<(ostream& out, CFraction p);
	static CFraction* Parse(string line);
	CFraction& operator+(const CFraction& other);
	CFraction& operator-(const CFraction& other);
	CFraction& operator*(const CFraction& other);
	CFraction& operator/(const CFraction& other);
	CFraction& operator++();
	CFraction& operator++(int dummy);
	bool operator < ( CFraction& other);

public:
	CFraction();
	CFraction(int num, int den);
	~CFraction();
};