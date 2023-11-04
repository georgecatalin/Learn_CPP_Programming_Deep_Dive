//
//  main.cpp
//  Writing_a_class_in_CPP
//
//  Created by George Catalin on 04.11.2023.
//

#include <iostream>

using namespace std;

class Rectangle
{
    public:
        int length;
        int breadth;
    
        int area()
        {
            return length * breadth;
        }
    
    int perimeter()
    {
        return 2*(length+breadth);
    }
};

int main(int argc, const char * argv[]) 
{
    Rectangle r1;
    
    r1.length = 10;
    r1.breadth = 30;
    
    cout<<"The area is "<<r1.area()<<endl;
    cout<<"The perimeter is "<<r1.perimeter()<<endl;
    
    return 0;
}
