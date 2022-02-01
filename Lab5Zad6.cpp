
#include <iostream>
#include <math.h>


using namespace std;
class Punkt
{
protected:
    int x, y;
    string nazwa;
public:
    Punkt(int _x = 0, int _y = 0, string _nazwa = "")
    {
    	 x = _x;
    	 y = _y;
    	 nazwa = _nazwa;
    	 cout<<"Konstruktor Punkt"<<endl;
    }
    ~Punkt()
    {
    	cout<<"Desturktor Punkt"<<endl;
    }
    void CzytajPunkt(int& _x, int& _y, string& _nazwa)
    {
        _x = x;
        _y = y;
        _nazwa = nazwa;
    }
};

class Kolo : public Punkt
{
protected:
    int R;
public:
    Kolo(int x = 0, int y = 0, string _nazwa = "", int _R = 0) : Punkt(x,y)
    {
        nazwa = _nazwa;
        R = _R;
        cout<<"Konstruktor Koło"<<endl;
    }
    ~Kolo()
    {
    	cout<<"Destruktor Koło"<<endl;
    }
    void Czytaj()
    {
        int x, y;
        string nazwa_kolo;

        Punkt::CzytajPunkt(x, y, nazwa_kolo);
        cout << "Kolo: " << nazwa << " R: " << R << " Srodek: " << nazwa_kolo << " X: " << x << " Y: " << y << endl;
    }
};

int main()
{
	Kolo* ptr, kolo1, kolo2(22, 33, "Okrag", 99);

	    ptr = nullptr;
	    ptr = &kolo1;

	    kolo1.Czytaj();
	    ptr->Czytaj();

	    ptr = &kolo2;
	    ptr->Czytaj();

	    Kolo* wsk1;
	    wsk1 = new Kolo(1, 1, "dynamiczne Kolo1", 66);
	    Kolo* wsk2;
	    wsk2 = new Kolo(1, 1, "dynamiczne Kolo2");
	    Kolo* wsk3;
	    wsk3 = new Kolo;

	    wsk1->Czytaj();
	    wsk2->Czytaj();
	    wsk3->Czytaj();

	    delete wsk2;
	    delete wsk1;
	    delete wsk3;

	    wsk3 = nullptr;




    return 0;
}
