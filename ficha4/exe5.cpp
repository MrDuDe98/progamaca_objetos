#include <iostream>
#include <string>
#include <windows.h>
using namespace std;

int main(){
    int numero;
    int i=0;

 cout << "Introduza um valor: "; cin >> numero;


 cout << "Crescente desde zero: \n" << endl;
 while(i <= numero){
    cout << i << endl;
    i++;
 }
  cout << "Decrescente ate zero: \n";
 while(numero >= 0){
    cout << numero << endl;
    numero--;
 }
 }
