#include <iostream>

using namespace std;

class Car
{
    public:
        virtual void start()
        {
            cout<<"Start() in Car"<<endl;
        }

        virtual void stop()
        {
            cout<<"Stop() in Car"<<endl;
        }
};

class Skoda : public Car
{
    public:
        void start()
        {
            cout<<"Start() from Skoda"<<endl;
        }

        void stop()
        {
            cout<<"Stop() from Skoda"<<endl;
        }
};

class Renault : public Car
{
    public:
        void start()
        {
            cout<<"Start() from Renault"<<endl;
        }

        void stop()
        {
            cout<<"Stop() from Renault"<<endl;
        }
};

int main(void)
{
    Car *c = new Skoda();
    c->start();
    c->stop();

    c = new Renault();
    c->start();
    c->stop();

    return 0;
}