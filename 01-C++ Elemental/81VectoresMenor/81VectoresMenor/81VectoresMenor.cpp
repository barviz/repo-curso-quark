/*Cargar un vector de 5 elementos enteros.
imprimir el menor y un mensaje si se repite dentro del vector.*/

#include<iostream>

using namespace std;

class BusquedaMenor {

private:
    int vec[5];
    int menor;

public:
    void cargar();
    void menorElemento();
    void repiteMenor();
};

void BusquedaMenor::cargar()
{
    for (int f = 0; f < 5; f++)
    {
        cout << "Ingrese un elemento: ";
        cin >> vec[f];
    }
}

void BusquedaMenor::menorElemento()
{
    menor = vec[0];

    for (int f = 1; f < 5; f++)
    {
        if (vec[f] < menor)
        {
            menor = vec[f];
        }
    }
    cout << "El menor elemento es: ";
    cout << menor;
    cout << "\n";
}

void BusquedaMenor::repiteMenor()
{
    int cant = 0;

    for (int f = 0; f < 5; f++)
    {
        if (vec[f] == menor)
        {
            cant++;
        }
    }
    if (cant > 1)
    {
        cout << "El menor elemento en el vector si se repite.";
    }
    else
    {
        cout << "El menor elemento en el vector no se repite.";
    }

    cin.get();
    cin.get();
}

int main()
{
    BusquedaMenor bm;

    bm.cargar();
    bm.menorElemento();
    bm.repiteMenor();

    return 0;
}