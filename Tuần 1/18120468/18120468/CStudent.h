#include <string>
using namespace std;

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
	void setFirstName(string firstName);
	void setMiddleName(string middleName);
	void setLastName(string lastName);
public:
	CStudent();
	CStudent(string firstName, string middleName, string lastName);
	~CStudent();
};