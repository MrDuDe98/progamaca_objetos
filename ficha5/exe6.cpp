#include <iostream>
#include <string>
#include <windows.h>
using namespace std;
    int main(){
    int op = 1;

        while((op > 0) && (op < 5)){
            cout<<"\n  Hipoteses de compra"<<"\n\n";
            cout<<"   (1)   Pequeno Almoco \n";
            cout<<"   (2)   Almoco \n";
            cout<<"   (3)   Lanche \n";
            cout<<"   (4)   Jantar \n\n";
            cout<<"      Escolha a senha que deseja comprar: \n";
            cin>>op;
            switch(op){

                case (1): cout << "Comprou uma senha para o pequeno almoco \n\n";
                            break;
                case (2): cout << "Comprou uma senha para o almoco \n\n";
                            break;
                case (3): cout << "Comprou uma senha para o Lanche \n\n";
                            break;
                case (4): cout << "Comprou uma senha para o Jantar \n\n";
                            break;
                default:  system("PAUSE");
                            break;
            }
        }
    }
