#include "CStudent.h"
string CStudent::getFirstName()
{
	return _firstName;
}

string CStudent::getMiddleName()
{
	return _middleName;
}

string CStudent::getLastName()
{
	return _lastName;
}

void CStudent::setName(string firstName, string middleName, string lastName)
{
	this->_firstName = firstName;
	this->_middleName = middleName;
	this->_lastName = lastName;
}


void CStudent::setFirstName(string firstName)
{
	_firstName = firstName;
}

void CStudent::setMiddleName(string middleName)
{
	_middleName = middleName;
}

void CStudent::setLastName(string lastName)
{
	_lastName = lastName;
}

CStudent::CStudent()
{
	_firstName = "No";
	_middleName = "Name";
	_lastName = "Input";
}

CStudent::CStudent(string firstName, string middleName, string lastName)
{
	_firstName = firstName;
	_middleName = middleName;
	_lastName = lastName;
}

CStudent::~CStudent()
{

}

string CStudent::fullName()
{
	return _firstName + " " + _middleName + " " + _lastName;
}

string CStudent::toString()
{
	stringstream writer;
	writer << _firstName << " " << _middleName << " " << _lastName;
	return writer.str();
}

istream& operator>>(istream& in, CStudent* p)
{
	string firstName, middleName, lastName;
	cout << "Input student: " << endl;
	cout << "Enter first name: ";
	in >> firstName;
	cout << "Enter middle name: ";
	in >> middleName;
	cout << "Enter last name: ";
	in >> lastName;
	p->setName(firstName, middleName, lastName);
	return in;
}

ostream& operator<<(ostream& out, CStudent* p)
{
	out << "Full name of student: " << p->_firstName << " " << p->_middleName << " " << p->_lastName;
	return out;
}
