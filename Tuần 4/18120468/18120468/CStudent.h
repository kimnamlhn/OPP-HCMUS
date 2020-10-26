#ifndef _CPoint_
#define _CPoint_
#include "CPoint.h"

#endif // !_CPoint_

class CStudent
{
private:
	string _firstName;
	string _middleName;
	string _lastName;
public:
	string getFirstName();
	string getMiddleName();
	string getLastName();
	void setName(string firstName, string middleName, string lastName);
	void setFirstName(string firstName);
	void setMiddleName(string middleName);
	void setLastName(string lastName);
	string fullName();
	string toString();
	friend istream& operator >>(istream& in, CStudent* p);
	friend ostream& operator <<(ostream& out, CStudent* p);
public:
	CStudent();
	CStudent(string firstName, string middleName, string lastName);
	~CStudent();
};