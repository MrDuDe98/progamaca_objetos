#include <iostream>
using namespace std;

int main () {
   int dobro;
   cout << "Digite um numero entre 1 e 5: "; cin >> dobro;
   while(( dobro <= 5 ) && (dobro >= 1 )){
      cout << "valor do dobro: " << dobro << endl;
      dobro *= 2 ;
   }

//system ("PAUSE");
}
