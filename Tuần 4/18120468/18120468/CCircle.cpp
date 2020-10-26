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

string CCircle::toString()
{
	stringstream writer;
	writer << "Center: (" << this->_center.getX() << "," << this->_center.getX() << ") and radius: " << this->_radius;

	return writer.str();
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

istream& operator>>(istream& in, CCircle* p)
{
	float  r;
	CPoint a;
	cout << "Enter center of circle: " << endl;
	in >> &a;
	cout << "Enter radius: ";
	in >> r;
	p->setCenter(a);
	p->setRadius(r);
	return in;
}

ostream& operator<<(ostream& out, CCircle* p)
{
	out << "Circle with center(" << p->getCenter().getX() << "," << p->getCenter().getY() << ") and radius: " << p->getRadius();
	return out;
}
