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

class B : public virtual A
{
};

class C : public virtual A
{
};

class D : public B, public C
{
};

int main()
{
    D obj;

    obj.display();

    return 0;
}
