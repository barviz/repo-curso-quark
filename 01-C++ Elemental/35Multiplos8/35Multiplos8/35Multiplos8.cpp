/*Mostrar los múltiplos de 8 hasta el valor 500.
Debe aparecer en pantalla 8 - 16 - 24, etc.*/

#include<iostream>

using namespace std;

int main()
{
    int mult8;
    mult8 = 8;

    while (mult8 <= 500)
    {
        cout << mult8;
        cout << " - ";
        mult8 = mult8 + 8;
    }
    return 0;
}