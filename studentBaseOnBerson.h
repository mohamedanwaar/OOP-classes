#pragma once
#include "person.h"
class studentBaseOnBerson : public person
{
private:
	int level;
	float gba;
	string department;
public:

	void set_level(int l);
	int get_level();
	void set_gpa(float g);
	int get_gpa();
	void set_depart(string depart);
	string get_depart();

	studentBaseOnBerson(string n, string gend, int agee, int l, float  g, string depart);
	void display();

	studentBaseOnBerson();

};
 



// if this class dont have costractor when we  take objenct of this class in main func this take the costractor of base class (person)
 

