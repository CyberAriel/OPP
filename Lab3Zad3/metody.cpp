#include "metody.h"
#include <iostream>
using namespace std;

Punkt::Punkt(int a,int b)
{
	x=a;
	y=b;
}

void Punkt::Odczyt()
{
	cout<<"Współrzędna x: "<<x<<endl<<"Wspólrzędna y: "<<y<<endl;
}

Punkt::~Punkt()
{

}
