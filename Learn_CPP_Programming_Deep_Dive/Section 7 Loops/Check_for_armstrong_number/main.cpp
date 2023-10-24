/* A number is an Amstrong number if the sum of the cube of the digits is equal with the number itself e.g  153 -> 1*1*1 + 5*5*5+3*3*3 = 153 */
#include <iostream>

using namespace std;

int main()
{
    cout<<"Enter the number you wish to check if it is Armstrong number"<<endl;

    int initial_number, n;
    cin>>initial_number;

    int remainder,sum;
    sum = 0;
    n = initial_number;
    
    while(n>0)
    {
        remainder = n % 10;
        sum += remainder * remainder * remainder;

        n = n/10;
    }

    if(sum == initial_number)
    {
        cout<<"The number is an Armstrong number cause "<<sum<<" = "<<initial_number<<endl;
    }
    else
    {
        cout<<"The number is NOT an Armstrong number cause "<<sum<<" != "<<initial_number<<endl;
    }

    return 0;
}