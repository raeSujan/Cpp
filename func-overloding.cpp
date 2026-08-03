// Function OverLoding

#include<iostream>

using namespace std;

int max(int num1, int num2){
	if(num1 > num2){
		return num1;
	}
	else{
		return num2;
	}
}

int max(int num1, int num2, int num3){
	if(num1 > num2 && num1 > num3){
		return num1;
	}
	else if(num2 > num1 && num2 > num3){
		return num2;
	}
	else{
		return num3;
	}
}

int main(){
	
	int n1, n2, n3;
	
	cout << "Enter n1: ";
	cin >> n1;
	
	cout << "Enter n1: ";
	cin >> n2;
	
	cout << "Enter n1: ";
	cin >> n3;
	
	cout << "n1 = " << n1 <<endl;
	cout << "n2 = " << n2 <<endl;
	cout << "n3 = " << n3 <<endl;
	cout << endl;
	
	cout << "Largest between (n1 & n2): ";
	cout << max(n1, n2) << endl;
	
	cout << "Largest between (n1, n2 & n3): ";
	cout << max(n1, n2, n3) << endl;
	
	return 0;
}
