/*Definir un vector de 5 elementos y localizarlo en la pila dinámica.*/

#include<iostream>

using namespace std;

int main()
{
    int* p;
    p = new int[5];

    for (int f = 0; f < 5; f++)
    {
        cout << "Ingrese un elemento: ";
        cin >> p[f];
    }
    cout << "Contenido del vector: ";

    for (int f = 0; f < 5; f++)
    {
        cout << p[f] << "-";
    }

    delete[]p; //devuelve el espacio utilizado

    return 0;
}