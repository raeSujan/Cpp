#include<iostream>

using namespace std;

class C1{

	public:
		int num;
		void input(){
			cout << "Enter number: " << endl;
			cin >> num;
		}
};

class C2{

	public:	
		int number;
		
		void enter(){
		cout << "Enter number: " << endl;
			cin >> number;;
		}
};

class C3 : public C1{
	
	public:
		
	void output1(){
		cout << "Number = " << num <<endl;
		}
};

class C4 : public C1, public C2{
	public :
		int sum;
		
		void Sum (){
			sum = num + number;
			cout << "Sum = " << sum;
		}
};


int main(){
	
	C1 obj;
	obj.input();
	 
	C2 obj1;
	obj1.enter();
	
	C3 obj3;
	obj3.output1();
	
	C4 obj4;
	obj4.Sum();
	
	return 0;
}