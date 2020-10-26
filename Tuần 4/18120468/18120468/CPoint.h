#include <iostream>
#include <math.h>
#include <string>
#include <sstream>


using namespace std;

class CPoint
{
private:
	float _x;
	float _y;
public:
	float getX();
	float getY();
	void setX(float x);
	void setY(float y);
	float calcDistanceTo(const CPoint* other);
	string toString();
	friend istream& operator >>(istream& in, CPoint* p);
	friend ostream& operator <<(ostream& out, CPoint* p);
public:
	CPoint();
	CPoint(float x, float y);
	CPoint(const CPoint&);
	~CPoint();
};