#ifndef _CPoint_
#define _CPoint_
#include "CPoint.h"

#endif // !_CPoint_

class CCircle
{
private:
	CPoint _center;
	float _radius;
public:
	CPoint getCenter();
	float getRadius();
	void setCenter(CPoint center);
	void setRadius(float radius);
	string toString();
	friend istream& operator >>(istream& in, CCircle* p);
	friend ostream& operator <<(ostream& out, CCircle* p);
	friend ostream& operator <<(ostream& out, CCircle p);
	float getArea();
	bool operator < (CCircle& other);
	static CCircle* Parse(string line);
public:
	CCircle();
	CCircle(CPoint center, float radius);
	~CCircle();
};
