#include <iostream>

using namespace std;

int division(int x, int y)
{
    if( y == 0)
    {
        throw 1;
    }

    return x/y;
}

int main(void)
{
    int a = 12, b = 0, c;

    try
    {
        c = division(a,b);
        cout<<c<<endl;
    }
    catch(int e)
    {
        cout<<"Division by zero\t->\t"<<e<<endl;
    }

    cout<<"End of program."<<endl;

    return 0;
}