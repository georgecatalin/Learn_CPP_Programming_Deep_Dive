#include <iostream>

using namespace std;

int main()
{
    cout<<"Enter the number you wish to reverse"<<endl;

    int initial_number;
    cin>>initial_number;

    int remainder, reverse,n;
    reverse = 0;

    n = initial_number;

    while(n> 0)
    {
        remainder = n % 10;
        n = n/10;

        reverse = reverse * 10 + remainder;
    }

    cout<<"The number reversed from "<<initial_number<<" is "<<reverse;

    return 0;
}