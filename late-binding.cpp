#include<iostream>

using namespace std;

class Parent{
	
	public:
		virtual void display(){
			cout <<"This is Parent class.";
		}
};


class Child : public Parent{
	
	public:
		void display(){
			cout << "This is a Child class";
		}
};


int main(){
	
	Parent *ptr = new Child;
	
	ptr->display();
	
	delete ptr;
	
	
	return 0;
}
