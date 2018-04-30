#include <iostream>
#include <string>
#include <windows.h>
using namespace std;

int main(){

}

class aluno{
    public:
    static char escola[25];
    char nome [20];

    aluno(){
        strcpy(nome,"Defina nome");
        cout<<endl<<"Criado um objecto aluno."<<endl;
        }
    ~aluno(){
        cout<<endl<<"Destruido um objecto aluno"<<endl;
        }
};
