#include <iostream>
#include <string>

using namespace std;

int main()
{
    string mystring;

    cout<<"Enter a string: "<<endl;
    cin>>mystring;
    cout<<"You entered -> "<<mystring<<endl;

    cin>>mystring;
    cout<<"You entered the second string -> "<<mystring<<endl;
    
    cin.ignore();

    string mymultilinestring;

    cout<<"Enter a multi line string now: "<<endl;
    getline(cin, mymultilinestring);
    cout<<"You entered this multiline string ->"<<mymultilinestring<<endl;

    /* basic functions of the string class */
    string thistring = "This is my string.";

    cout<<thistring.length()<<endl;
    cout<<thistring.size()<<endl;
    cout<<thistring.capacity()<<endl;

    thistring.resize(40);
    cout<<thistring.capacity()<<endl;

    cout<<thistring.max_size()<<endl;

    thistring.clear();
    if(thistring.empty())
    {
        cout<<"This string is empty"<<endl;
    }

    return 0;
}