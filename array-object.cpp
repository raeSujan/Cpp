#include<iostream>

using namespace std;

class Test{
	
	private:
		int id;
		
	public:
		void input(){
			cout <<"Enter id : ";
			cin >> id;
		}
		
		void display(){
			cout << "ID  = " << id;
		}
		
};




int main(){
	
	Test obj[3];
	
	int i;
	
	for(i=0; i<3; i++){
		obj[i].input();
	}
		cout <<endl;
	for(i=0; i<3; i++){
		obj[i].display();
		cout <<endl;
	}
	
	
	return 0;
}
