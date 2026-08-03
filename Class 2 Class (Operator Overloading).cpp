#include<iostream>
using namespace std;
class Inventory1
{
    int ino, qty;
    float rate;

public:
    Inventory1(int n, int q, float r)
    {
        ino = n;
        qty = q;
        rate = r;
    }

    int getIno()
    {
        return ino;
    }

    float getAmount()
    {
        return qty * rate;
    }

    void display()
    {
        cout << "Item No: " << ino
             << "  Qty: " << qty
             << "  Rate: " << rate << endl;
    }
};

class Inventory2
{
    int ino;
    float amount;

public:
    void operator=(Inventory1 I)
    {
        ino = I.getIno();
        amount = I.getAmount();
    }

    void display()
    {
        cout << "Item No: " << ino
             << "  Amount: " << amount << endl;
    }
};

int main()
{


    Inventory1 I1(1001, 30, 75);
    Inventory2 I2;

    I2 = I1;      // Class to Class Conversion

    I1.display();
    I2.display();

    return 0;
}