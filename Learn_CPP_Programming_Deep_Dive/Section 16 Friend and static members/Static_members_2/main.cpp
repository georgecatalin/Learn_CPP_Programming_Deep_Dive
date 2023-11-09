#include <iostream>

using namespace std;

class Student
{
    private:
        int rollNumber;
        string name;
        static int admissionNumber;

    public:
        Student(string n): name(n)
        {
            admissionNumber++;
            rollNumber = admissionNumber;
        }

        void display()
        {
            cout<<"Name="<<name<<"\tRollNumber="<<rollNumber<<endl;
        }
};

int Student::admissionNumber;

int main(void)
{
    Student s1("George");
    s1.display();
    Student s2("Mara");
    s2.display();
    Student s3("Sorina");
    s3.display();

    return 0;
}