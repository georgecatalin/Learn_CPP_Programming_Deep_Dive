#include <iostream>

using namespace std;

/* -----------------------------------------------------------------------------------------------------------------------------------------------------------------------------
In C++, a friend function is a function that is not a member of a class but is granted special access to the private and protected members of that class. 
Friend functions are often used when you need to allow an external function or another class to access the private data of a class without making those data members public.
----------------------------------------------------------------------------------------------------------------------------------------------------------------------------- */

class Complex
{
    private: 
        int real;
        int imaginary;
    public:
        Complex(int r=0, int i=0) : real(r), imaginary(i)
        {
            cout<<"Parameterized constructor for "<<real<<" +i* "<<imaginary<<endl;
        }

        void display()
        {
            cout<<real<<" +i* "<<imaginary<<endl;
        }

     friend Complex operator+(Complex c1, Complex c2); // this friend function is not a member function of the class , but it can access all members of the class, including private or protected without need to change them to public
};


Complex operator+(Complex c1, Complex c2)
{
    Complex temp;
    temp.real = c1.real +c2.real;
    temp.imaginary = c1.imaginary +c2.imaginary;

    temp.display();
    return temp;

}

int main(void)
{
    Complex c1(5,3),c2(5,7),c3,c4;

    c3 = operator+(c1,c2);
    c3.display();

    c4 = c1 + c2;
    c4.display();

    return 0;
}