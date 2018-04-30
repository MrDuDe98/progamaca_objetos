#include <iostream>
#include <string>
#include <windows.h>
using namespace std;

int main(){
    int numero;

    cout << "Insira um numero entre 0 e 3"; cin >> numero;

switch(numero) {
    case 0 :
        cout << "Zero" << endl;
        break;
    case 1 :
        cout << "Um" << endl;
        break;
    case 2 :
        cout << "Dois" << endl;
        break;
    case 3 :
        cout << "Tres" << endl;
        break;
    default:
        cout << "Invalido" << endl;
        break;
    }
}
