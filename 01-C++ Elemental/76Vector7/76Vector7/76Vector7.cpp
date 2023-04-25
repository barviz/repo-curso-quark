/*Cargar un vector de 10 elementos y verificar posteriormente si el mismo está ordenado de menor a mayor.*/

#include<iostream>

using namespace std;

class PruebaVector7 {

private:
    int vec[10];

public:
    void cargar();
    void verificarOrdenado();
};

void PruebaVector7::cargar()
{
    for (int f = 0; f < 10; f++)
    {
        cout << "Ingrese un elemento: ";
        cin >> vec[f];
    }
}

void PruebaVector7::verificarOrdenado()
{
    int orden = 1;

    for (int f = 0; f < 9; f++)
    {
        if (vec[f + 1] < vec[f])
        {
            orden = 0;
        }
    }
    if (orden == 1)
    {
        cout << "Esta ordenado de menor a mayor";
    }
    else
    {
        cout << "No esta ordenado de menor a mayor";
    }

    cin.get();
    cin.get();
}

int main()
{
    PruebaVector7 pv7;

    pv7.cargar();
    pv7.verificarOrdenado();

    return 0;
}