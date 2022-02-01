

#include <iostream>


using namespace std;

class Bazowa1
{
protected:
    int x;
public:
    Bazowa1(int i) :x(i)
    {
        cout << "Bazowa 1 - Konstruktor" << endl;
    }
    ~Bazowa1()
    {
        cout << "Bazowa 1 - Destruktor" << endl;
    }
    int AddX()
    {
        return x;
    }
};

class Bazowa2
{
protected:
    int y;
public:
    Bazowa2(int j): y(j)
    {
        cout << "Bazowa 2 - Konstruktor" << endl;
    }
    ~Bazowa2()
    {
        cout << "Bazowa 2 - Destruktor" << endl;
    }
    int AddY()
    {
        return y;
    }
};

class Pochodna : public Bazowa1, public Bazowa2
{
protected:
    int z;
public:
    Pochodna(int, int, int);
    void Pokaz()
    {
        cout << AddX() << " " << AddY() << " ";
        cout << z << endl;
    }
};

Pochodna::Pochodna(int a, int b, int c) : Bazowa1(a), Bazowa2(b)
{
    z = c;
}


int main()
{
    Pochodna P(5, 10, 15);
    P.Pokaz();



}
