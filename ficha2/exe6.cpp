#include <iostream>
#include <string>
#include <windows.h>
using namespace std;
int00 main () {
int contador=0, n, soma=0;;
float media;
do {
    cout<<"Digite um numero inferior a 100:"<< "\n";cin>>n;
        if (n>100){
            cout<<"Esse numero e invalido, escreva outro!";
        }else{
            soma +=n;
            cout<<"A soma e: " <<soma<< "\n";
            contador+=1;
        }
}
while (soma<500);
    cout<<"A media e: "<<soma/contador <<"\n";
}
