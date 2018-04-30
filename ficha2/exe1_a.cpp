#include <iostream>
#include <windows.h>
using namespace std;

int main () {
   int a;
cout << "Insira um numero entre 1 e 15: "; cin >> a;
   do {
      cout << "n = " << a << endl;
      a = a + 1;
   } while(( a <= 15 )&& ( a >=1));

   system("PAUSE");
}
