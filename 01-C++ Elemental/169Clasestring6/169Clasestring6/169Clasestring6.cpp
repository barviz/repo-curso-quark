/*Mostrar la cantidad de caracteres de tiene un string empleando los métodos length y size*/

#include<string>
#include<iostream>

using namespace std;

int main()
{
    string cadena1 = "Hola";

    cout << "cadena: " << cadena1;
    cout << "\n";
    cout << cadena1.size(); //4
    cout << "\n";
    cout << cadena1.length(); //4

    return 0;
}