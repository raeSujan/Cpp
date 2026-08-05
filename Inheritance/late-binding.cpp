#include<iostream>

using namespace std;

class Parent{

public:

    virtual void display(){
        cout << "This is Parent class." << endl;
    }
};


class Child : public Parent{

public:

    void display(){
        cout << "This is Child class." << endl;
    }
};

int main(){


    Parent *ptr;

 
    ptr = new Child;

    ptr->display();

    delete ptr;

    return 0;
}