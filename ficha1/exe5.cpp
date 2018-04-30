#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;

main(){
float media;
float primeiraNota;
float segundaNota;
cout << "Digite a primeira nota: "; cin >> primeiraNota;
cout << "Digite a segunda nota: "; cin >> segundaNota;
media= (primeiraNota + segundaNota)/2;
if (media < 9.5) cout << "Reprovado! Sua media: " << media;
else cout << "Aprovado! Sua media: " << media;
}
