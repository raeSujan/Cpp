#include <iostream>


using namespace std;

class Student
{
protected:
    int roll;

public:
    Student(int r)
    {
        roll = r;
        cout<<"Try";
    }
};

class Result : public Student
{
    int marks;

public:
    Result(int r, int m) : Student(r)
    {
        marks = m;
        cout<<"Again";
    }

    void display()
    {
        cout << "Roll No: " << roll << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main()
{
    Result r(101, 85);

    r.display();

    return 0;
}
