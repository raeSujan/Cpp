#include<iostream>

using namespace std;

class Rectangle{
	
	private:
		int l;
		int b;
		int area;
		
	public:
	
		Rectangle(int l, int b){
			area = l * b;
		}
		
		void display(){
			cout << "Area = " << area;
		}
		
		
};

int main(){
	
	int length, breadth;
	
	cout << "Enter length: ";
	cin >> length;
	cout << "Enter breadth: ";
	cin >> breadth;
	
	Rectangle obj(length, breadth);
	obj.display();
	
	
	return 0;
}
