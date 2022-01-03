



#include <iostream>
#include <cstdlib>
using namespace std;

class lego
{
private:
	string gatunek,imie;
	int obrona,atak,szybkosc;


public:
	void DodajPostac(string a, string b, int c, int d, int e)
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

	void Wypisz( string & a, string & b, int & c, int & d, int & e )
		{
b=imie;
a=gatunek;
d=atak;
c=obrona;
e=szybkosc;
		}


};
class lego2
{
private:
	string gatunek,imie;
	int obrona,atak,szybkosc;


public:
	void DodajPostac(string a, string b, int c, int d, int e)
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

	void Wypisz( string & a, string & b, int & c, int & d, int & e )
		{
b=imie;
a=gatunek;
d=atak;
c=obrona;
e=szybkosc;
		}


};
class lego3
{
private:
	string gatunek,imie;
	int obrona,atak,szybkosc;


public:
	void DodajPostac(string a, string b, int c, int d, int e)
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

	void Wypisz( string & a, string & b, int & c, int & d, int & e )
		{
b=imie;
a=gatunek;
d=atak;
c=obrona;
e=szybkosc;
		}


};

int main()
{

	string gatunek,imie;
	int obrona,atak,szybkosc;
	string gatunek2,imie2;
	int obrona2,atak2,szybkosc2;
	string gatunek3,imie3;
	int obrona3,atak3,szybkosc3;
	string gatunek4,imie4;
	int obrona4,atak4,szybkosc4;


	string type,name;
	int defens, atack, speed;
	string type2,name2;
	int defens2, atack2, speed2;

	int wybor,wybor2;


	lego p1;
	lego2 p2;
	lego3 p3;

	p1.DodajPostac("Sensei Wu","Kreacja",200,500,20);

	p2.DodajPostac("Cole","Ziemia",100,200,20);
	p3.DodajPostac("Jay","błyskawice",90,80,60);



		    p1.Wypisz(gatunek,imie,obrona,atak,szybkosc);
		    p2.Wypisz(gatunek2,imie2,obrona2,atak2,szybkosc2);
		    p3.Wypisz(gatunek3,imie3,obrona3,atak3,szybkosc3);



			  cout << "MikroNinjago" << endl << endl;

			  	cout << "Wybierz postac" << endl;
			  	cout << "1: " << imie << endl;
			  	cout << "2: " << imie2 << endl;
			  	cout << "3: " << imie3 << endl << endl ;

			  	cout << "Wpisz numer pierwszej postaci" << endl;

			  	cin >> wybor;



			  	switch ( wybor )
			  	      {
			  	         case 1:
			  	        	 cout << "Jako pierwszą postac wybrałes: " << endl;
			  	            p1.PokarzDane();
			  	          p1.Wypisz(type,name,defens,atack,speed);
			  	            break;
			  	         case 2 :
			  	      	 cout << "Jako pierwszą postac wybrałes: " << endl;
			  	      			  	            p2.PokarzDane();
			  	      			  	      p2.Wypisz(type,name,defens,atack,speed);
			  	            break;
			  	       case 3 :
			  	    	 cout << "Jako pierwszą postac wybrałes: " << endl;
			  	    			  	            p3.PokarzDane();
			  	    			  	        p3.Wypisz(type,name,defens,atack,speed);
			  	       		break;


			  	         default:
			  	            cout <<"Błędny wybór";
			  	      }

			  	cout << "Wpisz numer drugiej postaci" << endl;

			  				  	cin >> wybor2;
			  	switch ( wybor2 )
						  	      {
						  	         case 1:
						  	        	 cout << "Jako drugą postac wybrałes: " << endl;
						  	        		p1.PokarzDane();
						  	        		p1.Wypisz(type2,name2,defens2,atack2,speed2);
						  	            break;
						  	         case 2 :
						  	        	 cout << "Jako drugą postac wybrałes: " << endl;
						  	        		p2.PokarzDane();
						  	        		p2.Wypisz(type2,name2,defens2,atack2,speed2);
						  	            break;
						  	       case 3 :
						  	    	 cout << "Jako drugą postac wybrałes: " << endl;
						  	    			p3.PokarzDane();
						  	    			p3.Wypisz(type2,name2,defens2,atack2,speed2);
						  	       		break;

						  	         default:
						  	            cout <<"Błędny wybór";
						  	      }


cout << "Zacznijmy grę!"<< endl;

if (atack!=atack2)
{
	if (atack > defens2)
		cout << "Wygrał: "<< name<< endl;
	else
		cout << "Wygrał:" << name2<<endl;
}else
	if (speed > speed2)
			cout << "Wygrał: "<< name<< endl;
		else
			cout << "Wygrał:" << name2<<endl;

cout <<"Koniec gry" << endl;




	return 0;
}






