#include <iostream>
using namespace std;

int main () {
   int dobro;
   cout << "Digite um numero entre 1 e 5: "; cin >> dobro;


switch(dobro) {
   case 1 :
        dobro*= 2 ;
        cout << "valor do dobro: " << dobro << endl;
        break;
   case 2 :
        dobro*= 2;
        cout << "valor do dobro: " << dobro << endl;
        break;
   case 3 :
        dobro*= 2;
        cout << "valor do dobro: " << dobro << endl;
        break;
   case 4 :
        dobro*= 2;
        cout << "valor do dobro: " << dobro << endl;
        break;
   case 5 :
        dobro*= 2;
        cout << "valor do dobro: " << dobro << endl;
        break;

   default :
        cout << "Digite um numero entre 1 e 5: "; cin >> dobro;
   }
//system ("PAUSE");
}

