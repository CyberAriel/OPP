#include <iostream>
using namespace std;

class Punkt
{
    int x;
    int y;

public:
   Punkt()
    {
        x=10;
        y=20;
        cout << "KONSTRUKTOR: POCZATEK!" << endl;
    }
    ~Punkt()
    {
        cout << "DESTRUKTOR: KONIEC!" << endl;
    }
    void pokaz()
    {
        cout << "Wspolrzedne: " << x << " i " << y << endl;
    };
    void ustal(int _x, int _y)
    {
        x=_x;
        y=_y;
    };
};

int main()
{
    int z=10;

    cout << "Początek programu" << endl;
    if (z==10)
    {
        Punkt k;
        k.pokaz();
    }
    cout << "Koniec programu" << endl;

    {
       Punkt k;

        k.pokaz();
    }

    return 0;
}
