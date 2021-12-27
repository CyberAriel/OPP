//============================================================================
// Name        : Lab1Zad0Structuralnie.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;


const int n=4;
int punkty=0;

struct Zadaj{
	string pytanie,oa,ob,oc,odpowiedz;
};
Zadaj Wczytaj [n]=
{

	{"No to zaczynamy! Z iloma krajami graniczy Polska?","7","8","9","b"},
	{"Dokończ tytuł słynnego westernu: Dobry, zły i...","brzydki","głupi","obojętny","a"},
	{"Prosta w geometrii...","ma początek, ale nie ma końca","ma koniec, ale nie ma początku","nie ma początku oraz nie ma końca","c"},
	{"Data terrorystycznego ataku na WTC to:","11 sierpnia 2001 r","11 września 2001 r.","11 października 2001 r.","b"}
};


int main() {
	for (int i=0; i<n ; i++)

	{
		string odp;
		cout << "Pytanie nr: " << i << endl;
		cout << Wczytaj[i].pytanie << endl;
		cout << "Odp a:" << Wczytaj[i].oa<< endl;
		cout << "Odp b:" << Wczytaj[i].ob<< endl;
		cout << "Odp c:" << Wczytaj[i].oc<< endl;
		cout << "Twoja odpowiedz?: " << flush;
			        cin >> odp;
			        if (odp==Wczytaj[i].odpowiedz)
			        {
			        	cout <<"Dobra odpowiedź"<<endl;
			        	punkty++;
			        }else
			        {
			       	    cout <<"Zła odpowiedź"<<endl;
			        }


	}

	cout << "Uzyskałeś : " << punkty << " punktów" << endl; // prints !!!Hello World!!!
	return 0;
}
