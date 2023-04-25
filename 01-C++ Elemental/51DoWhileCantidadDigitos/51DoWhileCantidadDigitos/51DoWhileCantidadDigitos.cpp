/*Escribir un programa que solicite la carga de un número entre 0 y 999,
y nos muestre un mensaje de cuántos dígitos tiene el mismo.
Finalizar el programa cuando se cargue el valor 0.*/

#include<iostream>

using namespace std;

int main()
{
    int valor;
    do {
        cout << "Ingrese un valor entre 0 y 999 (0 finaliza): ";
        cin >> valor;

        if (valor >= 100)
        {
            cout << "Tiene 3 dígitos.";
        }
        else
        {
            if (valor >= 10)
            {
                cout << "Tiene 2 dígitos.";
            }
            else
            {
                cout << "Tiene 1 dígito.";
            }
        }
        cout << "\n";

    } while (valor != 0);

    return 0;
}