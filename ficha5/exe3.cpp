#include <iostream>
#include <string>
#include <windows.h>
using namespace std;

int main(){
    int x;
    int y;
    int resto;

    cout << "Introduza o valor de x:  "; cin >> x;cout<< "\n";
    cout << "Introduza o valor de y:  "; cin >> y;cout<< "\n";

    resto = x % y;
    cout << "Resultado da divisao: " << x / y << "\n";
    cout << "O resto da divisao inteira: " << resto;

}
