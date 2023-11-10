#include <iostream>

using namespace std;

int main(void)
{
    int a = 12, b = 0, c;

    try
    {
        if(b == 0)
        {
            throw 1;
        }

        c = a/b;
        cout<<c<<endl;
    }
    catch(int e)
    {
        cout<<"Division by zero\t->error code\t"<<e<<endl;
    }
    cout<<"See ya later, alligator!!"<<endl;


    return 0;
}