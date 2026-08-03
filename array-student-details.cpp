#include<iostream>
using namespace std;

class Student {
    private:
        int id;
        char name[50];
        int age;

    public:
        void input() {
            cout << "Enter Student ID: ";
            cin >> id;

            cout << "Enter Student Name: ";
            cin >> name;

            cout << "Enter Student Age: ";
            cin >> age;
        }

        void display() {
            cout << "\nStudent ID   : " << id << endl;
            cout << "Student Name : " << name << endl;
            cout << "Student Age  : " << age << endl;
        }
};

int main() {

    Student students[3];
    int i;

    // Input student details
    cout << "Enter details of 3 students:\n";

    for(i = 0; i < 3; i++) {
        cout << "\nStudent " << i + 1 << endl;
        students[i].input();
    }

    // Display student details
    cout << "\n\n--- Student Details ---\n";

    for(i = 0; i < 3; i++) {
        cout << "\nStudent " << i + 1 << endl;
        students[i].display();
    }

    return 0;
}
