#include <iostream>
#include <string>
#include <windows.h>
using namespace std;

int main() {
    string fraseInicial;
    string fraseUtilizador;
        fraseUtilizador="";
        fraseInicial= "Grande clube o benfica,";
    cout << fraseInicial <<"\n";
    cout << fraseInicial;
    getline(cin, fraseUtilizador);
    cout << fraseInicial + fraseUtilizador;
}
