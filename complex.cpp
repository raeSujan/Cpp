#include<iostream>

using namespace std;

class Test{
	
	private:
		int real;
        int imaginary;

	public:
		
		void input(){
			cout <<"Enter real part: ";
			cin >> real;
			
			cout << "Enter imaginary part: ";
			cin >> imaginary;
		}
		
		void display(){
			cout << real << " + " << imaginary <<"i" << endl; 
		}
		
		Test operator + (Test obj){
			Test temp;
			temp.real = real + obj.real;
			temp.imaginary = imaginary + obj.imaginary;
			
			return temp;
		}
	
};



int main(){
	
	Test obj1, obj2, obj3;
	
	cout << "Enter first complex number:- " << endl ;
	obj1.input();
	
	cout << endl;
	cout << "Enter second complex number:- " << endl ;
	obj2.input();
	
	obj3 = obj1 + obj2;
	
	cout << endl;
	cout << "First complex number:- "<< endl;
	obj1.display();

	cout << endl;	
	cout << "Second complex number:- "<< endl;
	obj2.display();
	
	cout << endl;
	cout << "Sum of complex number:- "<< endl;
	obj3.display();
	return 0;
}
