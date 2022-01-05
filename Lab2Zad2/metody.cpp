#include "metody.h"
#include <iostream>
#include<fstream>
using namespace std;


void fun::abc()
{
	cout<<"cos1"<<endl;
}

void Pytania::Zadaj()
	{

	    string odp;

	        cout << pytanie << endl;
	        cout << "Odp A: " << oa << endl;
	        cout << "Odp B: " << ob << endl;
	        cout << "Odp C: " << oc << endl;
	        cout << "Twoja odpowiedz?:" << flush;
	        cin >> odp;
	        if (odp==odpowiedz)
	        {
	        	cout <<"Dobra odpowiedź"<<endl;
	        	punkty++;
	        }else
	        {
	       	    cout <<"Zła odpowiedź"<<endl;
	        }


	}

void Pytania::Wczytaj(string p, string a, string b, string c, string pr)
	{
		pytanie=p;
		oa=a;
		ob=b;
		oc=c;
		odpowiedz=pr;


	}

void Pytania::Punkt()
	{
		cout <<"Masz "<<punkty<<" punktów"<<endl;
	}

void Pytania::WczytajZPliku(int x)
		{
cout<<"wczytajzpliku"<<endl;
int z=0;
int y=0;


		string str;
		ifstream ifi("plik.txt");
		if (ifi)
		{
		  while (ifi.good())
		  {
			 if (z==6)
			 {
				 z=0;
			 }
		     getline(ifi, str);
		     if (y<6*x)
		     {
		    	 if (!str.empty())
		   		    {
		    		 	 tab1[z]=str;
		   		    }
		     }
		    cout <<z<<" "<<y<<" "<< str <<endl;
		    z++;
		    y++;
		  }
		}else
		{
			cout<<"Nie można otworzyc pliku"<<endl;
		}
		ifi.close();

/*
for (int k=0; k<=6; k++)
{
	cout << tab1[k]<< endl;
}
*/

		}

void Pytania::WczytajTablice()
{
	cout<<"wczytajtablice"<<endl;
	pytanie=tab1[1];
	oa=tab1[2];
	ob=tab1[3];
	oc=tab1[4];
	odpowiedz=tab1[5];
}
