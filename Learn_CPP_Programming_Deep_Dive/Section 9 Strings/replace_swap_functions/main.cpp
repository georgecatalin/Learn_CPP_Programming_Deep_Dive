#include <iostream>
#include <string>

using namespace std;

int main(void)
{
    string this_string = "programming";

    this_string.replace(2,4,"CCC"); // prCCmming
    cout<<this_string<<endl;

    this_string.erase(); //same as clear() method
    cout<<this_string<<endl;

    this_string = "programming";
    this_string.push_back('F'); // programmingF
    cout<<this_string<<endl;

    this_string = "programming";
    this_string.pop_back(); // programmin
    cout<<this_string<<endl;

    this_string = "programming";
    string that_string = "engineering";
    cout<<this_string<<" "<<that_string<<endl;
    this_string.swap(that_string);  //
    cout<<this_string<<" "<<that_string<<endl;

    return 0;

}