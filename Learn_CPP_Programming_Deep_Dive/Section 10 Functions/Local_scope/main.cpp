#include <iostream>

using namespace std;

int my_var = 45;

int main(void)
{
    int my_var = 70;

    {
        int my_var = 69;
        cout<<my_var<<endl; //69
    }

    cout<<my_var<<endl; // 70

    cout<<::my_var<<endl; // 45
    return 0;
}