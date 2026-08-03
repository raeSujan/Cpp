#include<iostream>
using namespace std;

class Time
{
    int hrs, min;

public:
    Time(int h, int m)
    {
        hrs = h;
        min = m;
    }

    operator int()      // Class to Basic Type Conversion
    {
        return hrs * 60 + min;
    }
};

int main()
{

    int h, m, total;

    cout << "Enter Hours: ";
    cin >> h;

    cout << "Enter Minutes: ";
    cin >> m;

    Time t(h, m);

    total = t;          // Implicit conversion
    cout << "Total Minutes = " << total << endl;

    // Equivalent explicit call
    total = t.operator int();
    cout << "Total Minutes = " << total;

return 0;
}
