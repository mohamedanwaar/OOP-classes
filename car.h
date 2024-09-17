#pragma once

#include <string>
using namespace std;


 //here we declaration of all the class members and methods 
class car
{
	
private:
	string make;
	int yearmodel;
	int counter=0; // here is belong to spcefic obgject that taken form the class if we change tha in object 1 ,object2  dont notes this changes 
	static int counter; // this is static attributes that belongs to the class not to the object is shared between all opject of class 


public:
	void set_make(string s);

	void set_yearmodel(int y);

	string get_make();

	int get_yearmodel();

	int apper_no_of_cars();

	car(int y,string m);  // this us the constructor 
	~car(); //this is the destractor 

}
;


