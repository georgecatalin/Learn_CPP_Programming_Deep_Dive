#include <iostream>

using namespace std;

int main()
{
    cout<<"Enter the number to whom you want to print the factors"<<endl;
    int n, i, remainder;
    cin>>n;

    for(i=1;i<=n;i++)
    {
        if(n%i == 0)
        {
            cout<<"This number "<<i<<" is a factorial of "<<n<<endl;
        }
    }

    return 0;
}