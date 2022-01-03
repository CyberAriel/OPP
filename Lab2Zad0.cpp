


#include <iostream>
using namespace std;


const int n=3;
int j=1;
int punkty=0;

struct Zadaj{
	string pytanie,oa,ob,oc,odpowiedz;
};
Zadaj Wczytaj [n]=
{





	{"Jaki odglos wydaje kot?",
	"miau",
	"hau",
	"muu",
	"a"},

	{"Kto jest najwaznejszy w polsce?",
	"prezydent",
	"prezes",
	"premier",
	"b"},

	{"Jezyk JAVA to jezyk poziomu",
	"wysokiego",
	"maszynowy",
	"posredni",
	 "   c"}

};


int main() {
	for (int i=0; i<n ; i++)

	{
		string odp;
		cout << "Pytanie nr: " << j << endl;
		cout << Wczytaj[i].pytanie << endl;
		cout << "Odp A:" << Wczytaj[i].oa<< endl;
		cout << "Odp B:" << Wczytaj[i].ob<< endl;
		cout << "Odp C:" << Wczytaj[i].oc<< endl;
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
		j++;

	}

	cout << "Uzyskałeś : " << punkty << " punktów" << endl;
	return 0;
}
