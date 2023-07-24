#include<iostream>
using namespace std;

class dis
{
	
		    
	public:
		    int feet1;
		    int feet2;
		    int inch1;
		    int inch2;
		    
		   void input1()
		   {
		   	  cout << "enter feet1: ";
		   	  cin >> feet1;  
		   	  
		   	  cout << "Enter inch1: ";
		      cin >> inch1;
		   }
		   void input2()
		   {
		   	  cout << "Enter feet2: ";
		   	  cin >> feet2;
		   	  
		   	  cout << "Enter inch2: ";
		   	  cin >> inch2;
		   }
		   void output1()
		   {
		   	  cout << "feet1 \n" << endl;
		   	  
		   	  cout << "inch1 \n" << endl;
		   }
		   void output2()
		   {
		   	  cout << "feet2 \n" << endl;
		   	  
		   	  cout << "inch2 \n" << endl;
		   }
		   
};
int main()
{
	dis a;
	a.input1();
	a.input2();
	a.output1();
	a.output2();
	
	
	
}
