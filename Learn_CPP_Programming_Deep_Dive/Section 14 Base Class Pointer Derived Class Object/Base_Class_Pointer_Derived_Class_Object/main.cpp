#include <iostream>

using namespace std;

class Base
{
    public:
        void function1();
        void function2();
        void function3();
};


class Derived : public Base
{
    public:
        void function4();
        void function5();
};

int main(void)
{
    Base *ptr;
    ptr = new Derived();

    ptr ->function1();
    ptr ->function2();
    ptr ->function3();
    
    Derived *ptrd;
    // ptrd = new Base(); // this is not correct -> the specialized class pointer can not be represented by an object of type Base as this object does not have all the specialized functions

    return 0;
}