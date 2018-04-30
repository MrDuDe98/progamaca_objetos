#include <iostream>
#include <string>
#include <windows.h>
using namespace std;

int main() {
 string frase1 = "";
 string frase2 = "";

    cout << "Introduza uma frase: \n";
        getline(cin, frase1);
    cout << "Introduza a 2 frase: \n";
        getline(cin, frase2);

    cout << frase1 + ' ' + frase2;

}
