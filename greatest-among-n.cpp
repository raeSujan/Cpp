#include<iostream>

using namespace std;

int main(){
	
	int n;
	int i;
	
	cout << "Enter any number: ";
	cin >> n;
	
	int *arr;
	
	arr = new int(n);
	int temp;
	
	cout << "Enter elements:- " << endl;
	for(i=0; i<n; i++){
		cin >> arr[i];
	}
	
	for(i=0; i<n; i++){
		for(int j=i+1; j<n; j++){
			if(arr[i] > arr[j]){
			temp = arr[i];
			arr[i] = arr[j];
			arr[j] = temp;	
			}
		}
	}
	
	for(i=0; i<n; i++){
		cout << " " << arr[i];
	}
	
	delete[] arr;
	
	return 0;
}
