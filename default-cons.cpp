#include<iostream>

using namespace std;

class PE{
	
	private:
		float m, g, h, res;
		
	public:
		PE(){
			
			g = 9.8;
			
			cout <<"Enter mass: ";
			cin >> m;
	
			cout << "Enter height: ";
			cin >> h;
	
			
			res = m * g * h;
			cout << "PE = " <<res;
		}
};



int main(){
	
	int m, h;

	
	PE obj;
	
	
	return 0;
}
