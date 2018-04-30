#include <iostream>
using namespace std;
int main (){
  cout << "     PRODUTOS DA SEMANA COM DESCONTO \n \n";
  cout << " 1 -- Cereais Nestum, 2 -- Sumo Tropical \n";
  cout << " 3 -- Geleia Morango, 4 -- Massa Italiana \n";
  cout << " 5 -- Arroz Amarelo,  6 -- Leite de Soja \n";
  cout << " 7 -- Coca Cola Zero, 8 -- Couve de Bruxelas \n \n";

int escolha;

cout << "Indique o numero do produto: "; cin >> escolha;

switch (escolha) {

    case 1 :
        cout << "Desconto = 20%" << endl;
        break;
    case 2 :
        cout << "Desconto = 15%" << endl;
        break;
    case 3 :
        cout << "Desconto = 20%" << endl;
        break;
    case 4 :
        cout << "Desconto = 10%" << endl;
        break;
    case 5 :
        cout << "Desconto = 10%" << endl;
        break;
    case 6 :
        cout << "Desconto = 20%" << endl;
        break;
    case 7 :
        cout << "Desconto = 15%" << endl;
        break;
    case 8 :
        cout << "Desconto = 5%" << endl;
        break;
    default :
        cout << "Produto nao valido!!!";
        break;
}

}

