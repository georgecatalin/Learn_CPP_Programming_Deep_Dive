#include <iostream>

using namespace std;

/* the this pointer is useful to refer to members of the current object */

class Rectangle
{
    private:
        int length;
        int breadth;

    public:
        Rectangle(int length, int breadth)
        {
            this->length = length;
            this->breadth = breadth;
        }

        int area()
        {
            return length * breadth;
        }
};


int main(void)
{
    Rectangle r1(15,45);

    cout<<"The area is "<<r1.area()<<endl;
    
    return 0;
}