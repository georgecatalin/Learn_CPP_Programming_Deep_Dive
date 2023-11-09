#include <iostream>

using namespace std;

class Base
{
    public:
        void fun1()
        {
            cout<<"fun1() in Base"<<endl;
        }

        virtual void fun2() = 0; // this is a pure virtual function -> it forces the derived classes to implement them, otherwise they remain abstract classes too
};


class Child : public Base
{
    public:
        void fun2()
        {
            cout<<"fun2() in Derived"<<endl;
        }
};


int main(void)
{
    Base *b = new Child();
    b->fun1();
    b->fun2();

    //  Base bb;  // it is not possible to instantiate an abstract class

    /* The purpose of inheritance is either reusability of functions or polymorphism at runtime */



    return 0;
}