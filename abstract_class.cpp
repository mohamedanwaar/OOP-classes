/*


	•An interface(Abstract Class) describes the behavior or capabilities of a C++
	class without committing to a particular implementation of that class.

	• The purpose of an abstract class is to provide the Desired base class Form
	which will be inherited by other classes in the class hierarchy.

	• Abstract classes cannot be used to instantiate objects and serves only as
	an interface.

	• A class is made abstract by declaring at least one of its functions as pure
	virtual function
		
*/

#include <iostream>
using namespace std;

//A class is made abstract by declaring at least one of its functions as pure virtual function

class shape
{
private:
	string color;

public:
	shape(string c)
	{
		color = c;
	}

	virtual void draw() = 0;// this is virtual to override this funchon in the driven class and this is pure virtual funchon (in a driven classes we shouid override this pure funchons 


	virtual void erase() = 0;  // this is virtual to override this funchon in the driven class (is pure virtual funchon )

	virtual double area() = 0;  // this is virtual to override this funchon in the driven class   (is pure virtual funchon )

};
class rectangle :public shape
{
private:
	double length;
	double width;
public:
	rectangle(double l, double w, string c) : shape(c)
	{
		width = w;
		length = l;
	}
	void draw()   //
	{
		cout << "draw rectangle " << endl;

	}

	void erase()
	{
		cout << "Erase rectangle  " << endl;

	}
	double area()
	{

		cout << "rectangle  area is  " << (width * length) << endl;

		return (width * length);

	}

};

class circle :public shape
{
private:
	float  radius;

public:
	circle(float r, string c) : shape(c)
	{
		radius = r;
	}

	void draw()
	{
		cout << "draw circle  " << endl;

	}

	void erase()
	{
		cout << "Erase circle  " << endl;

	}
	double area()
	{

		cout << "rectangle  area is  " << ((radius * radius) * 3.14) << endl;

		return ((radius * radius) * 3.14);

	}
};


int main()
{
	shape* pointer;    // pointer that point to the object of class shape and this also can point to object od rectangle class and circle class or any deiven class of shape class

	rectangle rec(10, 7, "red");
	circle cer(5, "blue");
	pointer = &rec;     // pointer point to address of  object of rectangle class 

	pointer->draw();    // here the draw of rectangle is exucted 
	pointer->area();
	pointer->erase();

	pointer = &cer;

	pointer->draw();
	pointer->area();
	pointer->erase();

	// wihtout pointer also virtual func is apply 
	cer.draw();
	rec.area();



}
