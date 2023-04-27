/*Plantear una clase llamada Moneda.
Al constructor llega como parámetro el valor de la moneda (1,5,50 o 100)
Definir luego dos objetos de esta clase con valores de moneda 5 y 50.*/

#include<iostream>

using namespace std;

class Moneda {

private:
    int valor;

public:
    Moneda(int v);
    void imprimir();
};

Moneda::Moneda(int v)
{
    valor = v;
}

void Moneda::imprimir()
{
    cout << "Valor de la moneda: " << valor << "\n";
}

int main()
{
    Moneda moneda1(5);
    Moneda moneda2(50);

    moneda1.imprimir();
    moneda2.imprimir();

    return 0;
}