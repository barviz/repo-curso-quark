/*Escribir un programa en el cual:
dada una lista de tres valores numéricos distintos
se calcule e informe su rango de variación (debe mostrar el mayor y el menor de ellos)*/

#include<iostream>

using namespace std;

int main()
{
    int num1, num2, num3;

    cout << "Ingrese el primer valor: ";
    cin >> num1;
    cout << "Ingrese el segundo valor: ";
    cin >> num2;
    cout << "Ingrese el tercer valor: ";
    cin >> num3;
    cout << "Rango de valores: ";

    if (num1 < num2 && num1 < num3)
    {
        cout << num1;
    }
    else
    {
        if (num2 < num3)
        {
            cout << num2;
        }
        else
        {
            cout << num3;
        }
    }
    cout << "-";
    if (num1 > num2 && num1 > num3)
    {
        cout << num1;
    }
    else
    {
        if (num2 > num3)
        {
            cout << num2;
        }
        else
        {
            cout << num3;
        }
    }

    return 0;
}