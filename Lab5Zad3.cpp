
#include <iostream>
#include <math.h>


using namespace std;

class Figura
{
public:
    virtual void obliczPole() = 0;
};

class Kolo : public Figura
{
protected:
    int R;

public:
    Kolo(int _R)
    {
        R = _R;
    }
   virtual void obliczPole()
    {
        cout << "Pole kola: " << 3.14 * pow(R, 2) << endl;
    }
};

class Kwadrat : public Figura
{
protected:
    int B;

public:
    Kwadrat(int _B)
    {

        B = _B;

    }
    virtual void obliczPole()
    {
        cout << "Pole kwadratu: " << B * B << endl;
    }
};




class Prostokat : public Figura
{
protected:
    int W, H;

public:
    Prostokat(int _W, int _H)
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
