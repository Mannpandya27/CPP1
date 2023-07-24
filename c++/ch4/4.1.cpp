#include<iostream>
using namespace std;

class x
{
	protected:
			int a,b,c,sum=0;	
};
class Y : protected x
{
	public:
			void setdata()
			
			{
			cout << "Enter a: ";
			cin >> a;
			cout << "Enter b: ";
			cin >> b;
			cout << "Enter c: ";
			cin >> c;
			}
			
			void getdata()
			
			{
				sum = (a*a*a)+(b*b*b)+(c*c*c);
				cout << "sum: " << sum;
			}		
};
int main()
{
	Y y1;
	
	y1.setdata();
	y1.getdata();
	
	
	
	
}
