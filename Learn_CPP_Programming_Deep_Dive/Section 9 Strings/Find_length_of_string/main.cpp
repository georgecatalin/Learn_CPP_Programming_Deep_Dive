#include <iostream>
#include <string>

using namespace std;

int main(void)
{
    string mystring = "this is a string.";
    int length_of_string = {0};

    for(int i = 0; mystring[i]!='\0';  i++)
    {
        length_of_string = i;
    }



    cout<<"The length of this string is "<<length_of_string + 2<<endl;

    return 0;
}