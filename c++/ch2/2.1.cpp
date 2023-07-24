#include<iostream>
using namespace std;

class employee
{
	private:
			int id;
			string name;
			string email;
			int salary;
			string role;
			int age;
			string city;
			int experience;
	public:
			void input()
			{
				cout << "Enter id\t: ";
				cin >> id;
				cout << "Enter name\t: ";
				cin >> name;
				cout << "Enter email\t: ";
				cin >> email;
				cout << "Enter salary\t: ";
				cin >> salary;
				cout << "Enter role\t: ";
				cin >> role;
				cout << "Enter age\t: ";
				cin >> age;
				cout << "Enter city\t: ";
				cin >> city;
				cout << "Enter experience\t: ";
				cin >> experience;
			}	
			void output()
			{
				cout << "id: \t" << id << endl;
				cout << "name: \t" << name << endl;
				cout << "email: \t" << email << endl;
				cout << "salary: \t" << salary << endl;
				cout << "role: \t" << role << endl;
				cout << "age: \t" << age << endl;
				cout << "city: \t " << city << endl;
				cout << "experience: \t" << experience << endl;
				
			}
};

			

int main()
{
	employee e1;
	
	e1.input();
	e1.output();
}
