//
//  main.cpp
//  Pointer_to_an_object_in_heap
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
    
    int area(){
        return length * breadth;
    }
    
    int perimeter(){
        return  2*(length + breadth);
    }
};

int main(int argc, const char * argv[]) 
{
    Rectangle r1;
    
    Rectangle *ptr;
    ptr = &r1;
    
    ptr ->length = 20;
    ptr ->breadth = 30;
    cout<<"The area of this rectangle is "<<ptr->area()<<endl;
    cout<<"The perimeter of this rectangle is "<<ptr->perimeter()<<endl;
    
    
    
    cout<<"**********************"<<endl;
    
    Rectangle r2; // this object is created on the stack memory
    
    Rectangle *pr2 = new Rectangle(); // this object is created on the heap memory
    pr2 -> length = 15;
    pr2 ->breadth = 30;
    cout<<"The area of the rectangle object created in the heap is "<<pr2 ->area()<<endl;
    cout<<"The perimeter of the rectangle object created in the heap is "<<pr2 -> perimeter()<<endl;
    
    delete pr2;
    
    
    
    
    
    return 0;
}
