#include<iostream>
using namespace std;

class RBI
{
	protected:
		double dollarRate = 82.60;
		double roi =6.50;
	public:
		void getRate()
		{
			cout << "DOLLAR\t : " << dollarRate << endl
				 << "ROI\t : " << roi << endl;
		}
};
class SBI : public RBI
{
	private:
		double sbi_rate = roi + 0.75;
	public:
		void getSBIRoi()
		{
			cout << "SBI_ROI\t : " << sbi_rate << endl;
		}
};
class BOB : public RBI
{
	private:
		double BOB_rate = roi + 1.25;
	public:
		void getBOBRoi()
		{
			cout << "BOB_ROI\t : " << BOB_rate << endl;
		}
};
class ICIC : public RBI
{
	private:
		double ICIC_rate = roi + 1.01;
	public:
		void getICICRoi()
		{
			cout << "ICIC_ROI\t : " << ICIC_rate << endl;
		}	
};

int main()
{
	SBI s;
	
	s.getRate();
	s.getSBIRoi();
	
	BOB b;
	
	b.getRate();
	b.getBOBRoi();	
}
