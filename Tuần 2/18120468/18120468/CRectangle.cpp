#include "CRectangle.h"

CPoint* CRectangle::getTopLeft()
{
	return _topLeft;
}

CPoint* CRectangle::getBottomRight()
{
	return _bottomRight;
}

void CRectangle::setTopLeft(CPoint* topLeft)
{
	_topLeft = topLeft;
}

void CRectangle::setBottomRight(CPoint* bottomRight)
{
	_bottomRight = bottomRight;
}

CRectangle::CRectangle()
{
	_topLeft = new CPoint(1, 1);
	_bottomRight = new CPoint(10, 10);
}

CRectangle::CRectangle(CPoint* topLeft, CPoint* bottomRight)
{
	_topLeft = topLeft;
	_bottomRight = bottomRight;
}

CRectangle::~CRectangle()
{
	delete _topLeft;
	delete _bottomRight;
}


float CRectangle::getLength()
{
	if ((_bottomRight->getX() - _topLeft->getX()) > 0)
		return (_bottomRight->getX() - _topLeft->getX());
	else
		return (_topLeft->getX() - _bottomRight->getX());
}
float CRectangle:: getWidth()
{
	if ((_topLeft->getY() - _bottomRight->getY()) > 0)
		return _topLeft->getY() - _bottomRight->getY();
	else
		return (_bottomRight->getY() - _topLeft->getY());

}


float CRectangle::Area()
{
	return (this->getLength() * this->getWidth());
}


float CRectangle::Perimeter()
{
	return (this->getLength() + this->getWidth()) * 2;
}
