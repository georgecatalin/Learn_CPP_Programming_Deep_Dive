#include <iostream>

using namespace std;

int main()
{
    cout<<"Enter the number for which you wish to display the digits."<<endl;

    int n;
    cin>>n;

    int remainder;
    remainder = 0;

    while(n>0)
    {
        remainder = n % 10;
        cout<<" "<<remainder;
        
        n = n/10;
    }

    cout<<endl;
    return 0;
}