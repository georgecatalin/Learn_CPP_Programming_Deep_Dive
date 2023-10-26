#include <iostream>
#include <string>

using namespace std;

int main()
{
    string thisString = "Hello";

    cout<<thisString.capacity()<<" "<<thisString.length()<<endl;
    thisString.append("world!");
    cout<<thisString.capacity()<<" "<<thisString.length()<<endl;

    thisString.insert(2,"KK"); // HEKKllo
    cout<<thisString<<endl;

    thisString = "Hello";
    thisString.insert(2,"Area", 3); // HeArello
    cout<<thisString<<endl;


    return 0;
}