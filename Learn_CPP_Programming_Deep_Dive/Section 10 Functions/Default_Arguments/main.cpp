#include <iostream>

using namespace std;


int maximum(int a = 0, int b = 0, int c = 0)
{
    return (a>b && a>c) ? a : ( b>c ? b : c);
}




int main(void)
{
    cout<<maximum()<<endl;
    cout<<maximum(10)<<endl;
    cout<<maximum(12,44)<<endl;
    cout<<maximum(1953,1954,1973)<<endl;

    return 0;
}