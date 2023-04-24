/*Realizar un programa que imprima 25 términos de la serie 11 - 22 - 33 - 44, etc.
(No se ingresan valores por teclado)*/

#include<iostream>

using namespace std;

int main()
{
    int x, termino;

    x = 1;
    termino = 11;

    while (x <= 25)
    {
        cout << termino;
        cout << " - ";
        x = x + 1;
        termino = termino + 11;
    }
    return 0;
}