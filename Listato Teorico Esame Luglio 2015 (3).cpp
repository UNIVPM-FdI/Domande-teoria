#include <iostream>

using namespace std;

int funz(int, int);

int main()
{
    int a=10, b=12, t;
    t = funz(a, b); 
    cout << "t = " << t << endl; // t è uguale a 26
    return 0;
}

int funz(int x,int y)
{
    if (y!=0)
        return (y + funz(y, x%y));
        /* (non so se sarà chiara la spiegazione, io ci provo, è un susseguirsi  di funzioni) 
		dato che y=12 è diverso da zero la funzione restituisce 12+(adesso viene richiamata la stessa funzione) passando a funz(2)
		x che sara y della funz(1) (cioe 12) e y(2) che sara 10, adesso partira di nuovo funz(2)
		funz(2) (x=12 e y=10) 
		y!=0 
		quindi parte di nuovo funz(3) 10+(funz(3))
		funz(3) (x=10,y=2)
		y!=2
		parte di nuovo funz(4) 2+(funz(4))
		funz(4) (x=2,y=0)
		y=0; restituisce la funzione x=2;
		adesso si fanno tutti i calcoli 
		funz(3)=4
		funz(2)=14
		funz(1)=26
		  */
    else
        return x;
}
