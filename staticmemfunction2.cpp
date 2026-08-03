#include <iostream>  
using namespace std; 

class Box  
{  
    private:  
    int z;
    int R;
    public:
    static int length; 
    static int breadth;  
    static int height;  
    
    public:
    
    static void print()  
    {  
        cout << "The value of the length is: " << length << endl;  
        cout << "The value of the breadth is: " << breadth << endl;  
        cout << "The value of the height is: " << height << endl;  
    }
    
   void calculate()
    {
    	R=(z+length+breadth+height)/4;
    	cout<<endl<<"Result= "<<R<<endl;
    }
    
	void inputz()
	{
		cout<<"Enter value for z: ";
		cin>>z;
	}
};  

// initialize the static data members  

int Box :: length = 10;  
int Box :: breadth = 20;  
int Box :: height = 30;  


// Driver Code
  
int main()  
{
    
    Box b;  
    b.inputz();
    b.calculate();
    cout<<"The value of length is "<<Box::length<<endl;
    cout<<"The value of length is "<<b.length;
    /*cout << "Static member function is called through Object name: \n" << endl;  
    b.print();  
    
    cout << "\nStatic member function is called through Class name: \n" << endl;  
    Box::print();  */
    
    return 0;  
}