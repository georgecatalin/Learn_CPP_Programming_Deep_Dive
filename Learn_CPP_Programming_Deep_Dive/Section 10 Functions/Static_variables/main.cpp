#include <iostream>

using namespace std;


void func()
{
    static int t = 1953; // a static variable is like a global variable, it retains her value , but it can only be accessed inside the function where it was defined
    t++;

    cout<<"Variable t is "<<t<<endl;
}

int main(void)
{
    func(); // 1954
    func(); // 1955
    func(); // 1956

    return 0;
}