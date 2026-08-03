#include<iostream>
#include<string.h>

using namespace std;

class StudentDetails{
	private:
		int id;
		char name[50];
		int age;
	
	public:
		void input(){
			cout << "Enter details of students (id, name, age) respectively:- " << endl;
			cin >> id >> name >> age;
		}
		
		void display(){
			cout << "\nID = " << id <<endl;
			cout << "Name = " << name <<endl;
			cout << "Age = " << age <<endl;
		}
};


int main(){
	
	StudentDetails students[3];
	
	int i;
	
	for(i=0; i<3; i++){
		students[i].input();
	}

	for(i=0; i<3; i++){
		students[i].display();
	}

	
	return 0;
}
