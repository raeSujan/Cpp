// C++ program to demonstrate the working of friend function

#include <iostream>
using namespace std;

class Employee {
  private:
    int salary;

  public:
   void input() {
      cout<<"Enter salary: ";
      cin>>salary;
    }

    // Declare friend function
    friend void displaySalary(Employee emp);
};

void displaySalary(Employee emp) {
  cout << "Salary: " << emp.salary;
}

int main() {
  Employee myEmp;
  myEmp.input();
  displaySalary(myEmp);
  return 0;
}