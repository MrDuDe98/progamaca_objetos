#include <iostream>
#include <string>
#include <cstring>
using namespace std;

int main()
{
    char palavra[20];
    cout<<"Insira uma palavra: ";  cin >> palavra;
    int i = strlen(palavra);

    cout << palavra <<" - ";

    for(i; i >= 0; i--)
    {
       cout << palavra[i];
    }

    return 0;
}
