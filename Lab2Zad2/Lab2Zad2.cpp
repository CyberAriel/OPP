
#include "metody.h"
#include <iostream>
#include<fstream>
using namespace std;

int main() {


	fun f;
	f.abc();

	Pytania p1,p2,p3,p4;

	p1.WczytajZPliku(1);
	p1.WczytajTablice();
	p1.Zadaj();
	p1.WczytajZPliku(2);
	p1.WczytajTablice();
	p1.Zadaj();
	p1.WczytajZPliku(3);
	p1.WczytajTablice();
	p1.Zadaj();
	p1.Punkt();
	return 0;
}
