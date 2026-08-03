#include<iostream>

using namespace std;

class Frnd{
	
	private:
		int num1;
		int num2;w
		
	public:
		void input(){
			cout << "Enter two numbers: ";
			cin >> num1 >> num2;
		}
		
		friend void calculate(Frnd);
		
};

void calculate(Frnd obj){
	cout << "Sum = " << obj.num1 + obj.num2;
}

int main(){
	
	Frnd obj;
	
	obj.input();
	calculate(obj);
	
	
	return 0;
}
