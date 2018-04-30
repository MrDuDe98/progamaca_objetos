#include <iostream>
#include <string>
#include <windows.h>
using namespace std;

int main() {
 std::string palavra1;
 std::string palavra2;


    cout << "Introduza uma palavra: \n";
        cin >> palavra1;
    cout << "Introduza a 2 palavra: \n";
        cin >> palavra2;
        if (palavra1 == palavra2){
            cout << "Sao iguais\n";
        }else
        {
            if (palavra1.size() < palavra2.size()){
                cout << "A segunda palavra e maior que a primeira!";
            }else{
                cout << "A primeira palavra e maior que a segunda!";
            }
        }


}
