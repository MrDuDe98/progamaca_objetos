#include <iostream>
using namespace std;

int main ()
{
  int a,b,c;

  cout << "Insira o valor de a: "; cin >> a;
  cout << "Insira o valor de b:"; cin >> b;
  c = (a>b) ? a : b;

  cout<< "O maior e: " << c << '\n';
}
