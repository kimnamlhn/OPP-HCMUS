#include "CLine.h"

CPoint CLine::getStart()
{
	return _start;
}

CPoint CLine::getEnd()
{
	return _end;
}

void CLine::setStart(CPoint start)
{
	_start = start;
}

void CLine::setEnd(CPoint end)
{
	_end = end;
}

CLine::CLine()
{
	_start = CPoint(0, 0);
	_end = CPoint(0, 0);
}

CLine::CLine(CPoint start, CPoint end)
{
	_start = start;
	_end = end;
}

CLine::~CLine()
{

}

