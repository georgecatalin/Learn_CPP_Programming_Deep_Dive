#include <iostream>

using namespace std;

int global_var = 12;

void fun()
{
    int local_var = 45;
    cout<<"Local variable "<<local_var<<endl;

    global_var++;
    cout<<"The global variable is "<<global_var<<endl; //13
}

int main(void)
{
        cout<<"The global variable is "<<global_var<<endl; //12
        fun();
        cout<<"The global variable is "<<global_var<<endl; //13

        return 0;
}