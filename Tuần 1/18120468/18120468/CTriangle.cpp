#include "CTriangle.h"

CPoint CTriangle::get_a()
{
	return _a;
}

CPoint CTriangle::get_b()
{
	return _b;
}

CPoint CTriangle::get_c()
{
	return _c;
}

void CTriangle::set_a(CPoint a)
{
	_a = a;
}

void CTriangle::set_b(CPoint b)
{
	_b = b;
}

void CTriangle::set_c(CPoint c)
{
	_c = c;
}

CTriangle::CTriangle()
{
	_a = CPoint(0, 0);
	_b = CPoint(0, 0);
	_c = CPoint(0, 0);
}

CTriangle::CTriangle(CPoint a, CPoint b, CPoint c)
{
	_a = a;
	_b = b;
	_c = c;
}

CTriangle::~CTriangle()
{

}


