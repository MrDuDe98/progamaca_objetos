#include <iostream>
#include <string>
using namespace std;

int main () {
   string passwordA;
   string passwordB;
   int tamanho;
   string star;
   char estrelas = '*';
cout << "Coloque sua password: "; cin >> passwordA;
tamanho = passwordA.size() -1;
cout << "Repita: "; cin >> passwordB;
if (passwordA.compare(passwordB) == 0) cout << "Parabens";
else {
        for (int a= 0; a < tamanho ; a++){
            star += estrelas;
        }
    cout << "palavra pass incorreta \n" << "A password tem " << tamanho + 1 << " letras. \n" << "password:" << passwordA[0] << star;

}
   return 0;
}
