#include<iostream>
using namespace std;

class A{
	int x;
	public:
		A()
		{
			cout<<"Constructor of A "<<endl;
		}
		~A()
		{
		
			cout<<"Destructor of class A "<<endl;
		}
	};
	
class B:public A{
	int y;
	public:
	B():A()
	{
		cout<<"Constructor of B"<<endl;
	}
		~B()
		{
		
			cout<<"Destructor of class B "<<endl;
		}
};
int main()
{
	B obj; 
	return 0;
}


