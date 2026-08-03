#include<iostream>
using namespace std;
class SI{
	private:
		int p;
		int t;
		int r;
		int z;
	public:
		void input()
		{
			cout<<"Enter p,t,r";
			cin>>p>>t>>r;
		}
		void calculate()
		{
			z=(p*t*r)/100;
		}
		void display()
		{
			cout<<"The answer is "<<z;
		}
		
};
int main()
{
	SI obj1,obj2;
	obj1.input();
	obj1.calculate();
	obj1.display();
	return 0;        
}
