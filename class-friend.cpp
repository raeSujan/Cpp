#include<iostream>

using namespace std;

class A{
	private:
		int num;
		
	public:
		void input(){
			cout<< "Enter number: ";
			cin >> num;
		}
		friend class B;
};

class B{
	public:
		void display(A obj){
			cout << "Number: " << obj.num;
		}
		
};



int main(){
	
	A obj1;
	B obj2;
	obj1.input();
	obj2.display(obj1);
	
	return 0;
}

