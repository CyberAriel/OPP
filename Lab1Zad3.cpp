



#include <iostream>
#include <cstdlib>
using namespace std;

class Lego
{

	private: string gatunek,imie,obrona,atak,szybkosc;

public:
	void DodajPostac(string a, string b, string c, string d, string e)
	{
		imie=a;
		gatunek=b;
		atak=c;
		obrona=d;
		szybkosc=e;
	}
	void PokarzDane()
	{
		cout << "Imię: " << imie << endl;
		cout << "Gatunek: " << gatunek << endl;
		cout << "Atak: " << atak << endl;
		cout << "Obrona: " << obrona << endl;
		cout << "Szybkośc " << szybkosc << endl;
	}
	void WczytajDane()
	{
		cout << "Wpisz Imię: "<< endl;
		cin >> imie;
		cout << "wpisz Gatunek: "<< endl;
		cin >> gatunek;
		cout << "Wpisz Atak: "<< endl;
		cin >> atak;
		cout << "Wpisz Obrona: "<< endl;
		cin >> obrona;
		cout << "Wpisz Szybkośc "<< endl;
		cin >> szybkosc;
	}
};

int main() {


	Lego p1,p2,p3;



	p1.DodajPostac("Sensei Wu","Kreacja","100","200","20");

	p2.DodajPostac("Cole","Ziemia","100","200","20");

	p1.PokarzDane();
	p2.PokarzDane();
	p3.WczytajDane();
	p3.PokarzDane();



	return 0;
}
