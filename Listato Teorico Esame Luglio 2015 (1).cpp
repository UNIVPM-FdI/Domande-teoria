#include <iostream>
using namespace std;

int main()
{
    int x=2, y=10, k=-3, *p;
    p =&x; // p punta x
    y =*p; // y diventa  2
    *p = 3; // questa significa che x diventa 3
    k += 2*x + 9*y;
    cout << "k= " << k << endl;
    return 0;
}
