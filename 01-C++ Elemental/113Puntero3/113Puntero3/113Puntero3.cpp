/*Definir tres variables enteras e inicializarlas con los valores 5,10 y 15.
Luego definir una variable puntero a entero.
Hacer que dicha variable apunte sucesivamente a las distintas variables definidas previamente
e imprimir su contenido.*/

#include<iostream>

using namespace std;

int main()
{
    int x1 = 5;
    int x2 = 10;
    int x3 = 15;
    int* pe;
    pe = &x1;
    cout << *pe;
    cout << "\n";
    pe = &x2;
    cout << *pe;
    cout << "\n";
    pe = &x3;
    cout << *pe;

    return 0;
}