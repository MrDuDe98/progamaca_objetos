#include <iostream>
#include <string>
#include <windows.h>
using namespace std;

int main(){
 int val1;
 int val2;
 int val3;

 cout << "Digite o 1� numero: "; cin >> val1; cout << "\n";
 cout << "Digite o 2� numero: "; cin >> val2; cout << "\n";
 cout << "Digite o 3� numero: "; cin >> val3; cout << "\n";

 if ((val1 > val2) && (val1 > val3)){
    cout << "O maior e o 1� numero, o " << val1;
 }else if ((val2 > val1) && (val2 > val3)){
    cout << "O maior e o 2� numero, o " << val2;
 }else{
    cout << "O maior e o 3� numero, o " << val3;
 }
}
