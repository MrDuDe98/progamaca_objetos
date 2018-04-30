#include <iostream>
#include <windows.h>
using namespace std;

int main(){
 char letra;

 cout << "Digite uma letra: "; cin >> letra; cout << "\n";

 if ((letra >= 'A') && (letra <= 'Z')){
    cout << "Letra maiuscula! \n";
 }else if ((letra >= 'a') && (letra <= 'z')){
    cout << "Letra minuscula! \n";
 }else{
    cout << "Porfavor inserir uma letra!! \n";
 }
}
