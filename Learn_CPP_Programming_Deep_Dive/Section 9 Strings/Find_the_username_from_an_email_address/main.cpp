#include <iostream>
#include <string>

using namespace std;

int main()
{
    string mystring = "george.calin@gmail.com";

    string username = "";

    int length = (int) mystring.length();
    username.resize(length);

    int counter = {0};

    for(int i = 0; mystring[i]!='\0'; i++)
    {
        username[i] = mystring[i];

        if(mystring[i] == '@')
        {
            counter = i;
            break;
        }
    }

    username.resize(counter+1); // to allow the storage of the '\0' character
    username[counter+1] = '\0';


    cout<<"The username extracted from email is "<<username<<endl;

    return 0;
}