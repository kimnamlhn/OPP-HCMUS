#include "CRectangle.h"

CPoint CRectangle::getTopLeft()
{
	return _topLeft;
}

CPoint CRectangle::getBottomRight()
{
	return _bottomRight;
}

void CRectangle::setTopLeft(CPoint topLeft)
{
	_topLeft = topLeft;
}

void CRectangle::setBottomRight(CPoint bottomRight)
{
	_bottomRight = bottomRight;
}

CRectangle::CRectangle()
{
	_topLeft = CPoint(0, 0);
	_bottomRight = CPoint(0, 0);
}

CRectangle::CRectangle(CPoint topLeft, CPoint bottomRight)
{
	_topLeft = topLeft;
	_bottomRight = bottomRight;
}

CRectangle::~CRectangle()
{

}
