#include <iostream>

using namespace std;

int main()
{
    int sum; 
    sum = 0;

    cout<<"Enter the number of elements in the array: "<<endl;
    int number_of_elements;
    cin>>number_of_elements;

    int *myArray = new int[number_of_elements];


    cout<<"Initialize the elements of the array down below"<<endl;
    for(int i = 0; i<number_of_elements;i++)
    {
        cout<<"Enter element in array :";
        int n;
        cin>>n;

        myArray[i] = n;
           
    }

    for(int i=0; i<number_of_elements; i++)
    {
        cout<<"Element of the array: "<<myArray[i];
        sum+=myArray[i];
    }

    cout<<"The sum of all elements in the array is "<<sum<<endl;

    delete[] myArray;

    return 0;
}