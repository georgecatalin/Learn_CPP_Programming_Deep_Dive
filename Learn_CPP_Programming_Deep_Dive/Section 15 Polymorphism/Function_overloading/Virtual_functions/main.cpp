#include <iostream>

using namespace std;

class Parent
{
    public:
        void show()
        {
            cout<<"Show() in Parent"<<endl;
        }

        virtual void preview()  // with this we achieve runtime polymorphism
        {
            cout<<"Preview() in Parent"<<endl;
        }
};


class Child : public Parent
{
    public:
        void show()
        {
            cout<<"Show() in Child"<<endl;
        }

        void preview()
        {
            cout<<"Preview() in Child"<<endl;
        }

};

int main()
{
    Child c;
    Parent *ptr = &c;
    ptr->show();
    ptr->preview(); // the preview() from Child() class is run

    Parent *p = new Child();
    p->show();
    p->preview();

    return 0;
}