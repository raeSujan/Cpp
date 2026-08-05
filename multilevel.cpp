#include<iostream>

using namespace std;

class Parent{

	public:
		int num, sqr;
		void input(){
			cout << "Enter number: " << endl;
			cin >> num;
		}
};

class Child1 : public Parent{
	
	public:
		
		void calculate(){
			sqr = num* num;
		}
};

class Child2 : public Child1 {
	
	public:
		
		void output(){
			cout << "Square = " << sqr;
		}
};

int main(){
	
	Child2 obj;
	obj.input();
	obj.calculate();
	obj.output();
	
	return 0;
}