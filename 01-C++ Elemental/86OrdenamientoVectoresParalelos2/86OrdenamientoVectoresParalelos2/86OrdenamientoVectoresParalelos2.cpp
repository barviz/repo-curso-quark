/*Cargar en un vector los nombres de 5 países y en otro vector paralelo la cantidad de habitantes del mismo.
Ordenar alfabéticamente e imprimir los resultados.
Por último ordenar con respecto a la cantidad de habitantes (de mayor a menor) e imprimir nuevamente.*/

#include <iostream>

using namespace std;

class PaisesHabitantes {

private:
    char paises[5][40];
    int habitantes[5];

public:
    void cargar();
    void ordenarPorNombres();
    void ordenarPorHabitantes();
    void imprimir();
};

void PaisesHabitantes::cargar()
{
    cout << "Carga de paises y habitantes" << "\n";

    for (int f = 0; f < 5; f++)
    {
        cout << "Ingrese el nombre del pais: ";
        cin.getline(paises[f], 40);

        cout << "Ingrese la cantidad de habitantes del pais: ";
        cin >> habitantes[f];

        cin.get();
    }
}

void PaisesHabitantes::ordenarPorNombres()
{
    for (int k = 0; k < 5; k++)
    {
        for (int f = 0; f < 4 - k; f++)
        {
            if (strcmp(paises[f], paises[f + 1]) > 0)
            {
                char auxpais[40];

                strcpy_s(auxpais, 40, paises[f]);
                strcpy_s(paises[f], 40, paises[f + 1]);
                strcpy_s(paises[f + 1], 40, auxpais);

                int auxhabitante;

                auxhabitante = habitantes[f];
                habitantes[f] = habitantes[f + 1];
                habitantes[f + 1] = auxhabitante;
            }
        }
    }

}

void PaisesHabitantes::ordenarPorHabitantes()
{
    for (int k = 0; k < 5; k++)
    {
        for (int f = 0; f < 4 - k; f++)
        {
            if (habitantes[f] < habitantes[f + 1])
            {
                char auxpais[40];

                strcpy_s(auxpais, 40, paises[f]);
                strcpy_s(paises[f], 40, paises[f + 1]);
                strcpy_s(paises[f + 1], 40, auxpais);

                int auxhabitante;

                auxhabitante = habitantes[f];
                habitantes[f] = habitantes[f + 1];
                habitantes[f + 1] = auxhabitante;
            }
        }
    }
}

void PaisesHabitantes::imprimir()
{
    for (int f = 0; f < 5; f++)
    {
        cout << paises[f] << " - " << habitantes[f] << "\n";
    }
}

int main()
{
    PaisesHabitantes ph;

    ph.cargar();
    ph.ordenarPorNombres();

    cout << "Ordenado por nombres" << "\n";

    ph.imprimir();
    ph.ordenarPorHabitantes();

    cout << "Ordenado por cantidad de habitantes" << "\n";

    ph.imprimir();

    return 0;
}