#include <iostream>
#include <cstring>

using namespace std;

int main(void)
{
    char mystring[]="x=1978;y=1977;z=2011";

    char *token = strtok(mystring,"=;"); // +; -> will be considered both delimiters for tokenizing

    while(token != NULL)
    {
        cout<<token<<endl;
        token = strtok(NULL,"=;");
    }

    return 0;
}