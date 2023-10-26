#include <iostream>
#include <cstring>

using namespace std;

int main(void)
{
    char word1[]="1978";
    char word2[]="45.2";

    long int x =  strtol(word1, NULL, 10);
    float y = strtof(word2,NULL);

    cout<<"The numbers converted from strings are "<<x+10<<endl<<y-10<<endl;

    return 0;
}