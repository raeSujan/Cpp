#include<iostream>
using namespace std;

enum TrafficLight{
	RED,
	YELLOW,
	GREEN
};

int main(){
	
	TrafficLight signal = YELLOW;
	if(signal == 0){
		cout << "Stop";
	}
	else if (signal == 1){
		cout << "Wait";
	}
	
	else{
		cout << "Drive";
	}
	
	return 0;
}
