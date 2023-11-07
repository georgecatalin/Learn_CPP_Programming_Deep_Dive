#include <iostream>

using namespace std;

class Complex
{
    public:
        int real;
        int imaginary;

        Complex(int r = 0, int i = 0) : real(r), imaginary(i)   //here i am using member initialization lists instead of body assignation
        {
            cout<<"Parameterized constructor appelead to here -> real part "<<this->real<<" imaginary part "<<this->imaginary<<endl;;
        }

        /* when defining overloaded operator we offer a new functionality to an operator so that it fits new user defined data types */
        Complex add(Complex c)
        {
            Complex temp;
            temp.real = real + c.real;
            temp.imaginary = imaginary + c.imaginary;

            return temp;
        }

        /* By replacing the names of the functions to "operator+", "operator-" whatsoever we achieve operator overloading */
        Complex operator+(Complex c)
        {
            Complex temp;
            temp.real = real + c.real;
            temp.imaginary = imaginary + c.imaginary;

            return temp;
        }

        ~Complex()
        {
            cout<<"This is the destructor of this class"<<endl;
        }
};


int main(void)
{
    Complex c1(1953,1954), c2(1977,1978), c3,c4;

    c3 = c1.add(c2);
    c4 = c1 + c2;

    cout<<"C3 ="<<c3.real<<"+ i* "<<c3.imaginary<<endl;
    cout<<"C4 ="<<c4.real<<"+ i* "<<c4.imaginary<<endl;

    return 0;
}