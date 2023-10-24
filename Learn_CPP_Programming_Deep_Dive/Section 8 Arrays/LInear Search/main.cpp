#include <iostream>

using namespace std;

int main(void)
{
    int key, number_of_elements;
    cout<<"Enter the number of elements you want to store in the array :";
    cin>>number_of_elements;

    cout<<"Enter the key: ";
    cin>>key;

    int *myArray = new int[number_of_elements];

    /* Fill in the array with values */
    for(int i = 0; i<number_of_elements; i++)
    {
        cout<<"Enter the element :";
        cin>>myArray[i];
    }

    bool isFound = false;

    /* Sweep into the array and search linearly for the key */
    for(int i = 0; i<number_of_elements; i++)
    {
        if(myArray[i] == key)
        {
            isFound = true;
            cout<<"the search was successful as I found key =>"<<key<<" in the array at position "<<i<<endl;
            break;
        }
    }
 
    if(isFound == false)
    {
        cout<<"The search was not successful as i did not find the key"<<endl;
    }
    
    cout<<"Astalavista, crocodile!!"<<endl;

    delete[] myArray;
    return 0;

}
