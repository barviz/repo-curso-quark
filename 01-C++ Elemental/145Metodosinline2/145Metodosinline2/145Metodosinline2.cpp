/*Plantear una clase que administre un vector de 5 enteros.
Cargar los elementos por teclado, imprimirlos y retornar la suma de la primera y última componente
(este último método implementarlo inline)*/

#include<iostream>

using namespace std;

class Vector {

    int vec[5];

public:

    void cargar();
    void imprimir();
    int sumaPrimeroUltimo() { return vec[0] + vec[4]; }
};

void Vector::cargar()
{
    for (int f = 0; f < 5; f++)
    {
        cout << "Ingrese un elemento: ";
        cin >> vec[f];
    }
}

void Vector::imprimir()
{
    for (int f = 0; f < 5; f++)
    {
        cout << vec[f] << " - ";
    }
    cout << "\n";
}


int main()
{
    Vector vec1;

    vec1.cargar();
    vec1.imprimir();

    cout << "Suma de la primer y ultimo elemento: " << vec1.sumaPrimeroUltimo();

    return 0;
}