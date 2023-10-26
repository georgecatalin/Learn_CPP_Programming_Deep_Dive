#include <iostream>
#include <cstring>

using namespace std;


int main(void)
{
    char destination[20] = "destination";
    char source[10] = "source";

    cout<<strcat(destination,source)<<endl; // -> destinationsource

    strcpy(destination, "destination");
    strcpy(source, "source");

    cout<<strncat(destination,source,3)<<endl; // -> destinationsou

    strcpy(destination, "destination");
    strcpy(source, "source");


    cout<<strcpy(destination,source)<<endl; // -> source

    strcpy(destination, "destination");
    strcpy(source, "source");


    cout<<strncpy(destination, source, 3)<<endl; // -> sou

    return 0;
}