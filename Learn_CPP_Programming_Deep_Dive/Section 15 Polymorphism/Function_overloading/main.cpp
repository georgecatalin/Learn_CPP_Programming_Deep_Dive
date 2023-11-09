#include <iostream>

using namespace std;

class Parent
{
    public:
        void display()
        {
            cout<<"Display from base"<<endl;
        }

        void preview()
        { 
            cout<<"Preview from Parent"<<endl;
        }
};

class Child: public Parent
{
    public:
        void display() // overriding
        {
            cout<<"Display from Child"<<endl;
        }

        void preview(int x) // function overloading
        {
            cout<<"Preview from Child overloaded"<<endl;
        }
};


int main(void)
{
    Child c;
    c.display();
    c.preview(10);
    c.Parent::preview();

    return 0;
}