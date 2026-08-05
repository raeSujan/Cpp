#include<iostream>

using namespace std;

class Parent {

public:
    int num;

    void input() {
        cout << "Enter number: ";
        cin >> num;
    }
};

class Child1 : public Parent {

public:
    void output1() {
        num = num + 10;
        cout << "Child1 Number = " << num << endl;
    }
};

class Child2 : public Parent {

public:
    void output2() {
        num = num + 20;
        cout << "Child2 Number = " << num << endl;
    }
};

int main() {

    Child1 obj;
    obj.input();
    obj.output1();

    cout << endl;

    Child2 obj1;
    obj1.input();      // Missing in your program
    obj1.output2();

    return 0;
}
