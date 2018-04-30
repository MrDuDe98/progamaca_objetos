#include <iostream>
#include <string>
#include <windows.h>
using namespace std;

int main(){
 int numero1;
 int numero2;

     cout << "\n        5Intervaldo entre dois numeros \n";
     cout << "\n Introduza o primeiro numero \n"; cin >> numero1;cout << "\n";
     cout << "\n Introduza o segundo numero \n"; cin >> numero2;cout << "\n";

     if (numero1 > numero2){
        while (numero2 <= numero1){
            cout << numero2 << "\n";
            numero2++;
        }
     } else if (numero2 > numero1){
        while (numero1 <= numero2){
            cout << numero1 << "\n";
            numero1++;
        }
    } else{
        cout <<"Introduza outros valores, eles nao podem ser iguais!";
    }
}
