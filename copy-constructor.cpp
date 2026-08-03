#include<iostream>
using namespace std;

class Student {
    private:
        int age;

    public:
        Student(int a){
			age = a;
        }

        Student(const Student &obj) {
            age = obj.age;
        }
        
        void display(){
        	cout <<"Age = " << age;
		}
};

int main() {

    Student obj1(20);
    Student obj2(obj1);
    obj2.display();

    return 0;
}
