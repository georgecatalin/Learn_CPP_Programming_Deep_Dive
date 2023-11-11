#include <iostream>

using namespace std;

class Test
{
    public:
        int x = 20;
        int y = 28;
        void Display() const
        {
          cout<<x<<y<<endl;
          /* 4th usage of the const access modifier */
          //x++; // it is not allowed to change a member data of the class because the function had been marked with const
        }
};

void myFunction(const int &a, int &b)
{
    cout<<"Printing from myFunction()\t"<<a<<"\t"<<b<<endl;
    //a++;  //it is not allowed to change the value of a parameter marked as const
}

int main(void)
{
    /* 1st usage of const access modifier */
    const int x = 1978;
    //x++;

    /* 2nd usage of const access modifier*/
    int age = 45;
    const int *pAge = &age;

    cout<<"Age is "<<*pAge<<"\t"<<age<<endl;

    age = 70;
    cout<<"Age is "<<*pAge<<"\t"<<age<<endl;

    //(*pAge)++; // It is not allowed to change the address the pointer is pointing to -> pointer to an integer constant (read from right to left in the declaration of the variable)
    cout<<"Age is "<<*pAge<<"\t"<<age<<endl;

    int height = 178;
    pAge = &height;
    cout<<"Age is "<<*pAge<<"\t"<<age<<endl;

   /* 3rd of the const access modifier*/
   int * const pHeight = &height;
   cout<<"Height is "<<*pHeight<<"\t"<<height<<endl;

    ++(*pHeight);
    cout<<"Height is "<<*pHeight<<"\t"<<height<<endl;

    //pHeight = &age;  // this is not allowed as we are dealing with a constant pointer , that does not change its value ->read from left to right "constant pointer"
    cout<<"Height is "<<*pHeight<<"\t"<<height<<endl;

    Test t;
    t.Display();

    int a = 45, b = 12;
    myFunction(a,b);
    cout<<"Printing from main()\t"<<a<<"\t"<<b<<endl;

    return 0;
}