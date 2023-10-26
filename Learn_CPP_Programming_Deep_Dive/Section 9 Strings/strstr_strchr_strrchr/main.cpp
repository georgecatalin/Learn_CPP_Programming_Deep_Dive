#include <iostream>
#include <cstring>

using namespace std;

int main(void)
{
    char mystring[] = "Programming";

    cout<<strstr(mystring,"mmin")<<endl; // -> mming (the rest of the string starting from the searched string)
    cout<<strchr(mystring,'o')<<endl; // -> ogramming (the rest of the string starting from the searched char)
    cout<<strrchr(mystring,'g'); // -> g

    return 0;
}