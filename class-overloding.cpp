#include<iostream>

using namespace std;

class Temperature{
	
	private:
		float cel;
		float fer = 32;
		
	public:
		
		Temperature(){
			fer = (cel * (9/5)) + 32;
			cout <<"Default Temperature" << endl;
			cout << cel << " Celsius "  << "= "<< fer << " Fahrenheit " << endl;
		}
		
		Temperature(float c){
			cel = c;
			fer = (cel * (9/5)) + 32;
			cout << cel << "  Celsius is " << fer <<" Fahrenheit " << endl;
		}
		
		Temperature(float c, float f){
			cel = c;
			fer = f;
			fer = (cel * 1.8) + 32;
			cout << cel << "  Celsius is " << fer <<" Fahrenheit " << endl;
		}
		
		
};

int main(){
	
	float cel, fer;
	
	
	cout << "Enter celsius to convert: ";
	cin >> cel;
	
		
	Temperature t1;
	Temperature t2(25);
	Temperature t3(25, 77);
	return 0;
}



