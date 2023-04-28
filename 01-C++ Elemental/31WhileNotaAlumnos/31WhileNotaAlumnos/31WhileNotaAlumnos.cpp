/*Escribir un programa que solicite ingresar 10 notas de alumnos
y nos informe cuántos tienen notas mayores o iguales a 7 y cuántos menores.*/

#include<iostream>

using namespace std;

int main()
{
    int x, nota, conta1, conta2;

    x = 1;
    conta1 = 0;
    conta2 = 0;

    while (x <= 10)
    {
        cout << "Ingrese una nota: ";
        cin >> nota;

        if (nota >= 7)
        {
            conta1 = conta1 + 1;
        }
        else
        {
            conta2 = conta2 + 1;
        }
        x = x + 1;
    }

    cout << "Cantidad de alumnos con notas mayores o iguales a 7: ";
    cout << conta1;
    cout << "\n";
    cout << "Cantidad de alumnos con notas menores a 7: ";
    cout << conta2;

    return 0;
}