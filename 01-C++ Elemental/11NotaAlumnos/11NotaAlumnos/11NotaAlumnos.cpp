/*Se ingresan tres notas de un alumno,
si el promedio es mayor o igual a siete mostrar un mensaje "Promocionado".*/

#include<iostream>

using namespace std;

int main()
{
    int nota1, nota2, nota3;

    cout << "Ingrese la primera nota: ";
    cin >> nota1;
    cout << "Ingrese la segunda nota: ";
    cin >> nota2;
    cout << "Ingrese la tercera nota: ";
    cin >> nota3;

    int promedio;
    promedio = (nota1 + nota2 + nota3) / 3;

    if (promedio >= 7)
    {
        cout << "Promocionado";
    }

    return 0;
}