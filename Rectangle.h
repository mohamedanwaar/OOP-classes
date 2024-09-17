#pragma once
class Rectangle
{
private:
	float length;
	float width;
public:
	void set_lentgh(float len);

	float get_length();

	void set_width(float w);

	float get_width();

	float calc_area();

	Rectangle add_another_rectangle(Rectangle r2);   // we can use oberator overloading onther this 
	
	Rectangle operator+(Rectangle r2);


	Rectangle( );

	Rectangle(float w,float l); // this is called costructor overloading  

	~Rectangle();


};

