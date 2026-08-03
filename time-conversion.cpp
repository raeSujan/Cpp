#include<iostream>

using namespace std;

class Test{
	
	private:
		int hour;
        int minute;
        int second;

	public:
		
		void input(){
			cout <<"Enter hour: ";
			cin >> hour;
			
			cout << "Enter minute: ";
			cin >> minute;
			
			cout << "Enter second: ";
			cin >> second;
		}
		
		void display(){
			cout << hour << " " << minute  << " " << second << endl; 
		}
		
		
		Test operator +(Test obj){
			
			Test temp;
			
			temp.second = second + obj.second;
			temp.minute = minute + obj.minute;
			temp.hour = hour + obj.hour;
			
			if (temp.second >= 60) {
                temp.minute += temp.second / 60;
                temp.second = temp.second % 60;
            }
            
            if (temp.minute >= 60) {
                temp.hour += temp.minute / 60;
                temp.minute = temp.minute % 60;
            }

			return temp;
		}
	
};



int main(){
	
	Test obj1, obj2, obj3;
	
	cout << "Enter hour, minute and second(respectively):- " << endl ;
	obj1.input();
	
	cout << endl;
	cout << "Enter hour, minute and second(respectively):-  " << endl ;
	obj2.input();
	
	obj3 = obj1 + obj2;
	
	cout << endl;
	cout << "First Time:- "<< endl;
	obj1.display();

	cout << endl;	
	cout << "Second Time:- "<< endl;
	obj2.display();
	
	cout << endl;
	cout << "Sum of Times is:- "<< endl;
	obj3.display();
	
	return 0;
}
