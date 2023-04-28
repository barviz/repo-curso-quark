/*Se ingresan tres valores por teclado, si todos son iguales se imprime la suma del primero con el segundo
y a este resultado se lo multiplica por el tercero.*/

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

    if (num1 == num2 && num1 == num3)
    {
        int suma = num1 + num2;
        cout << "La suma del primero y segundo: ";
        cout << suma;
        cout << "\n";
        int producto = suma * num3;
        cout << "La suma del primero y segundo multiplicado por el tercero: ";
        cout << producto;
    }

    return 0;
}