//#include<iostream>
//using namespace std; 


/*
class counter
{
private :
	int count;
public:
	counter(int c) :count(c)  // count = c
	{
	}

	counter() :count(0)//   if we dont get value form user 
	{
	}
	int get_counter()
	{
		return count;

	}

	counter operator ++(int)         // whitout this we cannot use this in main funchon c1++    //postfix 
	{
		count++;
		return counter(count);     // give the increment count again to the constractor 
	}

	counter operator ++()           // prefix 
	{
		++count;
		return counter(count);     // give the increment count again to the constractor 
	}


	counter operator --(int )         // whitout this we cannot use this in main funchon --c1
	{
		count--;
		return counter(count);     // give the decrement count again to the constractor 
	}

	counter operator --()        // prefix 
	{
		--count;
		return counter(count);     // give the decrement count again to the constractor 
	}
};
*/
/*
class distancee

{

private:
	float inches;
	float feet;
public:
	distancee() :inches(0), feet(0)
	{
	}

	distancee(int i, int f) :inches(i), feet(f)
	{
	}
	void display()
	{
		cout << "inches= " << inches << endl;
		cout << "feet= " << feet << endl;


	}

	distancee operator+(distancee d2)
	{
		int f = feet + d2.feet;
		int i = inches + d2.inches;
		return distancee(i, f);

	}


};





int main()
{
	/*                              object of counter class 
	counter c1;
	cout << c1.get_counter()<<endl;

	++c1;   // here is the benfit of overator overloading (we cant increamnt object easy 
	++c1;
	c1++; 
	cout << c1.get_counter() << endl;

	--c1;
	cout << c1.get_counter() << endl;
	///

	//====================================================================================================
	distancee d1(10,5);
	distancee d2(5, 10);

	distancee d3;
	d3 = d1 + d2;
	d3.display();

}*/