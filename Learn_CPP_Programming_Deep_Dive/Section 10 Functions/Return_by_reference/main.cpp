#include <iostream>

using namespace std;

int & fun(int &a)
{
   cout<<"The address of a is "<<&a<<" and the value of a is "<<a<<endl;
   return a;
}

int fun1(int b)
{

    return 2*b;
}

int main(void)
{
    int x = 1953;

    fun(x) = 1954;

    int y = fun1(3);
    cout<<"The value of y is "<<y<<endl;


    cout<<"The value of x is "<<x<<endl;
}