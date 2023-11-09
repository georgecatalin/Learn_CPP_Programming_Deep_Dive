#include <iostream>

using namespace std;

class YourClass;

class MyClass
{
    private:
        int age;
    protected:
        float weight;
    public:
        float height;

    friend YourClass;

};


class YourClass
{
    private:
        MyClass m;
    public:
        void myFunction()
        {
            m.age = 45;
            m.weight = 96.0f;
            m.height = 178.0f;

            cout<<"age="<<m.age<<"\tweight="<<m.weight<<"\theight="<<m.height<<endl;
        }
};


int main(void)
{
    YourClass y;
    y.myFunction();


    return 0;
}