#include<iostream>

using namespace std;

class Input{
	
	protected:
		int num;
		
	public:
		
		void getValue(){
			cin >> num;
		}
		
		virtual int Calculate() = 0;
};


class Square : public Input{
	
	public:
		int Calculate(){
			return num * num;
		}
};

class Cube : public Input{
	
	public:
		int Calculate(){
			return num * num * num;
		}
};



int main(){
	
	Square sqr;
	Cube cube;
	
	cout << "Enter any number(to find square): ";
	sqr.getValue();
	cout <<"Square = " << sqr.Calculate();
	
	cout << endl;
	
	cout<< "Enter any number (to find cube): ";
	cube.getValue();
	cout << "Cube = " << cube.Calculate();
	
	return 0;
}
