/*Plantear una clase llamada Alumno y definir como atributos su nombre y su edad.
En el constructor realizar la carga de datos.
Definir otros dos métodos para imprimir los datos ingresados
y un mensaje si es mayor o no de edad (edad >=18)*/

#include<iostream>

using namespace std;

class Alumno {

private:
    char nombre[40];
    int edad;

public:
    Alumno();
    void imprimir();
    void esMayorEdad();
};

Alumno::Alumno()
{
    cout << "Ingrese un nombre: ";
    cin.getline(nombre, 40);
    cout << "Ingrese la edad: ";
    cin >> edad;
}

void Alumno::imprimir()
{
    cout << "Nombre: " << nombre << "\n";
    cout << "Edad: " << edad << "\n";
}

void Alumno::esMayorEdad()
{
    if (edad >= 18)
    {
        cout << "es mayor de edad.";
    }
    else
    {
        cout << "no es mayor de edad.";
    }
    cin.get();
    cin.get();
}

int main()
{
    Alumno alumno1;

    alumno1.imprimir();
    alumno1.esMayorEdad();

    return 0;
}