#include "CPoint.h"


float CPoint::getX()
{
	return _x;
}
float CPoint::getY()
{
	return _y;
}
void CPoint::setX(float x)
{
	_x = x;
}
void CPoint::setY(float y)
{
	_y = y;
}

CPoint::CPoint()
{
	this->_x = 0;
	this->_y = 0;
}

CPoint::CPoint(float x, float y)
{
	this->_x = x;
	this->_y = y;
}


CPoint::~CPoint()
{

}

float CPoint::calcDistanceTo(const CPoint* other)
{
	float dx = (this->_x - other->_x);
	float dy = (this->_y - other->_y);
		return sqrt(dx * dx + dy * dy);
}