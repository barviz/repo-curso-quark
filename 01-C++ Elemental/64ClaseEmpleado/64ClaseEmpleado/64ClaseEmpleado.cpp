/*Confeccionar una clase que represente un empleado.
Definir como atributos su nombre y su sueldo.
Confeccionar los métodos para la carga, otro para imprimir sus datos y por último
uno que imprima un mensaje si debe pagar impuestos (si el sueldo supera a 3000)*/

#include <iostream>

using namespace std;

class Empleado {

private:
    char nombre[40];
    float sueldo;
    int edad;

public:
    void inicializar();
    void pagaImpuestos();
};

void Empleado::inicializar()
{
    cout << "Ingrese el nombre: ";
    cin.getline(nombre, 40);
    cout << "Ingrese el sueldo: ";
    cin >> sueldo;
}

void Empleado::pagaImpuestos()
{
    if (sueldo >= 3000)
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
    Empleado empleado1;

    empleado1.inicializar();
    empleado1.pagaImpuestos();

    return 0;
}