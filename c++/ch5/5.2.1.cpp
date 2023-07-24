#include<iostream>
using namespace std;

class number 
{
	private:
		 double a;
		
		 
	public:
		void setdata()
		{
			cout << "Enter a: ";
			cin >> a;
		}
		
		
		number operator<(number A)
		{
			number tmp;
			
			if(a<A.a)
			{
				cout << "Second is big: ";
			}
			else if(a==A.a)
			{
				cout << "Both are same: ";
			}
			else
			{
				cout << "First is big: ";
			}
			return tmp;
		}
		
		void getdata()
		{
			
		}
};
int main()
{
	number n1,n2,n3;
	
	n1.setdata();
	n2.setdata();
	
	n3 = n1 < n2;
	
	n1.getdata();
	n2.getdata();
	n3.getdata();
	
	
}
