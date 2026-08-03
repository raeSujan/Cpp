#include<iostream>

using namespace std;

class Test{
	
	private:
		int num;
		
	public:
		void input(){
			cout << "Enter any number: ";
			cin >> num;
		}
		
		void display(){
			cout << "Number = " << num;
		}
		
		void operator --(){
			num =  --num;
		}
};



int main(){
	
	Test obj;
	
	obj.input();
	
	cout << "\nBefore applying unary - operator: " << endl;
	obj.display();
	
	--obj;
	
	cout << "\nAfter applying unary - operator:" << endl;
	obj.display();
	
	return 0;
}
