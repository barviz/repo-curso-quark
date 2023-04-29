/*Confeccionar un programa que defina dos punteros a tipos de datos int y float.
Acceder mediante estos punteros a otras variables de tipo int y float.*/

#include <iostream>

using namespace std;

int main()
{
    int x = 10;
    int* pe;
    pe = &x;
    cout << x;         // 10
    cout << "\n";
    cout << *pe;       //10
    cout << "\n";
    *pe = 5;           
    cout << x;         // 5
    cout << "\n";

    float valor = 10.9;
    float* pf;
    pf = &valor;
    cout << *pf;      //10.9

    return 0;
}
