/*Definir dos variables float y un puntero a un tipo de dato float.
Hacer que el puntero guarde sucesivamente las direcciones de la primera y segunda variable
y cambiar el contenido de las mismas por asignación.
Imprimir las dos variables de tipo float.*/

#include<iostream>

using namespace std;

int main()
{
    float f1, f2;
    float* pf;
    pf = &f1;
    *pf = 10.5;
    pf = &f2;
    *pf = 20.2;
    cout << f1;
    cout << "\n";
    cout << f2;

    return 0;
}