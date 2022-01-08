#include "metody.h"
#include <iostream>
using namespace std;

Punkt::Punkt(int a,int b)
{

	//cout<<"Konstruktor"<<endl;
	cout<<"To ja, konstruktor nr: "<<s<<endl;
	//cout<<"Zmienna int: "<<i<<endl;
	x=a;
	y=b;
	s++;
	i++;
}

void Punkt::Odczyt()
{
	cout<<"Współrzędna x: "<<x<<endl<<"Wspólrzędna y: "<<y<<endl;
}

Punkt::~Punkt()
{
	cout<<"To ja destruktor"<<endl;
	s--;
}

void Punkt::OdczytZmiennej()
{
	cout<<"Zmienna statyczna: "<<s<<endl;
	cout<<"Zmienna int: "<<i<<endl;
}

int Punkt::s = 0;
