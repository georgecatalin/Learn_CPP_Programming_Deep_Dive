#include <iostream>
#include <string>

using namespace std;

int main(void)
{
    cout<<"how to use the class iterator"<<endl;
    string str = "pechea este locul unde m-am nascut.";
    string::iterator my_iterator;

    cout<<str<<endl;

    cout<<"how to handle a string with a for loop"<<endl;

    for(int i = 0; str[i] != '\0'; i++)
    {
        cout<<str[i]; //change to uppercase again
    }

    cout<<str<<endl;

     cout<<"how to handle a class iterator"<<endl;

    for(my_iterator=str.begin(); my_iterator != str.end(); my_iterator ++)
    {
        cout<<*my_iterator<<endl;
        *my_iterator = toupper(*my_iterator);  // the difference between the ascii codes of smaller and uppercase letters is 32
    }

    cout<<str<<endl<<endl;

    cout<<"how to use the class reverse_iterator"<<endl;

    string::reverse_iterator my_reverse_iterator;

    for(my_reverse_iterator=str.rbegin(); my_reverse_iterator != str.rend(); my_reverse_iterator ++)
    {
        cout<<*my_reverse_iterator;
    }

    cout<<endl<<endl;


    return 0;
}