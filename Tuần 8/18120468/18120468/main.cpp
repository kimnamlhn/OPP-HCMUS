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
	//số nguyên int
	DynamicArray <int> intArr;
	int tmp[] = { 2,5,12,8,9,25,7 };
	int n = sizeof(tmp) / sizeof(tmp[0]);
	for (int i = 0; i < n; i++)
	{
		intArr.pushBack(tmp[i]);
	}
	cout << "INT: " << endl;
	cout << "Value at position 3: " << intArr.getAt(3) << endl;
	cout << "Biggest value of the array: " << intArr.getMax() << endl;
	intArr.Sort();
	cout << "Arrays after being sorted : ";
	intArr.printArray();


	//số thực float
	cout << "-----------------------------------" << endl;
	DynamicArray <float> floatArr;
	float tmp1[] = { 2.6,5.8,12.5,8.5,9.8,25.7,7.5 };
	n = sizeof(tmp1) / sizeof(tmp1[0]);
	for (int i = 0; i < n; i++)
	{
		floatArr.pushBack(tmp1[i]);
	}
	cout << "FLOAT: " << endl;
	cout << "Value at position 3: " << floatArr.getAt(3) << endl;
	cout << "Biggest value of the array: " << floatArr.getMax() << endl;
	floatArr.Sort();
	cout << "Arrays after being sorted : ";
	floatArr.printArray();

	
	//phân số
	cout << "-----------------------------------" << endl;
	DynamicArray <CFraction> fractionArr;
	CFraction tmp2[] = { {1,2},{3,4},{5,9},{5,3},{25,4} };
	n = sizeof(tmp2) / sizeof(tmp2[0]);
	for (int i = 0; i < n; i++)
	{
		fractionArr.pushBack(tmp2[i]);
	}
	cout << "FRACTION: " << endl;
	cout << "Fraction at position 3: " << fractionArr.getAt(3) << endl;
	cout << "Biggest fraction of the array: " << fractionArr.getMax() << endl;
	fractionArr.Sort();
	cout << "Arrays after being sorted : ";
	fractionArr.printArray();


	//Điểm 
	cout << "-----------------------------------" << endl;
	DynamicArray <CPoint> pointArr;
	CPoint tmp3[] = { {1,2},{3,4},{5,9},{5,3},{25,4},{0,0},{9,10} };
	n = sizeof(tmp3) / sizeof(tmp3[0]);
	for (int i = 0; i < n; i++)
	{
		pointArr.pushBack(tmp3[i]);
	}
	cout << "POINT: " << endl;
	cout << "Point at position 3: " << pointArr.getAt(3) << endl;
	cout << "Biggest point of the array: " << pointArr.getMax() << endl;
	pointArr.Sort();
	cout << "Arrays after being sorted : ";
	pointArr.printArray();


	//Đường thẳng 
	cout << "-----------------------------------" << endl;
	DynamicArray <CLine> lineArr;
	CLine tmp4[] = { {{1,2},{3,4}},{{5,9},{5,3}},{{25,4},{0,0}},{{9,10},{1,2} } };
	n = sizeof(tmp4) / sizeof(tmp4[0]);
	for (int i = 0; i < n; i++)
	{
		lineArr.pushBack(tmp4[i]);
	}
	cout << "LINE: " << endl;
	cout << "Line at position 3: " << lineArr.getAt(3) << endl;
	cout << "Biggest line of the array: " << lineArr.getMax() << endl;
	lineArr.Sort();
	cout << "Arrays after being sorted : ";
	lineArr.printArray();


	//Hình chữ nhật
	cout << "-----------------------------------" << endl;
	DynamicArray <CRectangle> rectangleArr;
	CRectangle tmp5[] = { {{1,2},{3,4}},{{5,9},{5,3}},{{25,4},{0,0}},{{9,10},{1,2} } };
	n = sizeof(tmp5) / sizeof(tmp5[0]);
	for (int i = 0; i < n; i++)
	{
		rectangleArr.pushBack(tmp5[i]);
	}
	cout << "RECTANGLE: " << endl;
	cout << "Rectangle at position 3: " << rectangleArr.getAt(3) << endl;
	cout << "Biggest rectangle of the array: " << rectangleArr.getMax() << endl;
	rectangleArr.Sort();
	cout << "Arrays after being sorted : ";
	rectangleArr.printArray();


	//Hình tam giác
	cout << "-----------------------------------" << endl;
	DynamicArray <CTriangle> triangleArr;
	CTriangle tmp6[] = { {{1,2},{3,4},{1,3} }, { {5,9},{5,3},{3,6} }, { {25,4},{0,0},{9,1} }, { {9,10},{1,2},{3,10}} };
	n = sizeof(tmp6) / sizeof(tmp6[0]);
	for (int i = 0; i < n; i++)
	{
		triangleArr.pushBack(tmp6[i]);
	}
	cout << "TRIANGLE: " << endl;
	cout << "Triangle at position 3: " << triangleArr.getAt(3) << endl;
	cout << "Biggest triangle of the array: " << triangleArr.getMax() << endl;
	triangleArr.Sort();
	cout << "Arrays after being sorted : ";
	triangleArr.printArray();
	
	
	//Hình tròn
	cout << "-----------------------------------" << endl;
	DynamicArray <CCircle> circleArr;
	CCircle tmp7[] = { {{1,3},3.4},  {{5,3},5.9},  {{4,6},7.4}, {{1,9},1.4},  {{2,3},11.4} };
	n = sizeof(tmp7) / sizeof(tmp7[0]);
	for (int i = 0; i < n; i++)
	{
		circleArr.pushBack(tmp7[i]);
	}
	cout << "CIRCLE: " << endl;
	cout << "Circle at position 3: " << circleArr.getAt(3) << endl;
	cout << "Biggest circle of the array: " << circleArr.getMax() << endl;
	circleArr.Sort();
	cout << "Arrays after being sorted : ";
	circleArr.printArray();
	
	return 0;
}