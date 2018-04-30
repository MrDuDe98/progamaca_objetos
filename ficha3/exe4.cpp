#include <iostream>
#include <string>
#include <windows.h>
using namespace std;

int main(){
    int v[7] = { 1, 2, 3, 4, 5, 6, 7};
    int *p = v;
    int i;
    cout << "Output do array v[7]:";
    cout << *p++;
    cout << "  ";
    cout << *(p + 2);
    cout << "  ";
    cout << *++p;
    cout << "  ";
    cout << *(p + 4);
    *p++;
    cout << "  ";
    cout << *(p - 3);
    *p++;
    cout << "    ";
    for (i= -4; i < 2; i++)
            cout << *(p + i) << ",";
    cout << *(p + i) << ".\n";
    system("pause");

}
