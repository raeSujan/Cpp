#include<iostream>

using namespace std;

class New{
	
	private:
		static int count; // static data member
		
	public:
	
		New(){
			count++;
		}	
		
		static void display(){ // static member function
			cout << "Total count = " << count;
		}
};


int New::count=0;

int main(){
	
	New obj1;
	New obj2;
	
	New::display();
	
	return 0;
}
