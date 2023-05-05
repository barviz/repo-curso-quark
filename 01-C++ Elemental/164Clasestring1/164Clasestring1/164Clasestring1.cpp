/*Confeccionar un programa que defina dos objetos de la clase string,
uno iniciar con la cadena “hola mundo” y el segundo cargarlo por teclado.
Mostrarlos por la consola.*/

#include<string> //nos permite hacer uso de la clase string
#include<iostream>

using namespace std; //nos permite hacer uso del espacio de nombres std

int main()
{
    string cadena1 = "Hola mundo";
    string cadena2;

    cout << "Ingrese una cadena de caracteres sin espacios en blanco: ";
    cin >> cadena2;

    cin.get(); //como el cin deja en el buffer de teclado un enter procedemos a extraerlo mediante la llamada al get

    cout << "Primer string: " << cadena1 << "\n";
    cout << "Segundo string: " << cadena2;

    return 0;
}