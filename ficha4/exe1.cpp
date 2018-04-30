#include <iostream>
#include <string>
#include <windows.h>
using namespace std;

int main(){
    int valor;

    cout << "Introduza um valor entre 1 e 10: "; cin >> valor;
    if ((valor <= 10) && (valor >= 1)){
        cout << "Valor introduzido valido!";
    }else{
        cout <<"Valor introduzido invalido!";
    }

}
