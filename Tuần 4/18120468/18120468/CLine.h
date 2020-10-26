#ifndef _CPoint_
#define _CPoint_
#include "CPoint.h"
class CLine
{
private:
	CPoint _start;
	CPoint _end;
	float _length;
public:
	CPoint getStart();
	CPoint getEnd();
	void setStart(CPoint start);
	void setEnd(CPoint end);
	void displayLine();
	string toString();
	friend istream& operator >>(istream& in, CLine* p);
	friend ostream& operator <<(ostream& out, CLine* p);
public:
	CLine();
	CLine(const CLine&);
	CLine(CPoint start, CPoint end);
	~CLine();
};
#endif // !_CPoint_
