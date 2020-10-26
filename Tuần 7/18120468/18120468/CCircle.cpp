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
	writer << "Center: (" << this->_center.getX() << "," << this->_center.getY() << ") and radius: " << this->_radius;

	return writer.str();
}

CCircle* CCircle::Parse(string line)
{
	CCircle* tmp = new CCircle();
	line.erase(0, 1);
	vector <string> str;
	vector <string> center;
	vector <string> cal;
	float radius = 0;

	str = Tokenizer::Parse(line, "), ");
	center = Tokenizer::Parse(str[0], ", ");
	cal = Tokenizer::Parse(str[1], ".");


	radius = (float)stoi(cal[0]) + (float)stoi(cal[1]) * 0.1; // 1.8 = 1 + 8*0.1

	tmp->setCenter({ (float)stoi(center[0]),(float)stoi(center[1]) });
	tmp->setRadius(radius);
	

	return tmp;
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
