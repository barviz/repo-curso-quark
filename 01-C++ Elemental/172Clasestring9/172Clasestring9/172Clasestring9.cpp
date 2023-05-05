/*Inicializar un string con una cadena de caracteres y aplicar los métodos: append, insert y erese.
Mostrar el estado final del string después de llamar a cada método.*/

#include<iostream>
#include<string>

using namespace std;

int main()
{
    string cad = "uno tres";

    cout << "Cadena original: " << cad << "\n";

    cad.append(" cuatro"); //añade al final otra cadena de caracteres
    cout << "Cadena despues de llamar a append: " << cad << "\n";

    cad.insert(3, " dos"); //añade otra cadena en cualquier parte de la cadena indicando la posición inicial
    cout << "Cadena despues de llamar a insert: " << cad << "\n";

    cad.erase(0, 4); //borra desde una determinada posición una determinada cantidad de caracteres del string
    cout << "Cadena despues de llamar a erase: " << cad << "\n";

    return 0;
}