#include <iostream>

using namespace std;

int main()
{
    cout<<"Enter the number of natural numbers to sum up"<<endl;

    int n;
    cin>>n;

    int sum, i;

    sum = 0;

    for(i=1;i<=n;i++)
    {
        sum +=i;
    }

    cout<<"The sum of the "<<n<<" natural numbers is "<<sum<<endl;

    return 0;
}