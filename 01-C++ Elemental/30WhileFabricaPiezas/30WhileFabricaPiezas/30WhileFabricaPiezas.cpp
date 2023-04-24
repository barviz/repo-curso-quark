/*Una planta que fabrica perfiles de hierro posee un lote de n piezas.
Confeccionar un programa que pida ingresar por teclado la cantidad de piezas a procesar
y luego ingrese la longitud de cada perfil;
sabiendo que la pieza cuya longitud esté comprendida en el rango de 1.20 y 1.30 son aptas.
Imprimir por pantalla la cantidad de piezas aptas que hay en el lote.*/

#include<iostream>

using namespace std;

int main()
{
    int x, cantidad, n;
    float largo;

    x = 1;
    cantidad = 0;

    cout << "Cuantas piezas procesará: ";
    cin >> n;

    while (x <= n)
    {
        cout << "Ingrese la medida de la pieza: ";
        cin >> largo;

        if (largo >= 1.20 && largo <= 1.30)
        {
            cantidad = cantidad + 1;
        }
        x = x + 1;
    }
    cout << "La cantidad de piezas aptas son: ";
    cout << cantidad;

    return 0;
}