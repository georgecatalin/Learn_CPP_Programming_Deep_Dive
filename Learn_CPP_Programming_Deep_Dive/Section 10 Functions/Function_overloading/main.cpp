#include <iostream>

using namespace std;


int add(int a, int b)
{
    return a + b;
}

int add(int a, int b, int c)
{
    return a + b + c;
}

float add(float a, float b)
{
    return a + b;
}

/* CAN NOT OVERLOAD FUNCTION BY DISTINGUISHING THEM ONLY BY A DIFFERENT RETURN TYPE*/
/*
int add(float a , float b)
{
    return a + b;
}
*/

int main(void)
{
    int x = add(3,4);
    float y = add(3.2f, 4.6f); // 3.2f cause by default 3.2 is taken as double
    int z = add(5,6,7);

    cout<<x<<"  "<<y<<"  "<<z<<endl;

    return 0;
}