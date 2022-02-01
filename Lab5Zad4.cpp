
#include <iostream>
#include <math.h>


using namespace std;
class Punkt
{
protected:
    int x, y;
public:
    Punkt(int x, int y)
    {
        this->x = x;
        this->y = y;
        cout << "Konstruktor Punkt" << endl;
    }
    ~Punkt()
    {
        cout << "Destruktor Punkt" << endl;
    }
    void Ustal(int _x, int _y)
    {
        x = _x;
        y = _y;
    }
    void Czytaj(int& _x, int& _y)
    {
        _x = x;
        _y = y;
    }
};

class Figura
{
public:
    virtual void obliczPole() = 0;
    Figura()
    {
        cout << "Konstruktor Figura" << endl;
    }
    ~Figura()
    {
        cout << "Destruktor figura" << endl;
    }
};

class Kolo : public Figura, public Punkt
{
protected:
    int R;

public:
    Kolo(int _R = 0, int _x = 0, int _y = 0):Punkt(_x,_y)
    {
        R = _R;
    }
   virtual void obliczPole()
    {
        cout << "Pole kola: " << 3.14 * pow(R, 2) << endl;
    }
};

class Kwadrat : public Figura, public Punkt
{
protected:
    int B;

public:
    Kwadrat(int _B = 0, int _x = 0, int _y = 0):Punkt(_x,_y)
    {

        B = _B;

    }
    virtual void obliczPole()
    {
        cout << "Pole kwadratu: " << B * B << endl;
    }
};




class Prostokat : public Figura, public Punkt
{
protected:
    int W, H;

public:
    Prostokat(int _W = 0, int _H = 0, int _x = 0, int _y = 0) :Punkt(_x, _y)
    {

        W = _W;
        H = _H;
    }
    virtual void obliczPole()
    {
        cout << "Pole prostokata: " << H * W << endl;
    }
};

void Licz(Figura* figura)
{
    figura->obliczPole();
}

int main()
{
	Kolo C(10);
	    Kwadrat S(5);
	    Prostokat P(10,20);
	    Figura* Sh;

	    Sh = &C;
	    Licz(Sh);
	    Sh = &S;
	    Licz(Sh);
	    Sh = &P;
	    Licz(Sh);




    return 0;
}
