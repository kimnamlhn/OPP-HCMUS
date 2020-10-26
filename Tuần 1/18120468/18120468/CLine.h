#ifndef _CPoint_
#define _CPoint_
#include "CPoint.h"
class CLine
{
private:
	CPoint _start;
	CPoint _end;
public:
	CPoint getStart();
	CPoint getEnd();
	void setStart(CPoint start);
	void setEnd(CPoint end);
public:
	CLine();
	CLine(CPoint start, CPoint end);
	~CLine();
};
#endif // !_CPoint_
