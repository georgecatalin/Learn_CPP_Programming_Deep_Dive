#include <iostream>

using namespace std;

int main()
{
    cout<<"Enter the number for which you want to compute the sum of its divisors"<<endl;

    int n;
    cin>>n;

    int sum, i;
    sum = {0};

    for(i=1;i<=n;i++)
    {
        if(n%i == 0)
        {
            sum +=i;
            if(i!=n)
            {
                cout<<i<<" + ";
            }
            else
            {
                cout<<i;
            }
            
        }
    }
    cout<<endl;

    cout<<"The sum you need is "<<sum<<endl;

    if(sum == 2*n)
    {
        cout<<"The number "<<n<<" is a perfect number"<<endl;
    }
    else
    {
        cout<<"The number "<<n<<" is not a perfect number"<<endl;
    }


    return 0;
}