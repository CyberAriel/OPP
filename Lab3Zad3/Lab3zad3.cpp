#include "metody.h"
#include <iostream>
using namespace std;



int main() {

string x;

	/*Punkt p1(1,2),p2(3,4),p3(5,6);

	p1.Odczyt();
	p1.OdczytZmiennej();
	p2.Odczyt();
	p2.OdczytZmiennej();
	p3.Odczyt();
	p3.OdczytZmiennej();
	*/



		Punkt* p1 = new Punkt(1,2);
			p1->Odczyt();
			p1->OdczytZmiennej();

cout<<"Nacisnij cos aby kontynuowac..."<<endl;
cin>>x;
Punkt* p2 = new Punkt(2,3);
			p2->Odczyt();
			p2->OdczytZmiennej();

cout<<"Nacisnij cos aby kontynuowac..."<<endl;
cin>>x;
Punkt* p3 = new Punkt(3,4);
			p3->Odczyt();
			p3->OdczytZmiennej();

cout<<"Nacisnij cos aby kontynuowac..."<<endl;
cin>>x;
delete p1;
delete p2;
delete p3;
	return 0;
}
