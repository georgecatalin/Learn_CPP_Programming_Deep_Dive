#include <iostream>

using namespace std;

template <class T>  // template class
class Stack
{
    private:
        T * stack;
        int top;
        int size;
    public:
        Stack(int sz) : top(-1), size(sz)
        {
            stack = new T[size];
        }

        void push(T x);
        T pop();

        void showTop()
        {
            cout<<"There are "<<top+1<<" elements in the stack"<<endl;
        }

};

template <class T>  // template function
void Stack<T>::push(T x)
{
    if(top == size - 1)
    {
        cout<<"The stack is full, can not load it anymore."<<endl;
    }
    else
    {
        top++;
        stack[top] = x;
    }
}

template <class T>
T Stack<T>::pop()
{
    T x = 0;

    if ( top == -1)
    {
        cout<<"The stack is empty, can not take anything out of it"<<endl;
    }
    else
    {
        x = stack[top];  // store the last element into x variable
        cout<<"I removed this element from the stack \t"<<x<<endl;
        top --;
    }

    return x;
}


int main(void)
{
    Stack<int> s1(10);
    s1.push(12);
    s1.push(45);
    s1.push(46);
    s1.push(70);

    s1.showTop();

    int e = s1.pop();

    s1.showTop();

    return 0;
}