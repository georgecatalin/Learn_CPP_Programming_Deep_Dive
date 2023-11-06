#include <iostream>

using namespace std;

struct Demo1
{
    int age;
    int color;
    
    /* Unlike C language where structure could only host data members in C++ , structures can only have functions*/
    void Display()
    {
        cout<<"age "<<age<<" color "<<color<<endl;
    }

    /* an important difference aspect, in a structure of C++ all access modifiers are PUBLIC */
};


class Demo2
{
    int age;
    int color;
    
    void Display()
    {
        cout<<"age "<<age<<" color "<<color<<endl;
    }

    /* an important difference aspect, in a class of C++ all access modifiers are by default PRIVATE */
};


int main(void)
{
    Demo1 d1;
    d1.Display();

    Demo2 d2;
    // d2.Display()  // ->does not work as the function is private

    return 0;
}