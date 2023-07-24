#include <iostream>
using namespace std;

class Distance {
private:
    int km, meter;

public:
    
    void Input()
    {
        cout << "Enter km: ";
        cin >> km;
        cout << "Enter meter: ";
        cin >> meter;
    }


    void Output()
    {
        cout << "km:" << km << "\t"
             << "meter:" << meter << endl;
    }

    Distance operator+(Distance& dist1)
    {
        Distance tem; 
        tem.meter = meter + dist1.meter;
        tem.km = km + dist1.km + (tem.meter / 1000);
        tem.meter = tem.meter % 1000;
        return tem;
    }
};

int main()
{
    Distance D1, D2, D3;

    cout << "Enter first  distance:" << endl;
    D1.Input();
    cout << endl;

    cout << "Enter second distance:" << endl;
    D2.Input();
    cout << endl;

    
    D3 = D1 + D2;

    cout << "Total Distance:" << endl;
    D3.Output();

    cout << endl;

}

