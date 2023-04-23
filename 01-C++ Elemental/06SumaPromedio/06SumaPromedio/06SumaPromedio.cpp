/*Realizar un programa que lea cuatro valores numéricos e informar su suma y promedio.*/

#include<iostream>

using namespace std;

int main()
{
    int num1, num2, num3, num4, suma, promedio;

    cout << "Ingrese el primer valor: ";
    cin >> num1;
    cout << "Ingrese el segundo valor: ";
    cin >> num2;
    cout << "Ingrese el tercer valor: ";
    cin >> num3;
    cout << "Ingrese el cuarto valor: ";
    cin >> num4;

    suma = num1 + num2 + num3 + num4;
    promedio = suma / 4;

    cout << "La suma de los cuatro valores es: ";
    cout << suma;
    cout << "\n";
    cout << "El promedio de los cuatro valores es: ";
    cout << promedio;

    return 0;
}