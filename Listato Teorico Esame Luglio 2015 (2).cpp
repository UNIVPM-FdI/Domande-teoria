#include <iostream>
using namespace std;

void funz(int, int *);

int main()
{
    int u=3,v=1,t;
    funz(u, &v); // il valore di u non sarà modificato, mentre quello di v si
    t = 2*u-v; // va fatta prima la moltiplicazione 2*3=6 e poi la sottrzione 6-10=-4;
    cout << "t = " << t << endl; // t=-4
    cout << "u = " << u << endl; // u=3
    cout << "v = " << v << endl; // v=10
    return 0;
}

void funz(int x, int *y)
{
    int u=-5, v; // questa  due parametri u e v, non sono li stessi di spora, sono dei nuovi parametri che lui inizializza, per creare confusione  
    v = x + *y; // il v(della funzione) diventa 4
    x = v + *y; // x(u del main) diventa 4+1=5 (questo valore è valido solo nella funzione)
    *y = x - u; // y(v del main) diventa 5-(-5)=10(cambia anche il valore di v del main)
}
