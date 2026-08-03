#include<iostream>

using namespace std;

class Parent{
	public:
		
		void display(){
			cout << "This is a function of a Parent Class " << endl;
		}
};

class Child : public Parent {
	
	public:
		
		void output(){
			cout << "This is a funcion of a Child Class";
		}
};

int main(){
	
	Child obj;
	obj.display();
	obj.output();
	
	return 0;
}