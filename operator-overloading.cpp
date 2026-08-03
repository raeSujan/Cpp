#include<iostream>

using namespace std;

class Number{
	
	private:
		int num;
	
	public:
		
		void input(){
			cout << "Enter number: ";
			cin >> num;
		}
		
		Number operator +(Number obj){
			Number temp;
			temp.num = num + obj.num;
			return temp;
		}
		
		void output(){
			cout << "Sum = " <<num;
		}
};


int main(){
	
	Number obj1, obj2, obj3;
	obj1.input();
	obj2.input();
	
	obj3 = obj1 + obj2;
	obj3.output();
	
	return 0;
}
