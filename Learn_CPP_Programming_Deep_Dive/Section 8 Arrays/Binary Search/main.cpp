#include <iostream>

using namespace std;

int main(void)
{
    cout<<"Enter the key you wish to search for in the array : ";
    int key;
    cin>>key;

    cout<<"Enter how many elements you want to add in array :";
    int number_elements;
    cin>>number_elements;

    /* NOTE VERY IMPORTANT :: BINARY SEARCH ONLY WORKS WITH COLLECTIONS ORDERED ASCENDING */

    int *myArray = new int[number_elements];
    
    /* Fill in the array */
    for(int i = 0; i<number_elements;i++)
    {
        cout<<"Enter element ["<<i<<"] :";
        cin>>myArray[i];
    }

    int low, high, mid;
    low = 0;
    high = number_elements - 1;

    /* Implement the binary search on the ordered array */
    while(low<=high)
    {
        mid = (low + high)/2;

        if(myArray[mid] == key)
        {
            cout<<"I found the key at position :"<<mid<<" in the array."<<endl;
            return 0;
        }
        else if(myArray[mid]<key)
        {
            //move the low
            low = mid + 1;
        }
        else // it means then -> (myArray[mid]>key)  as a mnemonic if you search on the right hand side modify low, if you search left hand side modify high
        {
            //move the high 
            high = mid - 1;
        }
    }

    cout<<"I did not find the key in the array";

    return 0;

    // Concerning efficiency time linear search is O(n), and binary search is O(log n). Binary search is way faster than linear search.


}