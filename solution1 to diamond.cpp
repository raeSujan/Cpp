#include<iostream>
using namespace std;

class A
{
public:
    void display()
    {
        cout<<"This is Class A"<<endl;
    }
};

class B : public A
{
};

class C : public A
{
};

class D : public B, public C
{
};

int main()
{
    D obj;
   
    obj.C::display();

    return 0;
}
