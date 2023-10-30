#include <iostream>

using namespace std;

int maximum(int a, int b, int c)
{
    if((a>b) && (a>c))
    {
        return a;
    }
    else if (b>c) // if is greedy it would mean either (a<b) or (a>b) and (a<c)
    {
        return b;
    }
    else
    {
        return c;
    }

}

int minimum(int a, int b, int c)
{
    if( (a<b) && (a<c))
    {
        return a;
    }
    else if(b<c)
    {
        return b; // if clause is greedy so it would mean either (a>b) or a>b and a>c
    }
    else
    { 
        return c;
    }
}

int main(void)
{
    int a = 1978, b = 1973, c = 2000;

    int d = maximum(a,b,c);
    cout<<"The maximum of the 3 numbers is "<<d<<endl;

    int e = minimum(a,b,c);
    cout<<"The minimum of the 3 numbers is "<<e<<endl;

    return 0;
}