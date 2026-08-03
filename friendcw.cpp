#include<iostream>
using namespace std;

class Number{
	private:
		int num;
	public:
		void input()
		{
			cout<<"Enter num:";
			cin>>num;
		}
		friend void findsum(Number obj1,Number obj2);

	};
	void findsum(Number obj1,Number obj2)
	{
	//	int R;
	//	R=
		cout<<"The total result is "<<obj1.num+obj2.num;
	}
	int main()
	{
		Number a,b;
		a.input();
		b.input();
		findsum(a,b);
		return 0;
	}
		
		
		
		
