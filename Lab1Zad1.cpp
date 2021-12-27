

#include <iostream>
#include <cstdlib>
using namespace std;
int punkty=0;
class lego
{

	string gatunek,imie,obrona,atak,szybkosc;

public:
	void dodajpostac(string a, string b, string c, string d, string e)
	{
		imie=a;
		gatunek=b;
		atak=c;
		obrona=d;
		szybkosc=e;
	}
	void pokarzdane()
	{
		cout << "Imię: " << imie << endl;
		cout << "Gatunek: " << gatunek << endl;
		cout << "Atak: " << atak << endl;
		cout << "Obrona: " << obrona << endl;
		cout << "Szybkośc " << szybkosc << endl;
	}
};
class bron
{

	string gatunek,imie,obrona,atak,szybkosc;

public:
	void dodajbron(string a, string b, string c, string d, string e)
	{
		imie=a;
		gatunek=b;
		atak=c;
		obrona=d;
		szybkosc=e;
	}
	void pokarzdane()
	{
		cout << "Imię: " << imie << endl;
		cout << "Gatunek: " << gatunek << endl;
		cout << "Atak: " << atak << endl;
		cout << "Obrona: " << obrona << endl;
		cout << "Szybkośc " << szybkosc << endl;
	}
};
int main() {

	int liczba = std::rand();
int wybor;
	lego postac1,p2;
bron bron1,b2;


	postac1.dodajpostac("Sensei Wu","Kreacja","100","200","20");

	p2.dodajpostac("Cole","Ziemia","100","200","20");

bron1.dodajbron("miecz","abc","50","60","10");

b2.dodajbron("ogien","abc","200","20","10");


cout << "Witaj w grze"<< endl;
cout << "Wybierz swoją postac "<< endl;
postac1.pokarzdane();
p2.pokarzdane();
cin >> wybor;

if (wybor==1)
{
	cout <<"wybrałeś: WU" << endl;

}else
{
	cout <<"wybrałeś: Cole" << endl;
}




	return 0;
}

