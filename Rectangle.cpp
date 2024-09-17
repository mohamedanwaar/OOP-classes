#include "Rectangle.h"
#include<iostream>
using namespace std;
void Rectangle::set_lentgh(float len)
{
	if (len >= 0)
		length = len;
	else
		cout << "enter positive numbers only";
}

float Rectangle::get_length()
{
	return length;
}

void Rectangle::set_width(float w)
{
	if (w >= 0)
		width = w;
	else
		cout << "enter positive numbers only";
}
float Rectangle::get_width()
{
	return width;

}

float Rectangle::calc_area()
{
	return length * width;
}


Rectangle Rectangle::add_another_rectangle(Rectangle r2)// funchon to add another rectangle to my rectangle (here the parameter of funchon is object)


{ 
	Rectangle result;
	result.length = length + r2.length;
	result.width = width + r2.width;
	return result;


}

Rectangle Rectangle::operator+(Rectangle r2)
{
	Rectangle result;
	result.length = length + r2.length;
	result.width = width + r2.width;
	return Rectangle(result);
}

Rectangle::Rectangle(): length(0),width(0) // say this is inithal costractor (with no parameter )
{

}

Rectangle::Rectangle(float w, float l):length(l),width(w)// this is the overloaeded costractor 
{
	//cout << "this is inital value enterd by user \n";

}


Rectangle::~Rectangle()
{
	//cout << "good by ";

}



