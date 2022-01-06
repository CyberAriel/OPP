/*
 * metody.h
 *
 *  Created on: 6 sty 2022
 *      Author: patrykpieczka
 */
#include <iostream>
using namespace std;

#ifndef METODY_H_
#define METODY_H_

class Punkt
{
private:
	int x;
	int y;


public:
Punkt(int a=0,int b=0);

void Odczyt();


~Punkt();

};



#endif /* METODY_H_ */
