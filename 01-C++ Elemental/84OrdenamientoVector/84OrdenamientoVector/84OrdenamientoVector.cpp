/*Cargar un vector de 5 elementos enteros.
Ordenarlo de mayor a menor y mostrarlo por pantalla,
luego ordenar de menor a mayor e imprimir nuevamente.*/

#include<iostream>

using namespace std;

class OrdenamientoVector {

private:
    int vec[5];

public:
    void cargar();
    void ordenarMayorMenor();
    void ordenarMenorMayor();
    void imprimir();
};

void OrdenamientoVector::cargar()
{
    for (int f = 0; f < 5; f++)
    {
        cout << "Ingrese un valor: ";
        cin >> vec[f];
    }
}

void OrdenamientoVector::ordenarMayorMenor()
{
    for (int k = 0; k < 4; k++)
    {
        for (int f = 0; f < 4 - k; f++)
        {
            if (vec[f] < vec[f + 1])
            {
                int aux;
                aux = vec[f];
                vec[f] = vec[f + 1];
                vec[f + 1] = aux;
            }
        }
    }
}

void OrdenamientoVector::ordenarMenorMayor()
{
    for (int k = 0; k < 4; k++)
    {
        for (int f = 0; f < 4 - k; f++)
        {
            if (vec[f] > vec[f + 1])
            {
                int aux;
                aux = vec[f];
                vec[f] = vec[f + 1];
                vec[f + 1] = aux;
            }
        }
    }
}

void OrdenamientoVector::imprimir()
{
    for (int f = 0; f < 5; f++)
    {
        cout << vec[f];
        cout << " - ";
    }
    cout << "\n";
}

int main()
{
    OrdenamientoVector ov1;

    ov1.cargar();

    ov1.ordenarMenorMayor();
    ov1.imprimir();

    ov1.ordenarMayorMenor();
    ov1.imprimir();

    return 0;
}