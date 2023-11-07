#include <iostream>

using namespace std;

class Rectangle
{
    private:
        int length;
        int breadth;
    public:
        Rectangle();
        Rectangle(int l, int b);
        Rectangle(Rectangle &r);

        int getLength()
        {
            return length;
        }
        int getBreadth()
        {
            return breadth;
        }

        void setLength(int l);
        void setBreadth(int b);

        int area();
        int perimeter();

        bool isSquare();

        ~Rectangle();

};

Rectangle::Rectangle(): length(1),breadth(1)
{
    cout<<"No parameter constructor for Rectangle() invoked now"<<endl;
}

Rectangle::Rectangle(int l, int b): length(l), breadth(b)
{
    cout<<"Parameter constructor for Rectangle() invoked now"<<endl;
}

Rectangle::Rectangle(Rectangle &r): length(r.length), breadth(r.breadth)
{
    cout<<"Copy constructor for Rectangle() invoked now"<<endl;
}

void Rectangle::setLength(int l)
{
    length = l;
}

void Rectangle::setBreadth(int b)
{
    breadth = b;
}

int Rectangle::area()
{
    return length * breadth;
}

int Rectangle::perimeter()
{
    return 2*(length + breadth);
}

bool Rectangle::isSquare()
{
    return length == breadth ? true : false;
}

Rectangle::~Rectangle()
{
    cout<<"Destructor for Rectangle() invoked now";
}

class Cuboid: public Rectangle
{
    private:
        int height;
    public:
        Cuboid(int h, int l, int b)
        {
            height = h;
            setLength(l);
            setBreadth(b);
        }

        int getHeight()
        {
            return height;
        }

        void setHeight(int h)
        {
            height = h;
        }

        int volume()
        {
            return getLength()  *  getBreadth() * height;
        }

        ~Cuboid()
        {
            cout<<"Destructor for Cuboid() invoked now."<<endl;
        }

}; 

int main(void)
{
    Cuboid c(2,3,5);

    cout<<"Area of base is "<<c.area()<<endl<<" Perimeter of the base is "<<c.perimeter()<<endl<<" Is base a square? "<<c.isSquare()<<endl<<" Volume is "<<c.volume()<<endl;

    return 0;
}
