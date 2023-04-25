/*En un curso de 4 alumnos se registraron las notas de sus exámenes
y se deben procesar de acuerdo a lo siguiente:
a) Ingresar Nombre y Nota de cada alumno (almacenar los datos en dos vectores paralelos)
b) Realizar un listado que muestre los nombres, notas y condición del alumno.
En la condición, colocar "Muy Bueno" si la nota es mayor o igual a 8,
"Bueno" si la nota está entre 4 y 7,
y colocar "Insuficiente" si la nota es inferior a 4.
c) Imprimir cuantos alumnos tienen la leyenda “Muy Bueno”.*/

#include<iostream>

using namespace std;

class NotasAlumnos {

private:
    char nombres[4][40];
    int notas[4];

public:
    void cargar();
    void imprimirEstado();
    void cantidadAlumnosMuyBueno();
};

void NotasAlumnos::cargar()
{
    for (int f = 0; f < 4; f++)
    {
        cout << "Ingrese el nombre del alumno: ";
        cin.getline(nombres[f], 40);

        cout << "Ingrese la nota: ";
        cin >> notas[f];

        cin.get();
    }
}

void NotasAlumnos::imprimirEstado()
{
    for (int f = 0; f < 4; f++)
    {
        cout << nombres[f];
        cout << " - ";
        cout << notas[f];
        cout << " - ";

        if (notas[f] >= 8)
        {
            cout << "Muy bueno";
        }
        else
        {
            if (notas[f] >= 4)
            {
                cout << "Bueno";
            }
            else
            {
                cout << "Insuficiente";
            }
        }
        cout << "\n";
    }
}

void NotasAlumnos::cantidadAlumnosMuyBueno()
{
    int cantidad = 0;

    for (int f = 0; f < 4; f++)
    {
        if (notas[f] >= 8)
        {
            cantidad++;
        }
    }
    cout << "Cantidad de alumnos muy buenos: ";
    cout << cantidad;
}


int main()
{
    NotasAlumnos notaslumnos1;

    notaslumnos1.cargar();
    notaslumnos1.imprimirEstado();
    notaslumnos1.cantidadAlumnosMuyBueno();

    return 0;
}