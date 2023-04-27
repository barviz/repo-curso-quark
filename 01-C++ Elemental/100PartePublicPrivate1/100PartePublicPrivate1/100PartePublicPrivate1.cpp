/*Plantear una clase llamada Dado.
Definir un atributo valor y tres m�todos
uno privado que dibuje una l�nea de aster�scos y otro dos p�blicos,
uno que genere un n�mero aleatorio entre 1 y 6
y otro que lo imprima llamando en este �ltimo al que dibuja la l�nea de aster�scos.*/

#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

class Dado {

private:
    int valor;
    void separador();

public:
    void tirar();
    void imprimir();
};

void Dado::separador()
{
    cout << "********************";
    cout << "\n";
}

void Dado::tirar()
{
    srand(time(NULL));
    valor = rand() % 6 + 1;
}

void Dado::imprimir()
{
    separador();

    cout << valor;
    cout << "\n";

    separador();
}

int main()
{
    Dado d;

    d.tirar();
    d.imprimir();

    return 0;
}