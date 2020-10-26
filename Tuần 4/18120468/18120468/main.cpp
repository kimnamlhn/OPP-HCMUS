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
	//Đường thẳng
	CLine* line = new CLine();
	//nhập xuất
	cin >> line;
	cout << line << endl;
	cout << "Convert to string: " << endl;
	// chuyển thành string 
	cout << line->toString() << endl;
	delete line;
	cout << endl;


	//Tam giác
	CTriangle* triangle = new CTriangle();
	//nhập xuất
	cin >> triangle;
	cout << triangle << endl;
	// chuyển thành string 
	cout << "Convert to string: " << endl;
	cout << triangle->toString() << endl;
	delete triangle;
	cout << endl;

	//Hình chữ nhật
	CRectangle* rectangle = new CRectangle();
	//nhập xuất
	cin >> rectangle;
	cout << rectangle << endl;
	// chuyển thành string 
	cout << "Convert to string: " << endl;
	cout << rectangle->toString() << endl;
	delete rectangle;
	cout << endl;


	//Hình tròn
	CCircle* circle = new CCircle();
	//nhập xuất
	cin >> circle;
	cout << circle << endl;
	// chuyển thành string 
	cout << "Convert to string: " << endl;
	cout << circle->toString() << endl;
	delete circle;
	cout << endl;

	//Phân số
	CFraction* fraction = new CFraction();
	//nhập xuất
	cin >> fraction;
	cout << fraction << endl;
	// chuyển thành string 
	cout << "Convert to string: " << endl;
	cout << fraction->toString() << endl;
	delete fraction;
	cout << endl;


	//Học sinh
	CStudent* student = new CStudent();
	//nhập xuất
	cin >> student;
	cout << student << endl;
	// chuyển thành string 
	cout << "Convert to string: " << endl;
	cout << student->toString() << endl;
	delete student;
	cout << endl;


	//Ngày tháng
	CDate* date = new CDate();
	//nhập xuất
	//Điều kiện: 1990<year<<9999
	cin >> date;
	cout << date << endl;
	// chuyển thành string 
	cout << "Convert to string: " << endl;
	cout << date->toString() << endl;
	delete date;
	cout << endl;


	//Mảng động
	DynamicArray* dArr = new DynamicArray();
	//nhập xuất
	cin >> dArr;
	cout << dArr << endl;
	// chuyển thành string 
	cout << "Convert to string: " << endl;
	cout << dArr->toString() << endl;
	delete dArr;
	cout << endl;



	
	return 0;
}