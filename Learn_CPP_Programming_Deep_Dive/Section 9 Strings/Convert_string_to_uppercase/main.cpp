#include <iostream>
#include <string>

using namespace std;

int main (void)
{
    string mystring = "this is my string";

    string::iterator it;

    for(it=mystring.begin(); it != mystring.end(); it++)
    {
        *it = toupper(*it);
    }

    cout<<"The string converted to upper case -> "<<mystring<<endl;

    for(int i=0; mystring[i] != '\0'; i++)
    { 
        mystring[i] = tolower(mystring[i]);
    }
    
    cout<<"The string converted to lower case -> "<<mystring<<endl;

    return 0;
}