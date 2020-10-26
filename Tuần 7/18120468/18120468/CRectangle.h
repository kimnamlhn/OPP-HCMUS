#ifndef _CPoint_
#define _CPoint_
#include "CPoint.h"


#endif // !_CPoint_

class CRectangle
{
private:
	CPoint _topLeft;
	CPoint _bottomRight;
public:
	CPoint getTopLeft();
	CPoint getBottomRight();
	void setTopLeft(CPoint topLeft);
	void setBottomRight(CPoint bottomRight);
	void displayRectangle();
	string toString();
	friend istream& operator >> (istream& in, CRectangle* p);
	friend ostream& operator <<(ostream& out, CRectangle* p);
	static CRectangle* Parse(string line);

public:
	CRectangle();
	CRectangle(const CRectangle&);
	CRectangle(CPoint topLeft, CPoint bottomRight);
	~CRectangle();
};


