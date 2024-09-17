#include "person.h"


// constractor with no argument  (this is dufalt costractor 
person::person()
{
	age = 0;
	name = "Unknowen";
	gender = "Unknowen";

}
// constractor with 3 argumennt entered by user 
person::person(string n, string g, float a)
{
	name = n;
	gender = g;
	age = a;

}

// funchon to est age 
void person::set_age(float a)
{
	age = a;

}

//funchon to get age 
float person::get_age()
{
	return age;
}

//funchon to set name
void person::set_name(string a)
{
	name = a;

}

//funchon to get name 
string person::get_name()
{
	return  name ;

}

// funchon  to set gender 
void person::set_gender(string g)
{
	gender = g;

}
//funchon to get gender 
string  person::get_gender()
{
	return gender;

}

void person::display()
{
	cout << "the person Basic data is " << endl;
	cout << name << "  " << gender << "  " << age << endl;


}

	