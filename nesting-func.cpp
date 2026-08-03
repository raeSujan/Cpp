#include<iostream>

using namespace std;

class Test{
	
	private:
		int num1;
		int num2;
		int sum;
		
	public:
		void input(){
			cout <<"Enter two numbers: ";
			cin >> num1 >> num2;
		}
		
		void calculate(){
			sum = num1 + num2;
			cout << "Sum  = " << sum;
		}
		
		void display(){
			calculate();
		}
};




int main(){
	
	Test obj;
	obj.input();
	obj.display();
	
	
	return 0;
}
