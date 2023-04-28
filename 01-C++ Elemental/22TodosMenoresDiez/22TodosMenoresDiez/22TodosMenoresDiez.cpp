/*Se ingresan por teclado tres números, si todos los valores ingresados son menores a 10,
imprimir en pantalla la leyenda "Todos los números son menores a diez".*/

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

    if (num1 < 10 && num2 < 10 && num3 < 10)
    {
        cout << "Todos los números son menores a diez";
    }

    return 0;
}