/*Confeccionar una clase que represente un empleado.
Definir como atributos su nombre y su sueldo.
En el constructor cargar los atributos y luego en otro método imprimir sus datos
y por último uno que imprima un mensaje si debe pagar impuestos (si el sueldo supera a 3000)*/

#include<iostream>

using namespace std;

class EmpleadoFabrica {

private:
    char nombre[40];
    float sueldo;

public:
    EmpleadoFabrica();
    void imprimir();
    void pagaImpuestos();
};

EmpleadoFabrica::EmpleadoFabrica()
{
    cout << "Ingrese el nombre del empleado: ";
    cin.getline(nombre, 40);
    cout << "Ingrese su sueldo: ";
    cin >> sueldo;
}

void EmpleadoFabrica::imprimir()
{
    cout << "Nombre: " << nombre << "\n";
    cout << "Sueldo: " << sueldo << "\n\n";
}

void EmpleadoFabrica::pagaImpuestos()
{
    if (sueldo > 3000)
    {
        cout << "Debe abonar impuestos";
    }
    else
    {
        cout << "No paga impuestos";
    }

    cin.get();
    cin.get();
}

int main()
{
    EmpleadoFabrica empleado1;

    empleado1.imprimir();
    empleado1.pagaImpuestos();

    return 0;
}