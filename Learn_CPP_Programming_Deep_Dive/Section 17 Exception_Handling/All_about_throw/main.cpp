#include <iostream>

using namespace std;

class MyException
{

};


int division(int x, int y)
{
    if( y == 0)
    {
        throw MyException();  // one can throw an int, a float, a double, a char , a string or a user defined type (class)
    }

    return x/y;
}

int main(void)
{
    int a = 70, b = 0, c;

    try
    {
        c = division(a,b);
        cout<<"The result is \t->\t"<<c<<endl;
    }
    catch(MyException e)
    {
        cout<<"Division by zero "<<endl;
    }
    
    cout<<"End of program"<<endl;


    return 0;
}