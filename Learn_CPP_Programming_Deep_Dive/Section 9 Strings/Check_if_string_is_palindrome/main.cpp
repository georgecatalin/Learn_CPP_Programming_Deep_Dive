#include <iostream>
#include <string>

using namespace std;

int main(void)
{
    string mystring = "madam";
    string reversed = "";

    int length = (int) mystring.length();
    reversed.resize(length);

    for(int i = 0, j = length -1; i < length ; j--,  i++)
    {
        reversed[i] = mystring[j];
    }

    reversed[length] = '\0';

    cout<<"The original string is "<<mystring<<endl;
    cout<<"The reversed string is "<<reversed<<endl;

    if(mystring.compare(reversed) == 0)
    {
        cout<<"The string is a palindrome.";
    }
    else
    {
        cout<<"The string is not a palindrome.";
    }


    return 0;
}