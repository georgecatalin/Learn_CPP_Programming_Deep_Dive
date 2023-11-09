#include <iostream>

using namespace std;

class Test
{
    private:
        int a;
        int b;
    public:
        static int counter;
        Test(): a(12), b(45)
        {
            counter++;
        }

        static int getCounter()
        {
            return counter;
        }

};

int Test::counter;

int main(void)
{
    Test t1;
    cout<<t1.counter<<endl;

    Test t2;
    cout<<Test::counter<<endl;

    cout<<t1.getCounter()<<"\t\t"<<Test::getCounter();


    return 0;
}