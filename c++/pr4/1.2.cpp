#include<iostream>
using namespace std;

class message
{
	private:
	 		string name:
	public:
			message(){}
			message(string name)
			{
				this->name=name;
				cout << " " << name << endl;
			}
			void getdata()
			{
				cout << "name: " << name << endl;		
			}		
};
class a : public message
{
	public:
			void print(int a,int b)
			{
				cout << "Sum of" << a << "+" << b << "=" << a+b << endl;
			}
			void printf(int a,int b,int c)
			{
				cout << "sum of" << a << "+" << b << "+" << c << "=" << a+b+c << endl;
			}
};
int main()
{
	message m;
	
	m.getdata();
}
