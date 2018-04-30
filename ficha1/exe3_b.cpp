#include <iostream>
using namespace std;

int main () {
   int dobro;
   cout << "Digite um numero entre 1 e 5: "; cin >> dobro;
   for( dobro; dobro <= 5 && dobro >= 1; dobro*=2 ){
      cout << "valor do dobro: " << dobro << endl;
   }
//system ("PAUSE");
}
