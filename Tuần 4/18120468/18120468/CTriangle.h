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
	string toString();
	void setTriangle(CPoint a, CPoint b, CPoint c);
	friend istream& operator >>	(istream& in, CTriangle* p);
	friend ostream& operator <<(ostream& out, CTriangle* p);
public:
	CTriangle();
	CTriangle(CPoint* a, CPoint* b, CPoint* c);
	~CTriangle();
};