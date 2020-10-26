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
	_length = 0;
	countLine++;
}

CLine::CLine(CPoint start, CPoint end)
{
	_start = start;
	_end = end;
	_length = _start.calcDistanceTo(&_end);
	countLine++;
}

CLine::~CLine()
{

}

CLine::CLine(const CLine& src)
{
	this->_start = src._start;
	this->_end = src._end;
	this->_length = src._length;
	countLine++;
}

void CLine::displayLine()
{
	cout << "start(" << this->getStart().getX() << "," << this->getStart().getY() << ") and end(" << this->getEnd().getX() << "," << this->getEnd().getY() << ")" << endl;

}