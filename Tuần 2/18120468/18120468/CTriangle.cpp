#include "CTriangle.h"

CPoint* CTriangle::get_a()
{
	return _a;
}

CPoint* CTriangle::get_b()
{
	return _b;
}

CPoint* CTriangle::get_c()
{
	return _c;
}

void CTriangle::set_a(CPoint* a)
{
	_a = a;
}

void CTriangle::set_b(CPoint* b)
{
	_b = b;
}

void CTriangle::set_c(CPoint* c)
{
	_c = c;
}

CTriangle::CTriangle()
{
	_a = new CPoint(1, 1);
	_b = new CPoint(1, 2);
	_c = new CPoint(4, 2);
}

CTriangle::CTriangle(CPoint* a, CPoint* b, CPoint* c)
{
	_a = a;
	_b = b;
	_c = c;
}

CTriangle::~CTriangle()
{
	delete _a;
	delete _b;
	delete _c;
}

float CTriangle::Perimeter()
{
	return (this->_a->calcDistanceTo(this->_b) + this->_b->calcDistanceTo(this->_c) + this->_c->calcDistanceTo(this->_a));

}


float CTriangle::Area()
{
	float p = ((this->Perimeter()) / 2);
	//math
	//heron 
	float area = (p * (p - this->_a->calcDistanceTo(_b)) * (p - this->_b->calcDistanceTo(_c)) * (p - this->_c->calcDistanceTo(_a)));
	return sqrt(area);

}


