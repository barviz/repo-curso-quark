/*Otro problema t�pico que se presenta para analizar la recursividad es el obtener el factorial de un n�mero.
Recordar que el factorial de un n�mero es
el resultado que se obtiene de multiplicar dicho n�mero por el anterior y as� sucesivamente hasta llegar a uno.
Ej. el factorial de 4 es 4 * 3 * 2 * 1 es decir 24.*/

#include<iostream>

using namespace std;

class Recursividad {

public:
    int factorial(int fact);
};

int Recursividad::factorial(int fact)
{
    if (fact > 0) {

        int valor = fact * factorial(fact - 1);
        return valor;
    }
    else
        return 1;
}


int main()
{
    Recursividad* recu = new Recursividad();

    cout << "El factorial de 4 es " << recu->factorial(4);
    delete recu;

    return 0;
}