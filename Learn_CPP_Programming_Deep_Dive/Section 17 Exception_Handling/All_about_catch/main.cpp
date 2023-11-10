#include <iostream>

using namespace std;

class MyException
{

};

class MyException2 : public MyException
{

};


int main(void)
{
    try
    {
        throw MyException();
    }
    catch(int e )
    {
        cout<<"Int catch here"<<endl;
    }
    catch(float e)
    {
        cout<<"Float catch here"<<endl;
    }
    catch(char e)
    {
        cout<<"Character catch here"<<endl;
    }
    catch(MyException2 e)
    {
        cout<<"MyException2 catch here"<<endl;
    }
    catch(MyException e)
    {
        cout<<"MyException catch here"<<endl;
    }
    catch(...)  // ... -> is called ellipsis
    {
        cout<<"Catch all here"<<endl;
    }

    cout<<"End of program";
}
