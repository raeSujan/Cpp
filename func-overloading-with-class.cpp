#include<iostream>

using namespace std;


class Sum{
	private:
		
		int num1, num2, num3;
		int res1, res2;
		
	public:
		
		int input(){
			
			cout << "Enter num1: ";
			cin>> num1;
			cout << endl;
			
			cout << "Enter num2: ";
			cin>> num2;
			cout << endl;
			
			cout << "Enter num3: ";
			cin>> num3;
			cout << endl;
		}
		
		int display(){
			cout << "Num1 = " << num1 << endl;
			cout << "Num2 = " << num2 << endl;
			cout << "Num3 = " << num3 << endl;
		}
		
		void calculate(){
			
			res1 = add(num1, num2);
			res2 = add(num1, num2, num3);
	
			cout <<endl<< endl;
			cout << "Sum (num1 + num2) = " << res1 << endl;
			cout << "Sum (num1 + num2 + num3) = "<<res2;
		}
		
		int add(int num1, int num2){
			return num1 + num2;
		}
		
		int add(int num1, int num2, int num3){
			return num1 + num2 + num3;
		}
};


int main(){
	
	Sum obj;
	
	obj.input();
	obj.display();
	obj.calculate();
	
	
	return 0;
}
