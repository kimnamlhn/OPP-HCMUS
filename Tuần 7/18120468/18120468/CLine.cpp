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
}

CLine::CLine(CPoint start, CPoint end)
{
	_start = start;
	_end = end;
	_length = _start.calcDistanceTo(&_end);
}

CLine::~CLine()
{

}

CLine::CLine(const CLine& src)
{
	this->_start = src._start;
	this->_end = src._end;
	this->_length = src._length;
}

void CLine::displayLine()
{
	cout << "start(" << this->getStart().getX() << "," << this->getStart().getY() << ") and end(" << this->getEnd().getX() << "," << this->getEnd().getY() << ")" << endl;

}

string CLine::toString()
{
	stringstream writer;
	writer << "Line with start" << _start.toString() << " and end " << _end.toString();
	return writer.str();
}

CLine* CLine::Parse(string line)
{
	CLine* tmp = new CLine();
	line.erase(0, 1);
	line.erase(line.length() - 1, 1);
	vector <string> str;

	str = Tokenizer::Parse(line, "), (");
	vector <string> p;
	vector <int> numbers;
	for (int i = 0; i < str.size(); i++)
	{
		p = Tokenizer::Parse(str[i], ", ");
		for (int j = 0; j < p.size(); j++)
		{
			auto num = stoi(p[j]);
			numbers.push_back(num);
		}
	}
	
	tmp->setStart({ (float)numbers[0],(float)numbers[1] });
	tmp->setEnd({ (float)numbers[2],(float)numbers[3] });
	
	return tmp;
}

istream& operator>>(istream& in, CLine* p)
{
	CPoint x, y;
	cout << "Input line: " << endl;
	cout << "Enter point of start: " << endl;
	in >> &x;
	cout << "Enter point of end: " << endl;
	in >> &y;
	p->setStart(x);
	p->setEnd(y);
	return in;
	
}

ostream& operator<<(ostream& out, CLine* p)
{
	out << "Line with start(" << p->getStart().getX() << "," << p->getStart().getY() << ") and end(" << p->getEnd().getX() << "," << p->getEnd().getY() << ")";
	return out;
}
