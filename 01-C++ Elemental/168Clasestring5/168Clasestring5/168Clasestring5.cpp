/*Inicializar un string con la cadena “hola”
luego extraer el primer y último caracter del string por medio de subíndices.*/

#include<string>
#include<iostream>

using namespace std;

int main()
{
    string cadena1 = "Hola";

    cout << cadena1[0];
    cout << "\n";
    cout << cadena1[3];

    return 0;
}