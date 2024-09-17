/*
					What is Polymorphism ?
					• Polymorphism is an object-oriented programming concept that
					refers to the ability of a variable, function or object to take
					on multiple forms.
					• with polymorphism, class objects belonging to the same hierarchical tree
					(inherited from a common parent class) may have functions with the same
					name, but with different behaviors.



					Functions Overriding using Virtual Functions
						• A virtual function a member function which is declared within a base class
						and is re-defined(Overriden) by a derived class. When you refer to a derived
						class object using a pointer to the base class, you can call a virtual function for
						that object and execute the derived class’s version of the function.

						• Virtual functions ensure that the correct function is called for an object,
						regardless of the type of reference (or pointer) used for function call.



						               friend funchon 

									    A friend function of a class is defined outside that class' scope but
										it has the right to access all private and protected members of the
										class.

										• The prototypes for friend functions appear in the class definition.

										• friends are not member functions.
*/


#include <iostream>
using namespace std;
class shape
{
private :
	string color;

public:
	shape(string c)
	{
		color = c;
	}

	virtual void draw()   // this is virtual to override this funchon in the driven class 
	{
		cout << "draw parent class in color " << color << endl;

	}
	virtual void erase()   // this is virtual to override this funchon in the driven class
	{
		cout << "Erase the parent shape " << endl;

	}
	virtual double area()  // this is virtual to override this funchon in the driven class
	{
		cout << "parent class area ";

		return 0;

	}
	
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
	void draw() 
	{
		cout << "draw rectangle "<<endl;

	}

	void erase()   
	{
		cout << "Erase rectangle  " << endl;

	}
	double area() 
	{

		cout << "rectangle  area is  "<< (width*length)<<endl;

		return (width * length);

	}
	friend void print(rectangle r);

};

class circle :public shape
{
private :
	float  radius;

public :
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

		cout << "rectangle  area is  " << ((radius*radius)*3.14) << endl;

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

	// use of friend funchon 
	print(rec);

	/*
	pointer = &cer;

	pointer->draw();   
	pointer->area();
	pointer->erase();

	// wihtout pointer also virtual func is apply 
	cer.draw(); 
	rec.area();

	*/


}

void print(rectangle r)  // the impelmenthon of friend funchon (note : this freind funchon can access width and length and thay are private attributes 
{
	cout << "the lentgh and width of rectangle is " << r.length << " " << r.width;
}
