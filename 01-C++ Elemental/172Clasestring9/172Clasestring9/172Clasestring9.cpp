/*Inicializar un string con una cadena de caracteres y aplicar los m�todos: append, insert y erese.
Mostrar el estado final del string despu�s de llamar a cada m�todo.*/

#include<iostream>
#include<string>

using namespace std;

int main()
{
    string cad = "uno tres";

    cout << "Cadena original: " << cad << "\n";

    cad.append(" cuatro"); //a�ade al final otra cadena de caracteres
    cout << "Cadena despues de llamar a append: " << cad << "\n";

    cad.insert(3, " dos"); //a�ade otra cadena en cualquier parte de la cadena indicando la posici�n inicial
    cout << "Cadena despues de llamar a insert: " << cad << "\n";

    cad.erase(0, 4); //borra desde una determinada posici�n una determinada cantidad de caracteres del string
    cout << "Cadena despues de llamar a erase: " << cad << "\n";

    return 0;
}