#include <iostream>
#include <math.h>
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
public:
	CPoint();
	CPoint(float x, float y);
	CPoint(const CPoint&);
	~CPoint();
};