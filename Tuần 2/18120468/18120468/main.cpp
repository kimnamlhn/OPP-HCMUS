#include "CRectangle.h"
#include "CTriangle.h"
#include "CStudent.h"
#include "DynamicArray.h"


int main()
{
	////Tạo mấy điểm để in kết quả ra
	CPoint* A, * B, * C;
	

	//Hình chữ nhật
	//test hàm tạo không đối số
	CRectangle rect;
	A = rect.getTopLeft();
	B = rect.getBottomRight();
	cout << "Rectangle created by default constructor:	" << endl;
	cout << "Top left is (" << A->getX() << "," << A->getY() << ") and bottom right is (" << B->getX() << "," << B->getY() << ")" << endl;
	cout << "The perimeter of a rectangle: " << rect.Perimeter() << endl;
	cout << "The area of a rectangle: " << rect.Area() << endl;
	cout << endl;
	


	//Hình tam giác
	//test hàm tạo không đối số
	CTriangle trian;
	A = trian.get_a();
	B = trian.get_b();
	C = trian.get_c();
	cout << "Triangle created by default constructor:	" << endl;
	cout << "A(" << A->getX() << "," << A->getY() << "), B(" << B->getX() << "," << B->getY() << ") and C(" << C->getX() << ", " << C->getY() << ")" << endl;
	cout << "The perimeter of triangle: " << trian.Perimeter() << endl;
	cout << "The area of triangle: " << trian.Area() << endl;
	cout << endl;

	//Học sinh
	//test hàm tạo không đối số
	CStudent student;
	cout << "Student created by default constructor:	" << endl;
	cout << "Student: " << student.fullName() << endl;
	//test hàm tạo có đối số
	CStudent student1("Le", "Hoai", "Nam");
	cout << "Student created by parameters constructor:	" << endl;
	cout << "Student: " << student1.fullName() << endl;
	cout << endl;
	
	

	//Mảng động
	//test tạo mảng mặc định không đối số
	DynamicArray arr;
	cout << "Array created by default constructor:	" << endl;
	arr.printArray();

	//test tạo mảng có đối số
	int temp[5] = { 1,2,3,4,5 };
	DynamicArray arr1(temp, 5);
	cout << "Array created by parameters constructor:	" << endl;
	arr1.printArray();

	//thêm 1 phần tử vào mảng không tính việc vượt quá khả năng của mảng
	//arr1.pushBack(1);
	//arr1.printArray();

	//lấy giá trị ở một vị trí trong mảng 
	cout << "Get value at 10: " << arr.getAt(10) << endl;
	
	
	
	return 0;

}
