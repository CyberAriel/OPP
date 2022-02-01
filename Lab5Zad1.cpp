
#include <iostream>
#include <math.h>


using namespace std;

class Figura
{
protected:
    void obliczPole()
    {
        cout << "Pole " << endl;
    }
};

class Kolo : protected Figura
{
protected:
    int R;

public:
    Kolo(int _R)
    {
        R = _R;
    }
    void obliczPole()
    {
        cout << "Pole kola: " << 3.14 * pow(R, 2) << endl;
    }
};

class Kwadrat : protected Figura
{
protected:
    int W, H;

public:
    Kwadrat(int _W, int _H)
    {

        W = _W;
        H = _H;
    }
    void obliczPole()
    {
        cout << "Pole kwadratu: " << H * W << endl;
    }
};



int main()
{
    Kolo* Ok1,Ok2(10);

    Ok1 = &Ok2;
    Ok1->obliczPole();

    Kwadrat* Okw1, Okw2(10,10);

    Okw1 = &Okw2;
    Okw1->obliczPole();




    return 0;
}
