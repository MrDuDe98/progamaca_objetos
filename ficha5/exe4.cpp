#include <iostream>
#include <string>
#include <cstring>
#include <windows.h>
using namespace std;

int main(){
    std::string palavra = "Boa Sorte";
    int t = palavra.length();
    int i = 0;
        cout << palavra << "\n";
    while(i < t){
        cout << "t [" << i << "] = "<< palavra[i] << "\n";
        i++;
    }

    return 0;
}
