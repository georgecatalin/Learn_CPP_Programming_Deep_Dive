#include <iostream>
#include <string>

using namespace std;

int main(void)
{
    string this_string = "this is a stRIng";

    int vowels = 0;
    int consonants = 0;
    int words = 0;

    for(int i = 0; this_string[i] != 0; i++)
    {
        switch(this_string[i])
        {
            case 'a':
            case 'A':
            case 'i':
            case 'I':
            case 'u':
            case 'U':
            case 'o':
            case 'O':
                vowels ++;
                break;
            case ' ':
                words ++;
                break;
            default:
                consonants ++;
        }
    }

    cout<<"Number of vowels ->"<<vowels<<endl;
    cout<<"Number of consonants ->"<<consonants<<endl;
    cout<<"Number of words ->"<<words + 1<<endl;

    return 0;
}