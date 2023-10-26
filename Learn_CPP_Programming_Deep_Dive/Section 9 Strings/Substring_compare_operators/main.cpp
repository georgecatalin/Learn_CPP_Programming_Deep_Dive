#include <iostream>
#include <string>

using namespace std;

int main(void)
{
    string str = "How are you";

    string this_substring = str.substr(4); //are you
    cout<<this_substring<<endl;

    this_substring = str.substr(4,3); // are
    cout<<this_substring<<endl;

    string str1 = "How are you";
    cout<<str.compare(str1)<<endl; // 0 because the strings are similar

    cout<<str.at(4)<<endl; //a
    cout<<str[4]<<endl; // a [] is obtained through operator overloading

    cout<<str.front()<<endl; //H
    cout<<str.back()<<endl; //u

    string concatenated = str + str1;
    cout<<concatenated<<endl;

    return 0;
}