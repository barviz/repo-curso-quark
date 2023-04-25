/*Escribir un programa que solicite la carga de un n�mero entre 0 y 999,
y nos muestre un mensaje de cu�ntos d�gitos tiene el mismo.
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
            cout << "Tiene 3 d�gitos.";
        }
        else
        {
            if (valor >= 10)
            {
                cout << "Tiene 2 d�gitos.";
            }
            else
            {
                cout << "Tiene 1 d�gito.";
            }
        }
        cout << "\n";

    } while (valor != 0);

    return 0;
}