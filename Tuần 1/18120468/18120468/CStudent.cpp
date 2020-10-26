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