#include <iostream>

using namespace std;

int main(void)
{
    int min, max;
    min = INT_MAX;
    max = 0;

    cout<<"Enter the number of elements you wish to store in the array :";
    int number_of_elements;
    cin>>number_of_elements;

    int *myArray = new int[number_of_elements];

    /* Set value in the elements of the array */
    for(int i = 0; i<number_of_elements; i++)
    {
         cout<<"Enter the element of the array: ";
         cin>> myArray[i];
    }

    /* Get the max and min sweeping the elements of the array */
    for(int i = 0; i<number_of_elements; i++)
    {
        if(myArray[i]<min)
        {
            min = myArray[i];
        }

        if(myArray[i]>max)
        {
            max = myArray[i];
        }
    }

    cout<<"after sweeping the entire array we have min = "<<min<<" and max = "<<max<<endl;
    delete[] myArray;
    return 0;

}