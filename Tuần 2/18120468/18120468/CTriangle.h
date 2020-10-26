#ifndef _CPoint_
#define _CPoint_
#include "CPoint.h"

#endif // !_CPoint_

class CTriangle
{
private:
	CPoint* _a;
	CPoint* _b;
	CPoint* _c;
public:
	CPoint* get_a();
	CPoint* get_b();
	CPoint* get_c();
	void set_a(CPoint* a);
	void set_b(CPoint* b);
	void set_c(CPoint* c);
	float Perimeter();
	float Area();
public:
	CTriangle();
	CTriangle(CPoint* a, CPoint* b, CPoint* c);
	~CTriangle();
};