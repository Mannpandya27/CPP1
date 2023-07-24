#include<iostream>
using namespace std;

class cafe
{
	private:
	    int id;
	     string name;
	    int staff_quantity;
	    int revenue;
	    int import_raw_diamonds;
	    int export_diamonds;
	    string ceo_name;
	public:
		Diamond( int id,string name,int staff_quantity,int revenue,int import_raw_diamonds,int export_diamonds,string ceo_name)
		{
			cout << "Id:\t\t\t" << id << "\n" << "name:\t\t\t" << name << "\n" << "staff_quantity:  \t" << staff_quantity << "\n" << "revenue:  \t\t" << revenue << "\n" << "import_raw_diamonds:\t" << import_raw_diamonds << "\n" << " export_diamonds:\t" <<  export_diamonds << "\n" << " ceo_name:\t\t" <<  ceo_name << "\n" << endl; 
		}
	  
		     
};

int main()
{
	Diamond d1(101,"srk",200,10000000,5000000,6000000,"govinbhai\n----------------------------------------------");
	Diamond d2(102,"hk",200,10000000,5000000,6000000,"savjibhai\n----------------------------------------------");
	Diamond d3(103,"radhe_shyam",200,10000000,5000000,6000000,"bharatbhai\n----------------------------------------------");
	Diamond d4(104,"kgk",200,10000000,5000000,6000000,"vandanbhai\n----------------------------------------------");
	Diamond d5(105,"shree_krishna",200,10000000,5000000,6000000,"kalubhai\n----------------------------------------------");

	
}
