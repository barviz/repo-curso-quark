/*Confeccionar una clase que permita cargar el nombre y la edad de una persona.
Mostrar los datos cargados.
Imprimir un mensaje si es mayor de edad (edad>=18) o no*/

//resolución en main:

/*
#include <iostream>

using namespace std;

int main()
{
    char nombre[40];
    int edad;

    cout << "Ingrese nombre: ";
    cin.getline(nombre, 40);
    cout << "Ingrese edad: ";
    cin >> edad;
    cout << "Nombre:";
    cout << nombre;
    cout << "\n";
    cout << "Edad:";
    cout << edad;
    cout << "\n";

    if (edad >= 18)
    {
        cout << "Es mayor de edad.";
    }
    else
    {
        cout << "No es mayor de edad.";
    }

    return 0;
}
*/

//resolucion definiendo una clase y creando un objeto

#include <iostream>

using namespace std;

class Persona {

private:
    char nombre[40];
    int edad;

public:
    void inicializar();
    void imprimir();
    void esMayorEdad();
};

void Persona::inicializar()
{
    cout << "Ingrese un nombre: ";
    cin.getline(nombre, 40);
    cout << "Ingrese una edad: ";
    cin >> edad;
}

void Persona::imprimir()
{
    cout << "Nombre: ";
    cout << nombre;
    cout << "\n";
    cout << "Edad: ";
    cout << edad;
    cout << "\n";
}

void Persona::esMayorEdad()
{
    if (edad >= 18)
    {
        cout << "Es mayor de edad.";
    }
    else
    {
        cout << "No es mayor de edad.";
    }
    cin.get();
    cin.get();
}

int main()
{
    Persona persona1;
    persona1.inicializar();
    persona1.imprimir();
    persona1.esMayorEdad();

    return 0;
}