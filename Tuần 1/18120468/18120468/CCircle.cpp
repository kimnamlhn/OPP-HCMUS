#include "CCircle.h"

CPoint CCircle::getCenter()
{
	return _center;
}

float CCircle::getRadius()
{
	return _radius;
}

void CCircle::setCenter(CPoint center)
{
	_center = center;
}

void CCircle::setRadius(float radius)
{
	_radius = radius;
}

CCircle::CCircle()
{
	this->_center = CPoint(0, 0);
	this->_radius = 0;
}

CCircle::CCircle(CPoint center, float radius)
{
	_center = center;
	_radius = radius;
}

CCircle::~CCircle()
{

}