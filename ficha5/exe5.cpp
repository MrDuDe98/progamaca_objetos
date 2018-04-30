#include <iostream>
#include <string>
#include <cstring>
#include <windows.h>
using namespace std;

int main(){

int op ;
cout <<" Escolha um numero de 1 a 5  "; cin >> op;cout <<"\n";

    while((op > 0) && (op <= 5)){
        cout << op;
        cout <<" Escolha um numero de 1 a 5  "; cin >> op;cout <<"\n";

        cin >> op;
    }
}
