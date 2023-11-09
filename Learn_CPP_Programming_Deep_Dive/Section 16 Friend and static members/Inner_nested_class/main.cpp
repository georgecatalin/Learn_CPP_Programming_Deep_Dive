#include <iostream>

using namespace std;

class Outer
{
    public:
        int a;
        static int b;

        void preview()
        {
            cout<<"i="<<i.x<<endl;
            cout<<Outer::b<<endl;
            i.show();
        }

        class Inner
        {
            public:
                int x = 45;
                void show()
                {
                    cout<<"Hakunamatata"<<endl;
                }
        };

        Inner i;
};

int Outer::b = 1978; // declare the static variable as a global variable , but only accessible through the scope resolution operator in the target class

int main(void)
{
    Outer o;
    o.preview();

    Outer::Inner i;
    i.show();

    return 0;
}