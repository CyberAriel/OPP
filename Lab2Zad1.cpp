#include <iostream>
#include<fstream>
using namespace std;
int punkty=0;
class Pytania
{
	string tab1 [6];
	string pytanie,oa,ob,oc,odpowiedz;

public:
	void Zadaj()
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
	void Wczytaj(string p, string a, string b, string c, string pr)
	{
		pytanie=p;
		oa=a;
		ob=b;
		oc=c;
		odpowiedz=pr;


	}
	void Punkt()
	{
		cout <<"Masz "<<punkty<<" punktów"<<endl;
	}



	void WczytajZPliku(int x)
		{

int z=0;
int y=0;


		string str;
		ifstream ifi("plik.txt");
		if (ifi)
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
		    //cout <<z<<" "<<y<<" "<< str <<endl;
		    z++;
		    y++;
		  }
		ifi.close();

/*
for (int k=0; k<=6; k++)
{
	cout << tab1[k]<< endl;
}
*/

		}
void WczytajTablice()
{
	pytanie=tab1[1];
	oa=tab1[2];
	ob=tab1[3];
	oc=tab1[4];
	odpowiedz=tab1[5];
}




};

int main() {



	Pytania p1,p2,p3,p4;

	//p1.Wczytaj("No to zaczynamy! Z iloma krajami graniczy Polska?","7","8","9","b");
	//p1.Zadaj();
	//p2.Wczytaj("Dokończ tytuł słynnego westernu: Dobry, zły i...","brzydki","głupi","obojętny","a");
	//p2.Zadaj();
	//p3.Wczytaj("Prosta w geometrii...","ma początek, ale nie ma końca","ma koniec, ale nie ma początku","nie ma początku oraz nie ma końca","c");
	//p3.Zadaj();
	//p4.Wczytaj("Data terrorystycznego ataku na WTC to:","11 sierpnia 2001 r","11 września 2001 r.","11 października 2001 r.","b");
	//p4.Zadaj();
	//p4.Punkt();

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
