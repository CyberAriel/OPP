

#include <iostream>
using namespace std;
int punkty=0;
class pytania
{

	string pytanie,oa,ob,oc,odpowiedz;
	;
public:
	void zadaj()
	{


	    string odp;


	        cout << pytanie << endl;
	        cout << "odp A: " << oa << endl;
	        cout << "odp B: " << ob << endl;
	        cout << "odp C: " << oc << endl;
	        cout << "Twoja odpowiedz?: " << flush;
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
	void wczytaj(string p, string a, string b, string c, string pr)
	{
		pytanie=p;
		oa=a;
		ob=b;
		oc=c;
		odpowiedz=pr;


	}
	void punkt()
	{
		cout <<"Masz "<<punkty<<" punktów"<<endl;
	}


};

int main() {



	pytania p1,p2,p3,p4;



	p1.wczytaj("No to zaczynamy! Z iloma krajami graniczy Polska?","7","8","9","b");
	p1.zadaj();
	p2.wczytaj("Dokończ tytuł słynnego westernu: Dobry, zły i...","brzydki","głupi","obojętny","a");
	p2.zadaj();
	p3.wczytaj("Prosta w geometrii...","ma początek, ale nie ma końca","ma koniec, ale nie ma początku","nie ma początku oraz nie ma końca","c");
	p3.zadaj();
	p4.wczytaj("Data terrorystycznego ataku na WTC to:","11 sierpnia 2001 r","11 września 2001 r.","11 października 2001 r.","b");
	p4.zadaj();
	p4.punkt();




	return 0;
}
