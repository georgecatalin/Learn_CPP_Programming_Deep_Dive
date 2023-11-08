#include <iostream>

using namespace std;

class BaseCar
{
    public:
        void start()
        {
            cout<<"Start car"<<endl;
        }
};

class AdvancedCar: public BaseCar
{
    public:
        void playMusic()
        {
            cout<<"Play music"<<endl;
        }
};

int main(void)
{
    AdvancedCar c;
    BaseCar *ptr=&c;

    ptr->start();
    //ptr->playMusic();


    BaseCar car;
    //AdvancedCar *ptra = &car;  // this can not be done

    return 0;
}