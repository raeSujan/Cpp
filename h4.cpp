#include<iostream>

using namespace std;

class Parent{

	public:
		int num;
		void input(){
			cout << "Enter number: " << endl;
			cin >> num;
		}
};

class Child1 : public Parent{

	public:	
		void output1(){
			num = num + 10;
			cout << "Number = " << num << endl;
		}
};

class Child2 : public Parent{
	
	public:
		
	void output2(){
		num = num + 20;
		cout << "Number = " << num;
		}
};

int main(){
	
	Child1 obj;
	obj.input();
	obj.output1();
	
	Child2 obj1;
	obj1.output2();
	
	return 0;
}