/*Implementar un m�todo recursivo que reciba un par�metro de tipo entero
y luego llame en forma recursiva con el valor del par�metro menos 1.*/

#include <iostream>

using namespace std;

class Recursividad {

public:
    void imprimir(int x);
};

void Recursividad::imprimir(int x)
{
    cout << x << " - ";
    imprimir(x - 1);
}

int main()
{
    Recursividad* recu = new Recursividad();

    recu->imprimir(5);
    delete recu;

    return 0;
}