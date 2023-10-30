#include <iostream>


using namespace std;

void swap(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
}



int main(void)
{
    int x = 1978, y = 1977;
    swap(x,y);

    cout<<x<<" "<<y;

    return 0;
}