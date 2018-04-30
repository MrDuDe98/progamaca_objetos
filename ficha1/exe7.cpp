#include <iostream>
using namespace std;
int main (){
  int a,b,operador;

  cout << "Insira o primeiro numero: "; cin >> a;
  cout << "Insira o segundo numero: "; cin >> b;
  cout << "Insira a operacao a realizar(+,-,* ou /): "; cin >> operador;

  if(operador = '+') cout << a+b;
  else if (operador = '-') cout << a-b;
  else if (operador = '*') cout << a*b;
  else if (operador = '/') cout << a/b;
  else cout << "operador invalido!!";
}
