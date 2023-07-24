#include<iostream>
using namespace std;

class cricket
{
	public:
			void getover()
			{
				cout << "match total over " << endl;				
			}	
};
class T20match : public cricket
{
	public:
			void T20Matchover()
			{
				cout << "T20 match total over is 20 over " << endl << endl;
			}
};
class Testmatch : public T20match
{
	public:
			void Testmatchover()
			{
				cout << "T20Match total over is 90 over " << endl;
			}
};

int main()
{
	T20match t;
	
	t.getover();
	t.T20Matchover();
	
	Testmatch a;
	
	a.getover();
	a.Testmatchover();

	
}

