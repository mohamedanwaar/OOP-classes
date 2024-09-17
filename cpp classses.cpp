
#include<iostream>
using namespace std;
#include "car.h"
#include"Rectangle.h"
#include"studentBaseOnBerson.h"
#include"calculator.h"

int main()
{

	// ***********the obgect of class rectangle *************************

	/*
	cout << "enter the inital value fot the calss attribute \n";

	float m, l;

	cin >> m >> l;



	
	Rectangle box(m,l); // initial value pass to constractor method 

	if user dosent enter any parameter the 
	Rectangle book ; // here is inial costractor is called 

	cout<<book.get_length();//   0

	cout << book.get_width();//  0

	
	


	box.set_lentgh(10.5);  //this is uses

	box.set_width(12);
	 
	 if we want to calc the area of box and apper the area 
	cout<<"the area of rectangle is :"<<box.calc_area()<<"\n";
	
	 if we want to apper the attribute of class we can use get method
	cout << box.get_length()<<"\n";

	cout << box.get_width()<<"\n";



	*/


	/*
	// add rectangle to anothe 
       Rectangle r1(10,19);

       Rectangle r2(5, 1);

     //  Rectangle r3 = r1.add_another_rectangle(r2);  // here we pass opjent to an method 

	   // cout << r3.get_length() << endl;
       //cout << r3.get_width() << endl;
	   

	//another this we can use this r1+r2 direct 
	   Rectangle r3 = r1 + r2;

	   cout << r3.get_length() << endl;

	   cout << r3.get_width() << endl;

       */
	    
       


	




	//  ***********the obgect of class car*************************
	/*
	car car1(2018,"honda"); // here we shoud pass the constructor attribute 
	 
	//car1.set_make("bmw");
	
	//car1.set_yearmodel(19);

	car car2(car1);  //this is copy costructor (coped attribetes from c1)

	cout << "the type of car is " << car2.get_make() << "\n"; //honda 
	
	cout << "the model of car is " << car2.get_yearmodel() << "\n"; // 2018
	


	cout<<"the type of car is "<< car1.get_make()<<"\n"; //2023 this is the initliaze attrubte in constructor
	
	cout<<"the model of car is "<< car1.get_yearmodel()<<"\n";//honda this is the initliaze attrubte in constructor

	 
	------------------------------------------------------------------------
	
	car c1(2010,"bmw");
	cout << "number of car is " << c1.apper_no_of_cars() << endl;
	 
	car c2(2012, "bmw");
	cout << "number of car is " << c1.apper_no_of_cars() << endl;
	 
	car c3(2009, "bmw");
	cout << "number of car is " << c1.apper_no_of_cars() << endl;
	*/


// =======================================================================

	
	 // ......................object of clacolator class .............................

	
	/*
	calculator c1;

	// there is many funchon with the same name but diffent returned type and parameter type 
	cout << "this is version 1" << c1.add(5,10);

	cout << "this is version 2" << c1.add(5, 10,5);

	cout << "this is version 3" << c1.add(5.4, 1.13);

	cout << "this is version 4" << c1.add("mohamed", " rashed ");

	*/

	//___________________________________________________________________
	// using static method 
    /*
	cout<<calculator::addd(2, 5);   // we can use static method without take object of class car 
	*/
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//....................................................objent of student class ..................................................

//
//studentBaseOnBerson s1;            
//
//s1.display();              // here we use dufalt costractor od person class     >>>>note use only the costractor wihh no argumnt 
//cout << "========================================"<<endl;
//
//
//s1.set_name("rashed");
//s1.set_gender("male");
//s1.set_age(20);
//s1.display(); 
//
//cout << "============================================================================================" << endl;

//studentBaseOnBerson s2("mohmed ","male",10);     // we cant use the constractor with argument that belong to base class 
// to solve this probelm we must creat constractor with argument in the student class  and the argument is argument of percon class and argument of sdudent class 
// note the constractor in student class 
// 
//..................after the costractor that i make in student class we can us this.....................................

//studentBaseOnBerson s2("mohamed", "male", 20, 2, 3.27, "Ai");
//cout << s2.get_depart() << endl;
//cout << s2.get_gender() << endl;
//cout << s2.get_gpa() << endl;
//cout << s2.get_level() << endl;




//cout << "============================================================================================" << endl;
//s1.set_depart("AI");
//s1.set_level(2);
//s1.set_gpa(3.27);
//s1.display();


//note that the display func that belong to student this is work 
// note the output 






	


}



                                    //   example of passing opject to funchon 
//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++


class c 
{
public:
	int data = 100;



};

void change(c &c1)        // without this operator & the object is passing py value (this mean the change funchon dont change the data 
{
	c1.data = 12;

}
int main()
{
	c c1;
 
	cout << c1.data;

	change(c1);
 
	cout << c1.data;
}


