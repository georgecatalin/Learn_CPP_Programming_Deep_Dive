#include <iostream>

using namespace std;

int main(int argc, char** argv)
{
    cout<<"Enter the number to calculate its factorial -> that is 1*2*3*4*....*n "<<endl;
    int n,factorial,i;

    factorial = 1;
    cin>>n;

    for(i=1;i<=n;i++)
    {
        factorial *=i;
    }

    cout<<"The factorial of the "<<n<<" natural numbers is "<< factorial<<endl;

    return 0;
}