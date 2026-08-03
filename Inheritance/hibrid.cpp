#include<iostream>

using namespace std;

class C1{

	public:
		int num;
		void input(){
			cout << "Enter number(just to display) : " << endl;
			cin >> num;
		}
};

class C2{

	public:	
		int number;
		
		void enter(){
		cout << "Enter number ( to add): " << endl;
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

    C3 obj3;
    obj3.input();
    obj3.output1();

    cout << endl;

    C4 obj4;
    obj4.input();
    obj4.enter();
    obj4.Sum();

    return 0;
}
