#include<iostream>
using namespace std;

class hotel
{
	private:
			int id;
		    string name;
			string type;
			int rating_star;
			static string city;
			int establish_year;
			int staff_quantity;
			int room_quantity;
			
	public:
			void setdata()
		   {
		   	  cout << "Enter id: ";
		   	  cin >> id;
		   	  cout << "Enter name: ";
		   	  cin >> name;
		   	  cout << "Enter type: ";
		   	  cin >> type;
		   	  cout << "Enter rating_star: ";
		   	  cin >> rating_star;		   	 
		   	  cout << "Enter establish_year: ";
		   	  cin >> establish_year;
		   	  cout << "Enter staff_quantity: ";
		   	  cin >> staff_quantity;
		   	  cout << "Enter room_quantity: ";
		   	  cin >> room_quantity;	  
		   }
		   void getdata()
			{
				cout << "Id\t: " << id << endl
				 	<< "name\t: " << name << endl
					<< "type\t: " << type << endl
					<< "rating_star\t: " << rating_star << endl
					<< "city\t: " << city << endl
					<< "establish_year\t: " << establish_year << endl
					<< "staff_quantity\t: " << staff_quantity << endl
					<< "room_quantity\t: " << room_quantity << endl;
				
		   }
		   void getdataintable()
		   {
		   	 cout << id << "\t" << name << "\t" << type << "\t" << rating_star << "\t" << city << "\t" << establish_year << "\t" << staff_quantity << "\t" << room_quantity << "\t" << endl;
 		   }
};

string hotel :: city = "surat";

int main()
{
	int n;
	
	cout << "Enter number of hotel: ";
	cin >> n;
	
	hotel h[n];
	
	for(int i=0;i<n;i++)
	{
		h[i].setdata();
	}
	for(int i=0;i<n;i++)
	{
		h[i].getdata();
	}
	for(int i=0;i<n;i++)
	{
		h[i].getdataintable();
	}
}




