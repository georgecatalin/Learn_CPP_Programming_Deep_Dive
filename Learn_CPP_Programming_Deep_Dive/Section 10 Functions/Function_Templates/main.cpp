#include <iostream>

using namespace std;

// There is the same logic in both bodies of the functions, only the returned type and the parameters differ, hence we can use a template function to support at once all data types
/* 
int maxim(int a, int b)
{
    return a > b ? a : b;
}

float maxim(float a, float b)
{
    return a > b ? a : b;
}
*/

template <class T>
T maxim(T a, T b)
{
    return a > b ? a : b;
}


int main(void)
{
    cout<<maxim(1953,1973)<<endl;
    cout<<maxim(1953.3f, 1974.3f)<<endl;
    cout<<maxim(1944.43,1918.34)<<endl; // double here

    return 0;
}