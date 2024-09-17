/*
#include <iostream>
using namespace std;
////////////////////////////////////////////////////////////////
class Counter //base class
{
protected: //NOTE: not private
	unsigned int count; //count
public:
	Counter() : count(0) //no-arg constructor
	{ }
	Counter(int c) : count(c) //1-arg constructor
	{ }
	unsigned int get_count() const //return count
	{
		return count;
	}
	Counter operator ++ () //incr count (prefix)
	{
		return Counter(++count);
	}
};
////////////////////////////////////////////////////////////////

class CountDn : public Counter //derived class
{
public:
	Counter operator -- () //decr count (prefix)
	{
		return Counter(--count);
	}

};
////////////////////////////////////////////////////////////////
int main()
{
	CountDn c1; //c1 of class CountDn

	cout << "\nc1 = " << c1.get_count(); //display c1

	++c1; ++c1; ++c1; //increment c1, 3 times

	cout <<  "\nc1 = " << c1.get_count(); //display it

	--c1; --c1; //decrement c1, twice
	cout << "\nc1 =" << c1.get_count(); //display it
	cout << endl;
	return 0;
}

*/
/*
In the main() part of COUNTEN we create an object of class CountDn :
	CountDn c1;
This causes c1 to be created as an object of class CountDn and initialized to 0. But wait—how
is this possible ? There is no constructor in the CountDn class specifier, so what entity carries
out the initialization ? It turns out that—at least under certain circumstances—if you don’t specify a constructor, 
the derived class will use an appropriate constructor from the base class.In
COUNTEN there’s no constructor in CountDn, so the compiler uses the no - argument constructor
from Count.
This flexibility on the part of the compiler—using one function because another isn’t available—
appears regularly in inheritance situations.Generally, the substitution is what you want, but
sometimes it can be unnerving

*/


