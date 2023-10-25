#include <iostream>

using namespace std;

int main(void)
{
    for(int i = 0; i < 7; i++)
    {
        for (int j = 0; j < 7; j++)
        {
            if(i + j >= 7)
            {
                cout<<"*";
            }
            else
            {
                cout<<" ";
            }
        }
        cout<<endl;
    }
}