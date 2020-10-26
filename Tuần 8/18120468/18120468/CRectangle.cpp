#include "CRectangle.h"

CPoint CRectangle::getTopLeft()
{
	return _topLeft;
}

CPoint CRectangle::getBottomRight()
{
	return _bottomRight;
}

void CRectangle::setTopLeft(CPoint topLeft)
{
	_topLeft = topLeft;
}

void CRectangle::setBottomRight(CPoint bottomRight)
{
	_bottomRight = bottomRight;
}

CRectangle::CRectangle()
{
	_topLeft = CPoint(0, 0);
	_bottomRight = CPoint(0, 0);
}

CRectangle::CRectangle(CPoint topLeft, CPoint bottomRight)
{
	_topLeft = topLeft;
	_bottomRight = bottomRight;
}

CRectangle::~CRectangle()
{

}


CRectangle::CRectangle(const CRectangle& src)
{
	this->_topLeft = src._topLeft;
	this->_bottomRight = src._bottomRight;
}

void CRectangle::displayRectangle()
{
	cout << "Top left is (" << this->getTopLeft().getX() << "," << this->getTopLeft().getY() << ") and bottom right is (" << this->getBottomRight().getX() << "," << this->getBottomRight().getY() << ")" << endl;
}

string CRectangle::toString()
{
	stringstream writer;
	writer << "Rectangle with top left" << _topLeft.toString() << "and bottom right" << _bottomRight.toString();
	return writer.str();
}

bool CRectangle::operator<(CRectangle& other)
{
	if (this->getArea() < other.getArea())
		return true;
	return false;
}

CRectangle* CRectangle::Parse(string line)
{
	CRectangle* tmp = new CRectangle();
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

	tmp->setTopLeft({ (float)numbers[0],(float)numbers[1] });
	tmp->setBottomRight({ (float)numbers[2],(float)numbers[3] });

	return tmp;
}

float CRectangle::getArea()
{
	//chiều dài, chiều rộng là số luôn dương
	float width, height;
	//chiều rộng 
	if ((this->_topLeft.getX() - this->_bottomRight.getX()) > 0)
		width = this->_topLeft.getX() - this->_bottomRight.getX();
	else
		width = this->_bottomRight.getX() - this->_topLeft.getX();
	//chiều cao
	if ((this->_topLeft.getY() - this->_bottomRight.getY()) > 0)
		height = this->_topLeft.getY() - this->_bottomRight.getY();
	else
		height = this->_bottomRight.getY() - this->_topLeft.getY();
	return width * height;
}

istream& operator>>(istream& in, CRectangle* p)
{
	CPoint a, b;
	cout << "Input rectangle: " << endl;
	cout << "Enter point of top left: " << endl;
	in >> &a;
	cout << "Enter point of bottom right: " << endl;
	in >> &b;
	p->setTopLeft(a);
	p->setBottomRight(b);
	return in;
}

ostream& operator<<(ostream& out, CRectangle* p)
{
	out << "Rectangle with Top left (" << p->getTopLeft().getX() << "," << p->getTopLeft().getY() << ") and bottom right (" << p->getBottomRight().getX() << "," << p->getBottomRight().getY() << ")";
	return out;
}

ostream& operator<<(ostream& out, CRectangle p)
{
	out << "{(" << p.getTopLeft().getX() << "," << p.getTopLeft().getY() << "), (" << p.getBottomRight().getX() << "," << p.getBottomRight().getY() << ")}  ";
	return out;
}
