/*Se tienen las notas del primer parcial de los alumnos de dos cursos, el curso A y el curso B,
cada curso cuenta con 5 alumnos.
Realizar un programa que muestre el curso que obtuvo el mayor promedio general.*/

#include<iostream>

using namespace std;

class PruebaVector6 {

private:
    int cursoa[5];
    int cursob[5];

public:
    void cargar();
    void calcularPromedios();
};


void PruebaVector6::cargar()
{
    cout << "Carga de notas del curso A";
    cout << "\n";

    for (int f = 0; f < 5; f++)
    {
        cout << "Ingrese una nota: ";
        cin >> cursoa[f];
    }
    cout << "Carga del notas del curso B";
    cout << "\n";

    for (int f = 0; f < 5; f++)
    {
        cout << "Ingrese una nota: ";
        cin >> cursob[f];
    }
}

void PruebaVector6::calcularPromedios()
{
    int suma1 = 0;
    int suma2 = 0;

    for (int f = 0; f < 5; f++)
    {
        suma1 = suma1 + cursoa[f];
        suma2 = suma2 + cursob[f];
    }

    int promedioa = suma1 / 5;
    int promediob = suma2 / 5;

    if (promedioa > promediob)
    {
        cout << "El curso A tiene un promedio mayor.";
    }
    else
    {
        cout << "El curso B tiene un promedio mayor.";
    }

    cin.get();
    cin.get();
}

int main()
{
    PruebaVector6 pv6;

    pv6.cargar();
    pv6.calcularPromedios();

    return 0;
}