#include <iostream>

using namespace std;


class Test
{
    public:
      void function1()
      {
        /* this is an inline function -> it shall expand at the place where it is placed in the machine code of main  ;;;only single logic should be placed inside inline functions */
        cout<<"I am an inline function by definition"<<endl;
      }

      void function2(); // this is not an inline function, it shall expand outside of the place where it is called

      inline void function3(); // this is an inline function, so it expands at the place where it is located namely in the main function machine code. It happens like so due to the specifier "inline"
};

void Test::function2()
{
    cout<<"This is not an inline function"<<endl;
}

void Test::function3()
{
    cout<<"This is an inline function cause it was specified like so "<<endl;
}

int main(void)
{
    Test t;

    t.function1();
    t.function2();
    t.function3();


    return 0;
}