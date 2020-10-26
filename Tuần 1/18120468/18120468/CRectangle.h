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
public:
	CRectangle();
	CRectangle(CPoint topLeft, CPoint bottomRight);
	~CRectangle();
};

