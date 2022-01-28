#include <iostream>
using namespace std;

class Punkt;
class Prostokat;
class Kolo;

class Punkt
{
protected:
    string nazwa;
    int x,y;
public:
    Punkt(string nazwa="PUNKCIK", int x=0, int y=0)
    {
        this->nazwa=nazwa;
        this->x=x;
        this->y=y;
    };

    void pokaz()
    {
        cout << "Punkt o nazwie " << nazwa << " x=" << x << " y=" << y << endl;
    }
    friend void Sprawdz(Punkt& p1, Prostokat& pr1);
    friend void Sprawdz2(Punkt& p1, Kolo& k);


};

class Prostokat :public Punkt
{
    int wys, szer;

public:
    Prostokat(string nazwa="PROSTOKAT",  int x=0, int y=0, int szer=10, int wys=10)


    {
        this->nazwa=nazwa;
        this->x=x;
        this->y=y;
        this->szer=szer;
        this->wys=wys;
    };

    void pokaz()
    {
        cout << "Prostokat o nazwie " << nazwa << endl;

        Punkt::pokaz();
        cout <<  "Szerokosc: " << szer << " wysokosc: " << wys << endl;
    }
    friend void Sprawdz(Punkt& p1, Prostokat& pr1);

};
class Kolo :public Punkt
{
	int r;
	int promien;
float pole;
float obwod;

public:
Kolo(string nazwa="Kolo 1",  int x=0, int y=0, int r=10)


{
    this->nazwa=nazwa;
    this->x=x;
    this->y=y;
    this->r=r;

};
void Pole()
{
pole=3.14*(r*r);
cout<<"Pole koła: "<<pole<<endl;
}
void Obwod()
{
obwod=2*3.14*r;
cout<<"Obwod koła: "<<obwod<<endl;
}
void pokaz(){
	promien=2*r;
	cout << "Kolo o nazwie " << nazwa << endl;

	        Punkt::pokaz();
	        cout <<  "Promień: " << promien << endl;
}
friend void Sprawdz2(Punkt& p1, Kolo& k);
};
void Sprawdz(Punkt& p, Prostokat& r)
{
	if (((p.x > r.x) && (p.x < r.x+r.szer)) && ((p.y > r.y) && (p.y < r.y+r.wys))) cout << "Punkt znajduje sie w Prostokacie" << endl;
    else cout << "Punkt nie znajduje się w prostokacie" << endl;

}
void Sprawdz2(Punkt& p, Kolo& k)
{
	if (((p.x > k.x) && (p.x < k.x+k.r)) && ((p.y > k.y) && (p.y < k.y+k.r))) cout << "Punkt znajduje sie w Kole" << endl;
    else cout << "Punkt nie znajduje się w Kole" << endl;

}





int main()
{

Punkt p1("Punkt1",10,10);
p1.pokaz();
    Prostokat pr1("Prostokat1", 9,9,20,20);
    pr1.pokaz();
    Kolo k("Kolo1",9,9,20);
    k.pokaz();
k.Pole();
k.Obwod();
Sprawdz(p1, pr1);
Sprawdz2(p1,k);
}

