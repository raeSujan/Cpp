#include<iostream>

using namespace std;

class SI{
	private:
		float p, r, t, si;
		
	public:
		void input(){
			cout <<"Enter principle, rate and time respectively: ";
			cin >> p >> t >> r;
		}
	
	friend float calculate(SI);
	friend void display(float);
	
};

float calculate(SI obj){
	float si;
	
	si = (obj.p * obj.t * obj.r) / 100;
	return si;
	
	}

void display(float si){

    cout << "Simple Interest = " << si;
}

int main(){
	
	float result;
	
	SI obj1;
	obj1.input();
	result = calculate(obj1);
	
	display(result);	
	
	return 0;
}
