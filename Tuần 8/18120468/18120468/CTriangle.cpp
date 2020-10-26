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

CTriangle* CTriangle::Parse(string line)
{
	CTriangle* tmp = new CTriangle();
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

	tmp->setTriangle({ (float)numbers[0],(float)numbers[1] }, { (float)numbers[2],(float)numbers[3] }, { (float)numbers[4],(float)numbers[5] });
	return tmp;
}

bool CTriangle::operator<(CTriangle& other)
{
	if (this->Area() < other.Area())
		return true;
	return false;
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

float CTriangle::Perimeter()
{
	return (this->_a.calcDistanceTo(&this->_b) + this->_b.calcDistanceTo(&this->_c) + this->_c.calcDistanceTo(&this->_a));
}


float CTriangle::Area()
{
	float p = ((this->Perimeter()) / 2);
	//math
	//heron 
	float area = (p * (p - this->_a.calcDistanceTo(&_b)) * (p - this->_b.calcDistanceTo(&_c)) * (p - this->_c.calcDistanceTo(&_a)));
	return sqrt(area);

}

string CTriangle::toString()
{
	stringstream writer;
	writer << "Triangle with A" << _a.toString() << ", B" << _b.toString() << " and C" << _c.toString();
	return writer.str();
}

void CTriangle::setTriangle(CPoint a, CPoint b, CPoint c)
{
	this->_a.setX(a.getX());
	this->_a.setY(a.getY());

	this->_b.setX(b.getX());
	this->_b.setY(b.getY());

	this->_c.setX(c.getX());
	this->_c.setY(c.getY());
}

istream& operator>>(istream& in, CTriangle* p)
{
	CPoint a, b, c;
	cout << "Input triangle: " << endl;
	cout << "Enter A: " << endl;
	in >> &a;
	cout << "Enter B: " << endl;
	in >> &b;
	cout << "Enter C: " << endl;
	in >> &c;
	p->setTriangle(a, b, c);
	return in;
}

ostream& operator<<(ostream& out, CTriangle* p)
{
	out << "Triangle: A(" << p->get_a().getX() << "," << p->get_a().getY() << "), B(" << p->get_b().getX() << "," << p->get_b().getY() << ") and C(" << p->get_c().getX() << "," << p->get_c().getY() << ").";
	return out;
}

ostream& operator<<(ostream& out, CTriangle p)
{
	out << "{(" << p.get_a().getX() << "," << p.get_a().getY() << "), (" << p.get_b().getX() << "," << p.get_b().getY() << "), (" << p.get_c().getX() << "," << p.get_c().getY() << ")}  ";
	return out;
}