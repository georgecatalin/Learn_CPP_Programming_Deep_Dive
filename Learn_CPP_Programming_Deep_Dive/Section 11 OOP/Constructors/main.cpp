#include <iostream>

using namespace std;

class Rectangle
{
    private:
        int length;
        int breadth;

    public:
        /* Accessors go here */
        int getLength()
        {
            return length;
        }
        int getBreadth()
        {
            return breadth;
        }

        /* Mutators go here */
        void setLength(int l)
        {
            if(l<0)
            {
                length = 0;
            }
            else
            {
                length = l;
            }
        }
        void setBreadth(int b)
        {
            if(b<0)
            {
                breadth = 0;
            }
            else
            {
                breadth = b;
            }
        }

        /* There are 4 types of constructors:  1. Compiler provided 2. no-parameterized 3. parameterized  4. copy constructor */
        Rectangle()
        {
            /* this is non parameterized constructor */
            length = 0;
            breadth = 0;
        }

        Rectangle(int l, int b)
        {
            /* this is a parameterized constructor */
            setLength(l);
            setBreadth(b);
        }

        Rectangle(Rectangle &r)
        {
            /* this is a copy constructor - i am providing a copy example */
            length = r.length;
            breadth = r.breadth;
        }

        int area()
        {
            return length * breadth;
        }

};

int main(void)
{
    Rectangle r1;
    Rectangle r2(10,20);

    Rectangle r3(r2);

    cout<<"Area of non-parameterized rectangle is "<<r1.area()<<endl;
    cout<<"Area of non-parameterized rectangle is "<<r2.area()<<endl;
    cout<<"Area of non-parameterized rectangle is "<<r3.area()<<endl;

    return 0;

}