#include <iostream>
using namespace std;

int main () {
   int a;
   int total = 0;
cout << "Insira um numero entre 1 e 15: "; cin >> a;
   do {
      cout << "n = " << a << endl;
      total+= a;
      a++ ;

   } while(( a <= 15 )&& ( a >=1));
    cout << "A soma de todos os numeros e: " << total;
   return 0;
}
