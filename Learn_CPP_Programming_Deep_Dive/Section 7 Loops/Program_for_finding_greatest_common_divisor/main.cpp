#include <iostream>

using namespace std;

int main()
{
    cout<<"Enter the numbers to check for the greatest common divisor"<<endl;

    int initial_m, initial_n;
    cin>>initial_m>>initial_n;

    int n, m;
    m = initial_m;
    n = initial_n;

    while(m!=n)
    {
        if(m>n)
        {
            m = m-n;
        }
        else if(n>m)
        {
            n = n-m;
        }
    }
    cout<<"The greatest common divisor of the numbers "<<initial_m<<" and "<<initial_n<<" is "<<n<<endl;

    return 0;
}