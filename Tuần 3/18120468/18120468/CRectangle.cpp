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
	countRectangle++;
	_topLeft = CPoint(0, 0);
	_bottomRight = CPoint(0, 0);
}

CRectangle::CRectangle(CPoint topLeft, CPoint bottomRight)
{
	countRectangle++;
	_topLeft = topLeft;
	_bottomRight = bottomRight;
}

CRectangle::~CRectangle()
{
	
}


CRectangle::CRectangle(const CRectangle& src)
{
	this->_topLeft = src._topLeft;
	this->_bottomRight = src._bottomRight;
	countRectangle++;
}

void CRectangle::displayRectangle()
{
	cout << "Top left is (" <<this->getTopLeft().getX()<< "," << this->getTopLeft().getY() << ") and bottom right is (" << this->getBottomRight().getX() << "," << this->getBottomRight().getY() << ")" << endl;
}