#include<iostream>
using namespace std;

class Calculate 
{
	public:
		void sum(int a,int b)
		{
			cout << " division of: " << a << "/" << b << "=" << a/b << endl; 
		}
		void sum(int a,int b,int c)
		{
			cout << " subtraction of: " << a << "-" << b << "=" << a-b << endl; 
		}
		void sum(int a,int b,int c,int d)
		{
			cout << " multiplication of: " << a << "*" << b << "=" << a*b << endl; 
		}
		void sum(int a,int b,int c,int d,int e)
		{
			cout << " addition of: " << a << "+" << b << "=" << a+b << endl; 
		}		
};

int main()
{
	Calculate c;
	
	c.sum(5,4,3,2,1);
}
