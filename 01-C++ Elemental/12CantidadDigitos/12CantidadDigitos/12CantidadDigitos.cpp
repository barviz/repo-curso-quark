/*Se ingresa por teclado un n�mero positivo de uno o dos d�gitos (1..99)
mostrar un mensaje indicando si el n�mero tiene uno o dos d�gitos.
(Tener en cuenta que condici�n debe cumplirse para tener dos d�gitos un n�mero entero)*/

#include<iostream>

using namespace std;

int main()
{
    int num;

    cout << "Ingrese un valor entero de 1 o 2 d�gitos: ";
    cin >> num;

    if (num < 10)
    {
        cout << "Tiene un d�gito";
    }
    else
    {
        cout << "Tiene dos d�gitos";
    }

    return 0;
}