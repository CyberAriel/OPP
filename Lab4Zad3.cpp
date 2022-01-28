#include <iostream>
using namespace std;

class Punkt
{
    int x,y;
public:
    Punkt(int _x=0, int _y=0)
    {
        pobierz(_x, _y);
    }
    void pobierz(int _x, int _y)
    {
        x=_x;
        y=_y;
    }
    void pokaz()
    {
        cout << "Punkt: "<< "("<< x <<","<< y <<")" << endl;
    }
};

class Prostokat :public Punkt
{
protected:
    int szer, wys;
    string nazwa;
public:
    Prostokat(int _x, int _y, int _sz, int _wys, string _nazwa="_prost_")
    {
        pobierz(_x,_y,_sz,_wys,_nazwa);
    };
    void pobierz(int _x, int _y, int _szer, int _wys, string _nazwa)

    {

        Punkt::pobierz(_x,_y);
        szer=_szer;
        wys=_wys;
        nazwa=_nazwa;
    }
    void pokaz()
    {
        cout << "Prostokat o nazwie: " << nazwa << endl;
        cout << "Lewy, dolny punkt:" << endl;
        Punkt::pokaz();
        cout << "szerokosc: " << szer << " wys: " << wys << endl;
    }
};

int main()
{
    cout << "OOP - proste dziedziczenie" << endl;

    Prostokat pros(10,10,300,300);
    pros.pokaz();

    return 0;
}
