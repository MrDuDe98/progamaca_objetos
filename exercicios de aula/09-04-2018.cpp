#include <iostream>
#include <string>
#include <windows.h>
using namespace std;

main(){
    class pessoa{
    public:
        char nome[40];
        int idade;
    }p1;

    cout << "digite seu nome: "; cin >> p1.nome;
    cout << "digite sua idade: "; cin >> p1.idade;
    cout << "nome: " << p1.nome <<'\t';
    cout << "Idade: " << p1.idade << '\n'; system("pause");
}
