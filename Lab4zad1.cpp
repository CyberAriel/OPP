#include <iostream>

using namespace std;

class Prostokat;

class Punkt
{
    private:
string nazwa;
        float x, y;

    public:
        Punkt(string nazwa="empty", float x=0, float y=0)
        {
        	this->nazwa=nazwa;
        	 this->x=x;
        	 this->y=y;
        };
        friend void Sprawdz(Punkt& Po, Prostokat& Re);
};

class Prostokat
{
    private:
	string nazwa;
        float x, y;
        int wys, szer;

    public:
        Prostokat(string nazwa="empty", float x=0, float y=0, int wys=10, int szer=10)
        {
        	this->nazwa=nazwa;
        	 this->x=x;
        	 this->y=y;
        	    this->wys=wys;
        	    this->szer=szer;


        }
        ;
        friend void Sprawdz(Punkt& Po, Prostokat& Re);
};





void Sprawdz(Punkt& p, Prostokat& r)
{
	if (((p.x > r.x) && (p.x < r.x+r.szer)) && ((p.y > r.y) && (p.y < r.y+r.wys))) cout << "Punkt znajduje sie w Prostokacie" << endl;
    else cout << "Punkt nie znajduje się w prostokacie" << endl;

}

int main()
{
    Punkt Po("punkt", 5, 5);
    Prostokat Re("prostokat", 10,4,20,20);
    Sprawdz(Po, Re);
    return 0;
}
