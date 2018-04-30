#include <iostream>
#include <string>
#include <windows.h>
using namespace std;

int main(){
 std::string palavra;


 cout << "Introduza uma palavra \n"; cin >> palavra;
 if(palavra.length() <= 4){
    cout <<"Palavra pequena \n"<< "Com "<< palavra.length() <<" letras";;
 }else if((palavra.length() > 4) && (palavra.length() <= 8)){
     cout <<"Palavra de tamanho medio \n"<< "Com"<< palavra.length() <<" letras";;
 } else {
     cout <<"Palavra grande!\n"<< "Com"<< palavra.length() <<" letras";
 }
}
