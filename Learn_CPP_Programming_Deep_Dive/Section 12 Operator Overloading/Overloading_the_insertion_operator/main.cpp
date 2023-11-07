#include <iostream>

using namespace std;

class Complex
{
    private:
        int real;
        int imaginary;

    public:
        Complex(int r=0, int i=0): real(r), imaginary(i)
        {
            cout<<"Parameterized constructor launched here >> "<<real<<" +i* "<<imaginary<<endl;
        }

        void display()
        {
            cout<<real<<" +i* "<<imaginary<<endl;
        }
    
    friend void display(Complex c);

    friend ostream & operator<<(ostream &out, Complex &c);
  
};

ostream &operator<<(ostream &out, Complex &c)
    {
        out<<c.real<<" +i* "<<c.imaginary<<endl;
        return out;
    }

void display(Complex c)
{
    cout<<c.real<<" +i* "<<c.imaginary<<endl;
}

int main(void)
{
    Complex c1(45,46), c2(12,4);

    c1.display();
    cout<<c1<<endl;
    cout<<c2<<endl;

    return 0;
}