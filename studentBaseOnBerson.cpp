#include "studentBaseOnBerson.h"
//#include"person.h"
void studentBaseOnBerson::set_level(int l)
{
	level = l;

}

int studentBaseOnBerson::get_level()
{
	return level;
}

void studentBaseOnBerson::set_gpa(float g)
{
	gba = g;
}

int studentBaseOnBerson::get_gpa()
{
	return gba;

}

void studentBaseOnBerson::set_depart(string depart)
{
	department = depart;

}

string studentBaseOnBerson::get_depart()
{
	return department;
}



studentBaseOnBerson::studentBaseOnBerson(string n, string gend, int agee, int l, float g, string depart):person(n,gend,agee)
// here we calll the costractor of person class to assigent the fisrt and second and third attribute that belong to percon class 
{

	level = l;
	gba = g;
	department = depart;

}

void studentBaseOnBerson::display()
{
	cout << "the student details is : "<<endl;
	cout << " the student level is " << level << "  studengt gpa is  " << gba << "  student depart is  " << department;
}

studentBaseOnBerson::studentBaseOnBerson()
{
	gba = 0;
	department = "unkowen";
	level = 0;

}
