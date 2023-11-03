#include <iostream>

using namespace std;

void swap(int &a, int &b)
{
    cout<<"The address of variable a ="<<&a<<endl<<"The address of variable b ="<<&b<<endl;

    int temp = a;
    a = b;
    b = temp;
}

int main(void)
{
    int x = 1953, y = 1954;
     cout<<"Before swaping the values, x = "<<x<<" and y = "<<y<<endl;
    cout<<"The address of variable x ="<<&x<<endl<<"The address of variable y ="<<&y<<endl;

    swap(x,y);

    cout<<"After swaping the values, x="<<x<<" and y="<<y<<endl;

    return 0;
}