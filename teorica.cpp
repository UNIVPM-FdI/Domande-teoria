#include <iostream> 
using namespace std; 
int main() { 
    int x[6]={5,3,1,0,6,2}, y=1, z=1; 
    int i=4; 
    while (x[--i]) 
    z += x[i] + 1; 
    y = i + 2*z + 3*y; 
    cout << z << endl;
    cout << x[3] << endl;
     cout << i << endl;
    cout << "y = " << y << endl; 
    return 0; 
}
