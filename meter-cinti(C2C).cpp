#include<iostream>

using namespace std;

class Meter{
	
	int m;
	
	public:
		
		void input(){
			cout << "Enter meter( to convert to centimeter): ";
			cin >> m;
		}
		
		int getMeter(){
			return m;
		}
};

class Centimeter{
	
	int cm;
	
	public:
		
		Centimeter (Meter obj){
			cm = obj.getMeter() * 100;
		}
		
		void display(){
			cout << "Centimeter : " << cm;
		}
};



int main(){
	
	Meter m;
	m.input();
	
	Centimeter cm = m;
	cm.display();
	
	return 0;
}
