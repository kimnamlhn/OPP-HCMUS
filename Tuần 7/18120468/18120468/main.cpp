#include "CLine.h"
#include "CRectangle.h"
#include "DynamicArray.h"
#include "CCircle.h"
#include "CDate.h"
#include "CFraction.h"
#include "CStudent.h"
#include "CTriangle.h"
#include <iostream>
#include <string>
using namespace std;


int main()
{
	//LAB 8
	cout << "LAB 08: " << endl;
	
	//Đường thẳng
	CLine* line;
	line = CLine::Parse("(3, 4), (5, 9)");
	cout << line->toString() << endl;


	//Tam giác
	CTriangle* triangle;
	triangle = CTriangle::Parse("(6, 15), (1, 20), (61, 92)");
	cout << triangle->toString() << endl;
	

	//Hình chữ nhật
	CRectangle* rectangle;
	rectangle = CRectangle::Parse("(6, 15), (1, 20)");
	cout << rectangle->toString() << endl;


	//Hình tròn
	CCircle* circle;
	circle = CCircle::Parse("(4, 3), 1.8");
	cout << "Circle: " << circle->toString() << endl;


	//Phân số
	CFraction* fraction;
	fraction = CFraction::Parse("6/12");
	cout << "Fraction: " << fraction->toString() << endl;


	//Học sinh
	CStudent* student;
	student = CStudent::Parse("Nguyen Viet Long");
	cout << "Name: " << student->toString() << endl;


	//Ngày tháng
	CDate* date;
	date = CDate::Parse("24/12/2018");
	cout << "Date: " << date->toString() << endl;


	//Mảng động
	DynamicArray* dArr;
	dArr = DynamicArray::Parse("5, 8, 12, 15, 612, 19");
	cout << "Dynamic Array: " << dArr->toString() << endl;



	//LAB 09:
	cout << "\nLAB 09: " << endl;

	//Phân số
	CFraction A(3, 4);
	CFraction B(1, 2);
	CFraction C;

	cout << "A and B are fractions!!" << endl;
	cout << "A = " << A.toString() << endl;
	cout << "B = " << B.toString() << endl;

	//operator + 
	cout << "A + B = ";
	C = A + B;
	cout << C.toString() << endl;
	//operator -
	C = A - B;
	cout << "A - B = ";
	cout << C.toString() << endl;
	//operator *
	C = A * B;
	cout << "A * B = ";
	cout << C.toString() << endl;
	//operator /
	C = A / B;
	cout << "A / B = ";
	cout << C.toString() << endl;

	// prefix operator ++ 
	A++;
	cout << "A++ = ";
	cout << A.toString() << endl;
	///postfix operator ++
	++B;
	cout << "++B = ";
	cout << B.toString() << endl;



	
	return 0;
}