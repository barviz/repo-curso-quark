/*Realizar la carga de dos string por teclado luego mostrar el mayor alfabéticamente.*/

#include<string>
#include<iostream>

using namespace std;

int main()
{
    string s1;
    string s2;

    cout << "Primer cadena: ";
    getline(cin, s1);

    cout << "Segundo cadena: ";
    getline(cin, s2);

    if (s1 > s2)
    {
        cout << s1 << " es el mayor alfabeticamente.";
    }
    else
    {
        if (s2 > s1)
        {
            cout << s2 << " es el mayor alfabeticamente";
        }
        else
        {
            cout << "Se cargaron dos cadenas iguales";
        }
    }
    return 0;
}