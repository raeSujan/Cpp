#include<iostream>
#include<string>

using namespace std;

class Employee{
	string name;
	int id;
	int salary;
	string location;
	int i;
	
	public:
		
		
		void input(){
			cout << "\nEnter name: ";
			getline(cin, name);
			
			cout << "Enter id: ";
			cin >> id;
			
			cout << "Enter salary: ";
			cin >> salary;
			
			cin.ignore();
			
			cout << "Enter location: ";
			getline(cin, location);
		}
		
			
		void display(){
			cout<<endl<<endl;
			cout << "Name = " << name<<endl;
			cout << "ID = " << id<<endl;
			cout << "Salary = "<<salary<<endl;
			cout << "Location = " << location<<endl;
		}
		
		void greatest_salary(Employee obj[], int n){
			int max = 0;
	
			for (i=1; i<n; i++){
				if (obj[i].salary > obj[max].salary){
					max = i;
				}
			}
			
			cout << "\n\nDetails of a highest salary employee:- "<< endl;
			cout << "Name = " << obj[max].name<<endl;
			cout << "ID = " << obj[max].id<<endl;
			cout << "Salary = "<<obj[max].salary<<endl;
			cout << "Location = " << obj[max].location<<endl<<endl;
			
		}
};


int main(){
	
	
	int num;
	
	cout << "Enter numbers of Employee: ";
	cin >> num;
	
	Employee obj[100];
	
	cin.ignore();
	
	int i = 0;
	
	cout<<endl;
	cout << "Enter employee details:-" << endl<<endl;
	for(i=0; i<num; i++){
		obj[i].input();
	}
	
	cout << "Employee Details:- "<< endl<<endl;
	for(i=0; i<num; i++){
		obj[i].display();
	}
	
	obj[0].greatest_salary(obj, num);
	
	
	return 0;
}
