#include "CLine.h"
#include "CRectangle.h"
#include "CTriangle.h"
#include "CCircle.h"
#include "CFraction.h"
#include "CStudent.h"



int main()
{
	//Tạo để test
	CPoint x(1, 2);
	CPoint y(2, 3);
	CPoint z(3, 4);
	float radius;

	//Tạo mấy điểm để in kết quả ra
	CPoint A, B, C, D;

	//Đường thẳng
	CLine line;
	//test hàm tạo không đối số
	A = line.getStart();
	B = line.getEnd();
	cout << "Line created by default constructor:	" << endl;
	cout << "start (" << A.getX() << "," << A.getY() << ") and end (" << B.getX() << "," << B.getY() << ")" << endl;
	//test hàm tạo 2 đối số
	CLine line1(x, y);
	A = line1.getStart();
	B = line1.getEnd();
	cout << "Line created by constructor with parameters:	" << endl;
	cout << "start (" << A.getX() << "," << A.getY() << ") and end (" << B.getX() << "," << B.getY() << ")" << endl;
	//test cấp phát thủ công
	CLine* p1 = new CLine(x, y);
	A = p1->getStart();
	B = p1->getEnd();
	cout << "Line created by dynamic constructor:	" << endl;
	cout << "start (" << A.getX() << "," << A.getY() << ") and end (" << B.getX() << "," << B.getY() << ")" << endl;
	delete p1; //Tự thu hồi vùng nhớ
	cout << endl;



	//Hình chữ nhật
	//test hàm tạo không đối số
	CRectangle rect;
	A = rect.getTopLeft();
	B = rect.getBottomRight();
	cout << "Rectangle created by default constructor:	" << endl;
	cout << "Top left is (" << A.getX() << "," << A.getY() << ") and bottom right is (" << B.getX() << "," << B.getY() << ")" << endl;
	//test hàm tạo 2 đối số
	CRectangle rect1(x, y);
	A = rect1.getTopLeft();
	B = rect1.getBottomRight();
	cout << "Rectangle created by constructor with parameters:	" << endl;
	cout << "Top left is (" << A.getX() << "," << A.getY() << ") and bottom right is (" << B.getX() << "," << B.getY() << ")" << endl;
	//test cấp phát thủ công
	CRectangle* p2 = new CRectangle(x, y);
	A = p2->getTopLeft();
	B = p2->getBottomRight();
	cout << "Rectangle created by dynamic constructor:	" << endl;
	cout << "Top left is (" << A.getX() << "," << A.getY() << ") and bottom right is (" << B.getX() << "," << B.getY() << ")" << endl;
	delete p2; //Tự thu hồi vùng nhớ
	cout << endl;


	//Hình tam giác
	//test hàm tạo không đối số
	CTriangle trian;
	A = trian.get_a();
	B = trian.get_b();
	C = trian.get_c();
	cout << "Triangle created by default constructor:	" << endl;
	cout << "A(" << A.getX() << "," << A.getY() << "), B(" << B.getX() << "," << B.getY() << ") and C(" << C.getX() << ", " << C.getY() << ")" << endl;
	//test hàm tạo 3 đối số
	CTriangle trian1(x, y, z);
	A = trian1.get_a();
	B = trian1.get_b();
	C = trian1.get_c();
	cout << "Triangle created by constructor with parameters:	" << endl;
	cout << "A(" << A.getX() << "," << A.getY() << "), B(" << B.getX() << "," << B.getY() << ") and C(" << C.getX() << ", " << C.getY() << ")" << endl;
	//test cấp phát thủ công
	CTriangle* p3 = new CTriangle(x, y, z);
	A = p3->get_a();
	B = p3->get_b();
	C = p3->get_c();
	cout << "Triangle created by dynamic constructor:	" << endl;
	cout << "A(" << A.getX() << "," << A.getY() << "), B(" << B.getX() << "," << B.getY() << ") and C(" << C.getX() << ", " << C.getY() << ")" << endl;
	delete p3; //Tự thu hồi vùng nhớ
	cout << endl;


	//Hình tròn
	//test hàm tạo không đối số
	CCircle cir;
	A = cir.getCenter();
	radius = cir.getRadius();
	cout << "Circle created by default constructor:	" << endl;
	cout << "Center: A(" << A.getX() << "," << A.getY() << ") and radius " << radius << endl;
	//test hàm tạo có đối số
	CCircle cir1(x, 3.0);
	A = cir1.getCenter();
	radius = cir1.getRadius();
	cout << "Circle created by constructor with parameters:	" << endl;
	cout << "Center: A(" << A.getX() << "," << A.getY() << ") and radius " << radius << endl;
	//test cấp phát thủ công
	CCircle* p4 = new CCircle(x, 3.0);
	A = p4->getCenter();
	radius = p4->getRadius();
	cout << "Circle created by dynamic constructor:	" << endl;
	cout << "Center: A(" << A.getX() << "," << A.getY() << ") and radius " << radius << endl;
	delete p4; //Tự thu hồi vùng nhớ
	cout << endl;



	//Phân số
	//test hàm tạo không đối số
	CFraction fract;
	cout << "Fraction created by default constructor:	" << endl;
	cout << "Fraction: " << fract.getNum() << "/" << fract.getDen() << endl;
	//test hàm tạo có đối số
	CFraction fract1(2, 3);
	cout << "Fraction created by constructor with parameters:	" << endl;
	cout << "Fraction: " << fract1.getNum() << "/" << fract1.getDen() << endl;
	//test cấp phát thủ công
	CFraction* p5 = new CFraction(2, 3);
	cout << "Circle created by dynamic constructor:	" << endl;
	cout << "Fraction: " << p5->getNum() << "/" << p5->getDen() << endl;
	delete p5; //Tự thu hồi vùng nhớ
	cout << endl;


	//Học sinh
	//test hàm tạo không đối số
	CStudent student;
	cout << "Student created by default constructor:	" << endl;
	cout << "Student: " << student.getFirstName() << " " << student.getMiddleName() << " " << student.getLastName() << endl;
	//test hàm tạo có đối số
	CStudent student1("Le", "Hoai", "Nam");
	cout << "Student created by constructor with parameters:	" << endl;
	cout << "Student: " << student1.getFirstName() << " " << student1.getMiddleName() << " " << student1.getLastName() << endl;
	//test cấp phát thủ công
	CStudent* p6 = new CStudent("Le", "Hoai", "Nam");
	cout << "Student created by dynamic constructor:	" << endl;
	cout << "Student: " << p6->getFirstName() << " " << p6->getMiddleName() << " " << p6->getLastName() << endl;
	delete p6; //Tự thu hồi vùng nhớ
	cout << endl;

	return 0;

}
