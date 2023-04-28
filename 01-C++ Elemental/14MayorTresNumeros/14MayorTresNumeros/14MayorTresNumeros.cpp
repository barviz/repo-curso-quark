/*Se cargan por teclado tres números distintos. Mostrar por pantalla el mayor de ellos.*/

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

    if (num1 > num2)
    {
        if (num1 > num3)
        {
            cout << num1;
        }
        else
        {
            cout << num3;
        }
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