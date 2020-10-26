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
public:
	CCircle();
	CCircle(CPoint center, float radius);
	~CCircle();
};
