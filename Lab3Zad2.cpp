

#include <iostream>
using namespace std;

class Punkt
{
private:
	int x;
	int y;


public:
Punkt(int a=0,int b=0)
{
	x=a;
	y=b;
}
void Odczyt()
{
	cout<<"Współrzędna x: "<<x<<endl<<"Wspólrzędna y: "<<y<<endl;
}

~Punkt()
{
cout<<"Destruktor"<<endl;
}

};







int main() {



	Punkt p1(1,2);
	p1.Odczyt();
	return 0;
}
