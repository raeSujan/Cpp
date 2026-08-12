#include<iostream>

using namespace std;

class A{
	int x;
	
	public:
		A (int m){
			x = m;
			cout << "The value of A is " << x;
		}
};

class B : public A{
	int y;
	
	public:
		B(int n) : A(n){
			y = n;
			cout << "The value of B is " <<y;
		}
};




int main(){
	
	B obj(45);
	
	return 0;
}
