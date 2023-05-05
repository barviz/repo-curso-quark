#include<string>
#include<iostream>

using namespace std;

int main()
{
    string cadena1 = "Hola mundo";
    string cadena2;

    cout << "Ingrese una cadena de caracteres: ";
    getline(cin, cadena2); //libera el buffer del último “enter” ingresado

    cout << "Primer string: " << cadena1 << "\n";
    cout << "Segundo string: " << cadena2;

    return 0;
}

//getline()  funcion que nos permite ingresar espacios en blanco dentro del string por teclado