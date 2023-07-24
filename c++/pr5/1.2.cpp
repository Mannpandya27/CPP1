#include<iostream>
using namespace std;

class king
{
	private:
			int a,b;
	public:
			void setdata()
			{
				cout << "Enter a and b: ";
				cin >> a >> b;
			}
			void getdata()
			{
				try 
				{
					if(b==0)
					{
						throw  b;
					}
					else 
					{
						cout << "Division: " << a/b << endl;
					}
				}
				catch(int n)
				{
					cout << "Can't devide by" << n << endl;
				}
			}
};
int main()
{
	king k;
	
	k.setdata();
	k.getdata();
}
