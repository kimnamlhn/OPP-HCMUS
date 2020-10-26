#include "CLine.h"
#include "CRectangle.h"
#include "Dice.h"
#include "DynamicArray.h"
#include "Random.h"


int CRectangle::countRectangle = 0;
int CLine::countLine = 0;
int main()
{
	//Đường thẳng
	CLine line1({ 2,3 }, { 3,4 });
	cout << "Display line 1: ";
	line1.displayLine();

	//copy đường thẳng 1 vào đường thẳng 2
	cout << "Copy line 1 into line 2: " << endl;
	CLine line2 = line1;
	cout << "Display line 2: ";
	line2.displayLine();

	//số lượng đường thẳng tạo ra
	cout << "Number of line created: " << CLine::countLine << endl;
	cout << endl;



	//hình chữ nhật
	CRectangle rec1({ 1,2 }, { 2,3 });
	cout << "Display rectangle 1: ";
	rec1.displayRectangle();

	//copy hình chữ nhât 1 vào hình chữ nhât 2
	cout << "Copy rectangle 1 into rectangle 2: " << endl;
	CRectangle rec2 = rec1;
	cout << "Display rectangle 2: ";
	rec2.displayRectangle();

	//số lượng hình chữ nhât tạo ra
	cout << "Number of rectangle created: " << CRectangle::countRectangle << endl;
	cout << endl;


	
	//Random 
	Random ran1;
	//random một số nguyên ngẫu nhiên
	cout << "Random an interger: " << ran1.Next() << endl;

	//random một số nguyên từ 0 đến số nguyên max được nhập vào
	//test max = 100
	cout << "Random with upper limit number: " << ran1.Next(100) << endl;
	cout << endl;


	//Dice
	Dice dic1;
	//gieo xúc sắc
	cout << "Roll dice: " << dic1.roll() << endl;
	cout << "Roll dice: " << dic1.roll() << endl;

	//số lần gieo xúc sắc 
	cout << "Number of dice rolling: " << dic1.getRollCount() << endl;
	cout << endl;

	

	//Mảng động
	//tạo một mảng để test
	int temp[5] = { 1,2,3,4,5 };
	DynamicArray arr1(temp, 5);
	cout << "Create an dynamic array and copy: " << endl;
	cout << "Display array: " << endl;
	arr1.printArray();




	return 0;
}