#include <iostream>
using namespace std;
class Time
{
    int hrs, min;

public:
    Time(int t)      
    {
        hrs = t / 60;
        min = t % 60;
    }

    void display()
    {
        cout << "Hours: " << hrs << endl;
        cout << "Minutes: " << min << endl;
    }
};

int main()
{
    int duration;

    cout << "Enter time in minutes: ";
    cin >> duration;

    Time t = duration;      // Basic Type to Class Type Conversion
    // or Time t(duration);

    t.display();

    return 0;
}
