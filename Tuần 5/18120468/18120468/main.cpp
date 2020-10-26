#include "CFraction.h"
#include "DynamicArray.h"
#include <vector>


int main()
{
	// test exception lớp random
	Random random;
	int n, m;
	vector <int> arr;
	n = random.Next();
	m = random.Next();
	for (int i = 0; i < n; i++)
	{
		arr.push_back(random.Next());
	}

	try
	{
		if (m > n)
			throw "Index out of array!!";
		else
			cout << "Arr[" << m << "]= " << arr[m] << endl;
	}

	catch (const char* message)
	{
		cout << message;
	}



	//test lớp phân số 
	int n1, m1;
	Random random1;
	n1 = random1.Next();
	m1 = random1.Next();
	vector <CFraction> fracArr;
	for (int i = 0; i < n1; i++)
	{
		//default construc tạo phân số với tử và mẫu là các số nguyên ngẫu nhiên
		CFraction temp;
		//rút gọn phân số
		temp.abridgedFractions();
		//thêm vào mảng phân số
		fracArr.push_back(temp);
	}

	try {
		if (m1 > n1)
			throw "Index out of fraction array!";
		else
		{
			cout << "Fraction: " << fracArr[m1].getNum() << "/" << fracArr[m1].getDen() << endl;
			cout << "Inverse fractions: " << fracArr[m1].getDen() << "/" << fracArr[m1].getNum() << endl;
			
		}
	}

	catch (const char* mess)
	{
		cout << mess;
	}




	//test lớp mảng động 
	Random random2;
	//default constructor 
	DynamicArray dArr;
	int pos = random2.Next();

	try {
		if (pos > dArr.getLen())
			throw "Index out of bound!";
		else
		{
			cout << "dArr[" << pos << "]= " << dArr.getAt(pos);
			
		}
	}

	catch (const char* messg)
	{
		cout << messg;
	}

	
	return 0;
}