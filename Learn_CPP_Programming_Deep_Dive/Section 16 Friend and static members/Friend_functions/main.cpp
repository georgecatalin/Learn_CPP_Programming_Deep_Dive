#include <iostream>

using namespace std;

class Test
{
    private:
        int a;
    protected:
        int b;
    public:
        int c;

friend void myfunction();

};


void myfunction()
{
    Test t;
    t.a = 12;
    t.b = 45;
    t.c =46;

    cout<<"This is from inside myfunction()"<<endl;
}

int main(void)
{
    myfunction();

    return 0;
}