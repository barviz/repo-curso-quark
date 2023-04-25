/*Realizar un programa que pida la carga de dos vectores numéricos enteros de 4 elementos.
Obtener la suma de los dos vectores, dicho resultado guardarlo en un tercer vector del mismo tamaño.
Sumar componente a componente.*/

#include<iostream>

using namespace std;

class PruebaVector5 {

private:
    int vec1[4];
    int vec2[4];
    int vecSuma[4];

public:
    void cargar();
    void sumarizarVectores();
};

void PruebaVector5::cargar()
{
    cout << "Carga del primer vector.";
    cout << "\n";

    for (int f = 0; f < 4; f++)
    {
        cout << "Ingrese un elemento: ";
        cin >> vec1[f];
    }
    cout << "Carga del segundo vector.";
    cout << "\n";

    for (int f = 0; f < 4; f++)
    {
        cout << "Ingrese un elemento:";
        cin >> vec2[f];
    }
}

void PruebaVector5::sumarizarVectores()
{
    for (int f = 0; f < 4; f++)
    {
        vecSuma[f] = vec1[f] + vec2[f];
    }
    cout << "Vector resultante.";
    cout << "\n";

    for (int f = 0; f < 4; f++)
    {
        cout << vecSuma[f];
        cout << "\n";
    }
    cin.get();
    cin.get();
}

int main()
{
    PruebaVector5 pv5;

    pv5.cargar();
    pv5.sumarizarVectores();

    return 0;
}