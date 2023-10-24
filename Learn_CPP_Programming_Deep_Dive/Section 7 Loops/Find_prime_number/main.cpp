#include <iostream>

using namespace std;

int main()
{
    cout<<"Enter the number you want to check for prime"<<endl;
    int n;
    cin>>n;

    int i, remainder, counter;

    counter = 0;

    for(i=1;i<=n;i++)
    {
        if(n%i== 0)
        {
            counter++;
        }
    }

    cout<<"The number you entered --> "<<n<<" has "<<counter<<" divisors"<<endl;

    if(counter == 2) cout<<"The number "<<n<<" is a prime number!!"<<endl;

    return 0;
}