#include <iostream>
using namespace std;

int main(){

    char *s="Bases de programacao";
    while (*s != '\0'){
        cout << *s++ << endl;
    }
}