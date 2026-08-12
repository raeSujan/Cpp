#include<iostream>
#include<string>

using namespace std;

int main(){
	
	string str = "Hello World";
	
	cout << str <<endl;
	cout<< "Lenght = " << str.length()<<endl;
	
	str.append(" !!!");
	cout << "After append\n" << str<<endl;
	
	
	cout << "First Character: " <<str[0] <<endl;
	
	cout << "Position of World: " << str.find("World") << endl;
	return 0;
}
