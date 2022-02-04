
#include <iostream>
#include <math.h>


using namespace std;

class Kwadrat;

class Punkt
{
protected:
	string nazwa;
    int x, y;
    int _x,_y;
public:
    Punkt(int x=10, int y=10, string nazwa="Puste")
    {
        this->x = x;
        this->y = y;
        this->nazwa=nazwa;

    }
    void CzytajDane()
    {
    	cout<<endl<<"Nazwa kształtu: "<<nazwa<<" Punkt x: "<<x<<" y: "<<y<<endl;
    }
    void ZadajDane()
    {
    	cout<<endl<<"Podaj nazwę kształtu: "<<endl;
    	cin>>nazwa;
    	cout<<"Podaj punkt x: "<<endl;
    	cin>>x;
    	cout<<"Podaj punkt y: "<<endl;
    	cin>>y;
    }
    virtual void SprawdzPunkt(int& _x, int& _y)
    {
    	cout<<"Podaj nazwę oraz współrzętne punktu do sprawdzenia:"<<endl;
    	Punkt::ZadajDane();
    	Punkt:CzytajDane();
    	_x=x;
    	_y=y;
    }

    friend void Sprawdz(Punkt, Kwadrat);

};

class Figura
{
public:


    virtual void obliczPole() = 0;
    virtual void CzytajDane() = 0;
    virtual void ZadajDane() = 0;
    virtual void SprawdzPunkt(Punkt p) = 0;

};

class Kolo : public Figura, public Punkt
{
protected:

    int R;
    float obwod;

public:
    Kolo(int _R = 0, int _x = 0, int _y = 0,string _name="Puste"):Punkt(_x,_y,_name)
    {
        R = _R;
        cout<<"Tworze koło"<<endl;
    }
   virtual void obliczPole()
    {
        cout << "Pole kola: " << 3.14 * pow(R, 2) << endl;
        ObliczObwod();
    }
   virtual void CzytajDane()
    {
	   Punkt::CzytajDane();
	   cout<<"Promien: "<<R<<endl;

    }
   virtual void ZadajDane()
      {
	   cout<<"Wybrałeś: Koło"<<endl;
  	   Punkt::ZadajDane();
			   cout<<" Podaj promien koła: "<<endl;
			   cin>>R;
			   cout<<endl;

      }
   virtual void SprawdzPunkt(Punkt p)
   {
	   p.SprawdzPunkt(_x, _y);
	   if (((_x > x) && (_x < x+R)) && ((_y > y) && ( _y < y+R)))
	   	   	cout << "Punkt znajduje sie w kole" << endl;
	   	   else cout << "Punkt nie znajduje się w kole" << endl;
   }
   void ObliczObwod()
   {
   obwod=2*3.14*R;
   cout<<"Obwod koła: "<<obwod<<endl; }

};

class Kwadrat : public Figura, public Punkt
{
protected:
    int B;


public:
    Kwadrat(int _B = 0, int _x = 0, int _y = 0,string _name="Puste"):Punkt(_x,_y,_name)
    {

        B = _B;
        cout<<"Tworze kwadrat"<<endl;

    }
    virtual void obliczPole()
    {
        cout << "Pole kwadratu: " << B * B << endl;
    }
    virtual void CzytajDane()
     {
    	Punkt::CzytajDane();
 	   cout<<"Długośc boku: "<<B<<endl;


     }
    virtual void ZadajDane()
       {
    	cout<<"Wybrałeś: Kwadrat"<<endl;
    		   Punkt::ZadajDane();
 			   cout<<" Podaj długosc boku: "<<endl;
 			   cin>>B;
 			   cout<<endl;

       }
    virtual void SprawdzPunkt(Punkt p)
    {
    	p.SprawdzPunkt(_x, _y);
    		   if (((_x > x) && (_x < x+B)) && ((_y > y) && ( _y < y+B)))
    		   	   	cout << "Punkt znajduje sie w kwadracie" << endl;
    		   	   else cout << "Punkt nie znajduje się w kwadracie" << endl;
    }
    friend void Sprawdz(Punkt, Kwadrat);
};




class Prostokat : public Figura, public Punkt
{
protected:
    int W, H;

public:
    Prostokat(int _W = 0, int _H = 0, int _x = 0, int _y = 0,string _name="Puste") :Punkt(_x, _y,_name)
    {

        W = _W;
        H = _H;
        cout<<"Tworze prostokat"<<endl;
    }
    virtual void obliczPole()
    {
        cout << "Pole prostokata: " << H * W << endl;

    }
    virtual void CzytajDane()
     {
       Punkt::CzytajDane();
 	   cout<<"Długosc: "<<W<<" Wyskosc: "<<H<<endl;

     }
    virtual void ZadajDane()
       {
    	cout<<"Wybrałeś: Prostokąt"<<endl;
   	   Punkt::ZadajDane();
 			  cout<<" Podaj długosc prostokata: "<<endl;
 			  cin>>W;
 			  cout<<" Podaj szerkosc prostokata: "<<endl;
 			  cin>>H;
 			  cout<<endl;

       }
    virtual void SprawdzPunkt(Punkt p)
    {
    	p.SprawdzPunkt(_x, _y);
    		   if (((_x > x) && (_x < x+W)) && ((_y > y) && ( _y < y+H)))
    		   	   	cout << "Punkt znajduje sie w prostokacie" << endl;
    		   	   else cout << "Punkt nie znajduje się w prostokacie" << endl;
    }


};

void Badaj(Punkt p, Figura* figura)
{
	figura->ZadajDane();
	figura->CzytajDane();
    figura->obliczPole();
    figura->SprawdzPunkt(p);

}

void Sprawdz(Punkt p, Kwadrat r)
{
	cout<<"Podaj nazwę oraz współrzętne punktu do sprawdzenia zaprzyjaznionego:"<<endl;
p.ZadajDane();
p.CzytajDane();
if (((p.x > r.x) && (p.x < r.x+r.B)) && ((p.y > r.y) && (p.y < r.y+r.B)))
	cout << "Punkt znajduje sie w kwadracie" << endl;
else cout << "Punkt nie znajduje się w kwadracie" << endl;
}


int main()
{

	int s=1;

	Figura* Sh;
	Kolo C;
	Kwadrat S;
	Prostokat P;
	Punkt PO;




	cout<<"Wybierz figure: "<<endl<<"1:Kolo"<<endl<<"2:Kwadrat"<<endl<<"3:Prostkat"<<endl;


	cin>>s;




switch (s)
    {

    case 1:
    	Sh = &C;
    	Badaj(PO, Sh);
        break;

    case 2:

    	Sh = &S;
    	Badaj(PO, Sh);
    	break;
    case 3:

    	Sh = &P;
    	Badaj(PO, Sh);
        break;
    default:
    	cout<<"Błędna komenta"<<endl;
        break;
    }








    return 0;
}
