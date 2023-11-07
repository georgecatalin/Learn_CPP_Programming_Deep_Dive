//
//  main.cpp
//  Way_of_inheritance
//
//  Created by George Catalin on 07.11.2023.
//

#include <iostream>

using namespace std;

class Parent
{
private:
    int a;
protected:
    int b;
public:
    int c;
    void funParent()
    {
        a = 12;
        b = 45;
        c = 70;
    }
};


class Child1:public Parent
{
public:
    void funChild()
    {
        //a = 13;
        b =46;
        c =67;
    }
};

class GrandChild1: public Child1
{
public:
    void funGrandChild()
    {
        //a = 46;
        b = 67;
        c = 50;
    }
};


class Child2: protected Parent
{
public:
    void funChild()
    {
        //a = 10; // remains private, thus inaccessible in child class
        b = 11;  //  remains protected, yet accessible here
        c = 12;  // turns into protected, yet accessible here in hte child class
    }
};


class GrandChild2: public Child2
{
public:
    void funGrandChild()
    {
        //a = 10; // remain private and is not accessible
        b = 11; // protected
        c = 12; // turns protected
    }
};


class Child3: private Parent
{
public:
    void funChild()
    {
        // a = 10;
        b = 11;
        c = 12;
    }
};

class GrandChild3: public Child3
{
public:
    void funGrandChild()
    {
        // a = 10;
        // b = 11;
        // c = 12;
    }
};



int main(int argc, const char * argv[]) 
{
    Child1 c1;
    //c1.a = 10;
    //c1.b = 11;  // protected
    c1.c = 12; // public
    
    Child2 c2;
    //c2.a = 10;
    //c2.b = 11;   // protected
    //c2.c = 13;  // protected
    
    Child3 c3;
    //c3.a = 10;  // private
    //c3.b = 11;  // private
   // c3.c = 12;  // private
    
    
    return 0;
}
