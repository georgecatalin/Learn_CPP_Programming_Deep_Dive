#include <iostream>

using namespace std;

void my_recursive_function(int n)
{
    if(n>0)
    {
        cout<<"The value of n is \t->\t"<<n<<endl;
        my_recursive_function(n-1);
    }
}



void my_recursive_function_2(int n)
{
    if(n>0)
    {
        my_recursive_function_2(n-1);
        cout<<"The value of n is \t->\t"<<n<<endl;
    }
}

int main(void)
{
    int x = 5;
    my_recursive_function(x);
    cout<<"*********************************************"<<endl<<endl;
    my_recursive_function_2(x);
}