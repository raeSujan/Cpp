#include<iostream>

using namespace std;

class Calculator{
	
	private:
		static int num1;
		static int num2;
		
	public:
		
		static void add(){
			cout <<"Sum :"<< num1 + num2 <<endl;
		}
		
		static void sub(){
			cout <<"Sub :"<<num1 - num2 <<endl;
		}
		
		static void mul(){
			cout << "Mul :"<<num1 * num2 <<endl;
		}
		
		static void div(){
			cout << "Div :"<<num1 / num2 <<endl;
		}
};

int Calculator::num1 = 50;
int Calculator::num2 = 20;

int main(){
	
	Calculator::add();
	Calculator::sub();
	Calculator::mul();
	Calculator::div();
	
	return 0;
}
