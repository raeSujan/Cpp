#include <iostream.h>
using namespace std;
class Time
{
    int hrs, min;
	public:
    void operator=(int t)
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
    Time t;
    int duration;
    cout << "Enter time in minutes: ";
    cin >> duration;
    t = duration;          	
	// Basic Type to Class Type Conversion
    // Equivalent explicit call:
    // t.operator=(duration);
    t.display();
    getch();
    return 0;
}