#include <iostream>

using namespace std;

void display()
{
    cout<<"It is Friday evening. Weekend is coming!!"<<endl;
}

int max(int a, int b)
{
    cout<<"I am in max function"<<endl;
    return a > b ? a : b ;
}

int min(int a, int b)
{
    cout<<"I am in the min function"<<endl;
    return a < b ? a : b ;
}


int main(void)
{
    void (*fp) () ; //declaration
    fp = display;  // initialization
    (*fp)(); // usage of the function pointer


    int (*fp1)(int, int); // declaration of function pointers returning other than void and that take parameters
    fp1 = max; // initialization
    (*fp1)(10,5); // usage

    fp1 = min; 
    (*fp1)(10,5); // usage

    return 0;
}