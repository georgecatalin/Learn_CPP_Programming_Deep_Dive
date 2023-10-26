#include <iostream>
#include <string>

using namespace std;

int main(void)
{
    string str = "How are you";

    char cstring[50];
    str.copy(cstring, str.length()); // this will copy the entire array of chars into the string array, including the null character '\0'
    cout<<cstring<<endl;

    char cstring2[50];
    str.copy(cstring2, 3); // "Howccccccccc"
     cout<<cstring2<<endl;
    cstring2[3]='\0'; // add the null character to create a valid string
     cout<<cstring2<<endl;

    cout<<str.find("are")<<endl; // 4
    cout<<str.find('o')<<endl; // 1
    cout<<str.rfind('o')<<endl; // 9
    cout<<str.find_first_of('o')<<endl; // 1
    cout<<str.find_first_of('o', 2)<<endl; // find from index 2  -> 9
    cout<<str.find_last_of('o')<<endl; // 9



    return 0;
}