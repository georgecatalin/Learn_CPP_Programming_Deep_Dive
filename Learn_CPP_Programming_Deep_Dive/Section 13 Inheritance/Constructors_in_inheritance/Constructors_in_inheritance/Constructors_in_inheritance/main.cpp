//
//  main.cpp
//  Constructors_in_inheritance
//
//  Created by George Catalin on 07.11.2023.
//

#include <iostream>
using namespace std;

class Base_Class
{
public:
    Base_Class()
    {
        cout<<"This is a non-parametrized constructor of Base class"<<endl;
    }
    
    Base_Class(int x)
    {
        cout<<"This is a parametrized constructor of Base class"<<x<<endl;
    }
};

class Derived_Class: public Base_Class
{
public:
    Derived_Class()
    {
        cout<<"This is a non-parametrized constructor of Derived Class "<<endl;
    }
    
    Derived_Class(int x)
    {
        cout<<"This a parametrized constructor of Derived Class "<<x<<endl;
    }
    
    Derived_Class(int x, int y) : Base_Class(y)
    {
        cout<<"This is a parametrized constructor of Derived Class "<<x<<"\t"<<y<<endl;
    }
};


int main(int argc, const char * argv[]) 
{
    Derived_Class d1;
    
    Derived_Class d2(12);
    
    Derived_Class d3(12,45);
    
    
    
    return 0;
}
