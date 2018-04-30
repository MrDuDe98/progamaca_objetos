#include <iostream>
using namespace std;

int main(){

    int *p;
    int numero=20,valp;
    p = &numero;
    valp= *p;

    cout << "   O valor de valp.       " << valp << endl;
    *p=30;
    cout << "   O valor de numero e:   " << numero << endl;
    cout << "   O valor apontado e:    " << *p << endl;
}