#include <iostream>

using namespace std;

class Rectangle
{
    public:
        void area()
        {
            cout<<"Area function here"<<endl;
        }
};

class Cuboid: public Rectangle
{
    public:
        void volume()
        {
            cout<<"Volume function here"<<endl;
        }
};


int main(void)
{
    //Rectangle r;
    //Cuboid *ptrc = &r;   // this is not correct an object of type base does not know about all the extended functionality for the cuboid
    //ptrc ->area(); 

    Cuboid c;
    Rectangle *ptrr = &c;
    ptrr->area();
    //ptrr->volume(); this pointer does not know about the volume() function , it expects to find a Rectangle where it is pointing to

    return 0;
}