#pragma once
/*
                       ...overloding method and constrctors...

>overloding method:means two or more methods in a class may have the same name as long as
their >> signatures are diffrent <<

method signatures like (no of arguments in funthon ,types of arg(float or int or....),order of arg)


example:
int add (int n1,int n2)  <<the signatures of this funthon is the 2 arg and the types of them is integer<<
{
      int sum=n1+n2;
      return sum;
}


int add (int n1,int n2,int n3 )   <the signatures of this funthon 3 arg and types of them is int 

{
       int sum =n1+n2+n3;
       return sum ;

}                             

in main fuc when callig add func the exethon of thes debands on the parameters is added to this fun 


///////to apply example we crate new class with name claculator   to explain method ovelosing

/////////

>>>>>>>>>like we know how  to create meny funchon with the same name (oveloding),we also can crate many constructor (as the constructor is a special funchon 

this called >>constructor overloading ,,,,,,,,,,,,,,,,,


/////////


>>>>>>>>>>>>>>>................the Default Copy Constructor.......................<<<<<<<<<<<<<<<<<<<<<<<<<<
 It is another way to initialize an object:
-     Used to initialize an object with another object of the same type.
-    No need to create a special constructor for this; one is already built into all classes

ex say we create  object c1 of car class and the attributes of this object is (any thing)

car c1;
car c2(c1)        // here we copy the attributes of c1 and pass to c2
------------------------------------------------------------------------------------------------

////////////////////////////The Default Constructor////////////////////////////////////////////
When an object is created, its constructor is always called.
• If you do not write a constructor, C++ provides one when the class is
compiled. The constructor that C++ provides is known as the default
constructor.

• The default constructor is a constructor with no parameters, used to
initialize an object in a default configuration.

• The only time that Java provides a default constructor is when you do not
write any constructor for a class.

• A default constructor is not provided by Java if a constructor is already
written.


• A constructor that does not accept arguments is known as a no-arg
constructor.

• The default constructor (provided by Java) is a no-arg constructor.
• We can write our own no-arg constructor
like this 
public Rectangle()
{
length = 1.0;
width = 1.0;
}


>>>>>>>>>>>>>>>>>>>>>>>>   A default constructor is a constructor that either has no parameters
                           or if it has parameters, all the parameters have default values      <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<


========================================================================================================

..............................................Passing Objects as Arguments.................................


In C++, when objects are passed as arguments to functions, they are passed by >>> reference <<<. 
This means that instead of passing the actual object, a reference or address to the object is passed. 
This concept is essential for understanding how modifications made to
the object inside the function affect the original object outside the function.

Let's break down the key points mentioned:
1-Passing Objects as Arguments:
    Objects can be passed to functions just like other variables.

2-Value of the Reference Variable is Passed:
    When an object is passed, what is actually passed is the memory address or 
    reference to the object, not the entire object itself.

3-Value of the Reference Variable is an Address or Reference:
    The reference variable holds the address in memory where the object is stored.

4-A Copy of the Object is Not Passed, Just a Pointer to the Object:
    Unlike passing by value (where a copy of the entire object is made), passing by 
    reference means passing a pointer or reference to the original object.

5-Modifying the Contents of the Object:
    Since the function receives a reference to the original object, any changes made to
    the object inside the function directly affect the original object outside the function.

Here's a simple example in C++ to illustrate these concepts:
#include <iostream>
class MyClass {
public:
    int data;

    MyClass(int val) : data(val) {}
};

// Function that modifies the object
void modifyObject(MyClass &obj) {
    obj.data = 100;  // Modifying the contents of the object
}

int main() {
    MyClass myObj(42);

    std::cout << "Before: " << myObj.data << std::endl;

    // Passing the object to the function by reference
    modifyObject(myObj);

    std::cout << "After: " << myObj.data << std::endl;

    return 0;
}
In this example, the modifyObject function takes a reference to a MyClass object and modifies its data member.
When you run this program, you'll see that the changes made to the object inside the function persist outside 
the function, demonstrating the pass-by-reference behavior in C++
==========================================================================================================================

..........................................Static Class Members.............................................................

• Static fields and static methods do not belong to a single instance of a class.

• A static data item is useful when all objects of the same class must share a
common item of information.

• Its lifetime is the entire program. It continues to exist even if there are no
objects of the class.

•... To invoke a static method or a static field, use the class name, rather than
the instance name...


>>>>In C++, static class members are members that belong to the class rather than instances of the class
. Unlike regular class members, static members are shared by all instances of the class.
They are associated with the class itself, not with any particular object of that class.<<<
//////////////////////////////////////////////////////////////////////////////////////////////

The class foo in this example has one data item, count, which is type static int. The
constructor for this class causes count to be incremented. In main() we define three objects of
class foo. Since the constructor is called three times, count is incremented three times. Another
member function, getcount(), returns the value in count. We call this function from all three
objects, and—as we expected—each prints the same value. Here’s the output:
count is 3 ←--- static data
count is 3
count is 3
If we had used an ordinary automatic variable—as opposed to a static variable—for count,
each constructor would have incremented its own private copy of count once, and the output
would have been
count is 1 ←--- automatic data
count is 1
count is 1
Static class variables are not used as often as ordinary non-static variables, but they are important
in many situations. Figure 6.9 shows how static variables compare with automatic variables.
//-----------------------------------------------------------------------------------------------------------------------------------
 /.........................................................oborator overloading .................................................

Operator overloading is one of the most exciting features of object-oriented programming. It
can transform complex, obscure program listings into intuitively obvious ones. For example,
statements like
d3.addobjects(d1, d2);
or the similar but equally obscure
d3 = d1.addobjects(d2);
>>>can be changed to the much more readable
d3 = d1 + d2;
The rather forbidding term operator overloading refers to giving the normal C++ operators,
such as +, *, <=, and +=, additional meanings when they are applied to user-defined data types.

Normally:
a = b + c;
works only with basic types such as int and float, and attempting to apply it when a, b, and c
are objects of a user-defined class will cause complaints from the compiler. However, using
overloading, you can make this statement legal even when a, b, and c are user-defined types


In effect, operator overloading gives you the opportunity to redefine the C++ language. If you
find yourself limited by the way the C++ operators work, you can change them to do whatever
you want. By using classes to create new kinds of variables, and operator overloading to create
new definitions for operators, you can extend C++ to be, in many ways, a new language of
your own design.

===========> what should i do if we want to add two object of class ????  or use unary operator licke ++ to an object ?????



//===========================================================================================================================================
      .............................................inheritance..........................................................

 ========>  Inheritance is the process of creating new classes, called derived classes, from
            existing or base classes. The derived class inherits all the capabilities of the base class but
            can add embellishments and refinements of its own. The base class is unchanged by this
            process.<==========





Order of Constructor Call with Inheritance in C++
• Whether derived class's default constructor is called or
parameterized is called, base class's default constructor is always
called inside them.
• To call base class's parameterized constructor inside derived class's
parameterized constructor, we must mention it explicitly while
declaring derived class's parameterized constructor.




*/  