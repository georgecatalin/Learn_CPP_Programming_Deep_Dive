#include <iostream>

using namespace std;


class Base
{
    public:
        int age;
        void show()
        {
            cout<<age<<endl;
        }

/* *******************************************************************************************************************************************************
The age member of the Base class is public, so it can be accessed directly from an object of the Base class. However, when 
it comes to the Derived class, which inherits from Base, the age member is not directly accessible because the inheritance is private by default in C++.
********************************************************************************************************************************************************* */


};

/* **************************************************************************************************************************************************

In C++, if you do not specify an access specifier (`public`, `protected`, or `private`) when declaring a derived class, the inheritance is `private` by default. 
This means that public and protected members of the base class become private members of the derived class.
*************************************************************************************************************************************************** */

class Derived: public Base
{
    public:
        int weight;
        void display()
        {
            cout<<age<<" "<<weight<<endl;
        }
};

int main()
{
    Base b;
    b.age = 12;
    b.show();

    Derived d;
    d.age = 45;
    d.weight = 96;
    d.show();
    d.display();

    return 0;

}