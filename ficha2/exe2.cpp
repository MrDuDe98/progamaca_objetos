#include <iostream>
#include <windows.h>
using namespace std;

int main () {
   int a;
   int b;
   int result;

   do {
      cout << "Digite um numero inteiro: "; cin >> a;
      cout << "Digite outro numero inteiro: "; cin >> b;
      result = a * b;
      if((result < 10)||(result > 1000)) cout << "Resultado suprior a 1000 ou inferior a 10! Tente outravez!" << result;
      else cout << a << '*' << b << '=' << result << endl;
   } while(( result <= 1000 )&& ( result >= 10));

   system("PAUSE");
}
