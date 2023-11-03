#include <iostream>

using namespace std;


int * myfunction()
{
    int *p = new int[10];

    cout<<"The memory address of the p variable is "<<p<<endl;

    for (int i = 0; i<10; i++)
    {
        p[i] = i + 1;
    }

    return p;
}

int main(void)
{
    int *r = myfunction();

    cout<<"The address of the r variable is "<<r<<endl;

    for(int i = 0; i<10; i++)
    {
        cout<<r[i]<<endl;
    }

    delete[] r;


    // instantiating the elements of an array using the pointers
    int *m = new int[5];
    int *temp = m;
    cout<<"m is "<<m<<endl;
    for(int j = 0;j<5 ;j++)
    {
        *temp = j;
        temp++;
        cout<<m[j]<<endl;

    }

    delete[] m;
    m = nullptr;
    temp = nullptr;

    return 0;
}