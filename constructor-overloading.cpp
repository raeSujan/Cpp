#include<iostream>
using namespace std;

class Student {
    private:
        int age;

    public:
        Student() {
            age = 0;
        }

        Student(int a) {
            age = a;
        }

        Student(int a, int b) {
            age = a + b;
        }

        void display() {
            cout << "Age = " << age << endl;
        }
};

int main() {
    Student obj1;
    Student obj2(20);
    Student obj3(20, 10);

    obj1.display();
    obj2.display();
    obj3.display();

    return 0;
}
