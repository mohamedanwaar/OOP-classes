#pragma once
#include <iostream>
using namespace std;
class person
{
private:
	string name;
	string gender;
	float age;

public:
	void set_age(float a);
	float get_age();
	person();
	person(string n, string g, float age);
	void set_name(string n);
	string  get_name();
	void set_gender(string g);
	string  get_gender();

	void display();

};

