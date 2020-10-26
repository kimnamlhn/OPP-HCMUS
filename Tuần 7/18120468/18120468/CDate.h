#ifndef _CPoint_
#define _CPoint_
#include "CPoint.h"


#endif // !_CPoint_

#include <time.h>



class CDate
{
private: 
	int _day;
	int _month;
	int _year;
public:
	static bool isLeapYear(int year);
	static bool isValidDate(int day, int month, int year);
	string toString();
	void setDate(int day, int month, int year);
	friend istream& operator >>(istream& in, CDate* p);
	friend ostream& operator <<(ostream& out, CDate* p);
	static CDate* Parse(string line);

	CDate();
	CDate(int day, int month, int year);
	~CDate();
};