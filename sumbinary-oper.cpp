#include<iostream>

using namespace std;

class Test{
	
	private:
		int num;
		
	public:
		void input(){
			cout << "Enter number: ";
			cin >> num;
		}
		
		void display(){
			cout << "Number = " << num;
		}
		
		Test operator +(Test obj){
			Test temp;
			temp.num = num + obj.num;
			return temp;
		}
};



int main(){
	
	Test obj1, obj2, obj3;
	
	cout << "Enter first number:- " << endl;
	obj1.input();
	
	cout << "Enter second number:- " << endl;
	obj2.input();
	
	obj3 = obj1 + obj2;
	
	cout <<"Result:- "<< endl;
	obj3.display();
	
	
	
	return 0;
}
