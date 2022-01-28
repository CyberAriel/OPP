#include <iostream>
using namespace std;

class Samobojca
{
    int numer;
public:
    int podajNumer()
    {
        return numer;
    };

    void ustalNumer(int nr)
    {
        numer=nr;
    };

    void zabijSie()
    {
        cout << "Zabijam sie!" << endl;
        delete this;
    };
};

int main()
{
    Samobojca sstat, *sdyn;

    cout << "OOP - Samobojca" << endl;
    sstat.ustalNumer(100);
    cout << "Numer sstat: " << sstat.podajNumer() << endl;

    sdyn = new Samobojca;
    sdyn->ustalNumer(200);
    cout << "Numer sdyn: " << sdyn->podajNumer() << endl;

    sstat.zabijSie();
    cout << "Numer sstat: " << sstat.podajNumer() << endl;

    sdyn->zabijSie();
    cout << "Numer sdyn: " << sdyn->podajNumer() << endl;

    delete sdyn;
    cout << "Numer sdyn: " << sdyn->podajNumer() << endl;

    return 0;
}
