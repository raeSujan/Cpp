#include<iostream>

using namespace std;

class Parent1{

	public:
		int age;
		void input(){
			cout << "Enter age: " << endl;
			cin >> age;
		}
};

class Parent2{

	
	public:
		char name[55];	
		void enter(){
			cout << "Enter name: " << endl;
			cin >> name;
		}
};

class Child : public Parent1, public Parent2 {
	
	public:
		
		void output(){
			cout << "Age = " << age <<endl;
			cout << "Name = " <<name;
		}
};

int main(){
	
	Child obj;
	obj.input();
	obj.enter();
	obj.output();
	
	return 0;
}