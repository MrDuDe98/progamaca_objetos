#include <
iostream>
using namespace std;
int main () {
int numero;
cout<<"Menu de opcoes:\n\n";
cout<<"1 : Executar o programa Calculadora\n";
cout<<"2 : Converter graus centigrados/fahrenheit\n";
cout<<"3 : Converter metros/quilometros\n";
cout<<"4 : Sair\n";
cin>>numero;
switch(numero){
    case 1: cout<<"Calculadora a executar..."<<"\n";
        break;
    case 2: cout<<"Conversao de temperaturas"<<"\n";
        break;
    case 3: cout<<"Conversao de distancias"<<"\n";
        break;
    case 4: cout<<"A terminar o programa..."<<"\n";
        break;
    default: cout<<"Numero invalido!"<<"\n";
    }
}
