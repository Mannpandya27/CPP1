#include<iostream>
using namespace std;

int main()
{
	int a;
	
	cout << "Enter age: ";
	cin >> a;
	
	try
	{
		if(a<=18)
		{
			throw 0;
		}
		else
		{
			cout << "Eligible for vote " << endl;
		}
	}
	catch (int n)
	{
		cout << "Not eligible for vote " << endl;
	}
}