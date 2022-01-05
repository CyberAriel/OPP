/*
 * metody.h
 *
 *  Created on: 5 sty 2022
 *      Author: patrykpieczka
 */

#ifndef METODY_H_
#define METODY_H_
#include <iostream>
#include<fstream>
using namespace std;

class fun{
public:
	void abc();
};



class Pytania
{

public:
	string tab1 [6];
		string pytanie,oa,ob,oc,odpowiedz;
		int punkty=0;

	void Zadaj();

	void Wczytaj(string p, string a, string b, string c, string pr);

	void Punkt();




	void WczytajZPliku(int x);

void WczytajTablice();





};




#endif /* METODY_H_ */
