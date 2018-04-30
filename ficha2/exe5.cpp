#include <iostream>
#include <string>
#include <windows.h>
using namespace std;

int main() {
    char c;
cout << "Digite um caracter: "; cin >> c;

if (((c >= 'A') && (c <= 'Z')) || (c >= 'a') && (c <='z')){
    cout << "E letra";
}else if (((c >= '0') && (c <= '9'))){
    cout << "E numero";
}else cout <<"E simbolo";
}
// ispunct() simbolo
// isalpha() letra
// isdigit() numero
