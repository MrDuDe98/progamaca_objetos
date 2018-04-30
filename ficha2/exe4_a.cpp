#include <iostream>
#include <string>
using namespace std;

int main () {
    int v;
    int n[5];

    for ( int i = 0; i < 5; i++ ) {
        cout << "Indique um valor para o vector n[" << i << "]: "; cin >> v;
        n[i] = v;
    }

}
