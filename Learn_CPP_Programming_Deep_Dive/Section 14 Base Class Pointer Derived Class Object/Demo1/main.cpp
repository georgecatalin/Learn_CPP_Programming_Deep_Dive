#include <iostream>

using namespace std;

class Base
{
    public:
        void function1()
        {
            cout<<"Function1 called here"<<endl;
        }
};

class Derived: public Base
{
    public:
        void function2()
        {
            cout<<"Function2 called here"<<endl;
        }
};

int main(void)
{
    Base *ptr;
    ptr->function1();
    //ptr->function2();

    return 0;
}