#include <iostream>
using namespace std;
int main() {
int numero, pares;
cout <<"Introduza um numero: ";
cin >> numero;
cout <<"A sequencia de pares e a seguinte: \n";

for (pares=0; pares<=numero; pares+=2){
    cout <<pares<<"\n";
}
}
