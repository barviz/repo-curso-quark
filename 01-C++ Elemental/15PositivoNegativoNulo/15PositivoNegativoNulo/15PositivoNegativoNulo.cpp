/*Se ingresa por teclado un valor entero,
mostrar una leyenda que indique si el n�mero es positivo, negativo o nulo (es decir cero)*/

#include<iostream>

using namespace std;

int main()
{
    int num;

    cout << "Ingrese un valor: ";
    cin >> num;

    if (num == 0)
    {
        cout << "Se ingres� el cero";
    }
    else
    {
        if (num > 0)
        {
            cout << "Se ingres� un valor positivo";
        }
        else
        {
            cout << "Se ingres� un valor negativo";
        }
    }

    return 0;
}