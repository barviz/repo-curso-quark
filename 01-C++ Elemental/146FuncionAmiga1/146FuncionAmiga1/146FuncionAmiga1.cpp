/*Crear una clase llamada Temperatura que permita inicializar la temperatura mínima, máxima y actual.
Definir una función amiga que reciba dos objetos de la clase Temperatura y retorne la temperatura promedio actual.*/

#include<iostream>

using namespace std;

class Temperatura {

    int minima, maxima, actual;

public:

    Temperatura(int min, int max, int act) { minima = min; maxima = max; actual = act; }
    friend int temperaturaMedia(Temperatura t1, Temperatura t2);
};

int temperaturaMedia(Temperatura t1, Temperatura t2)
{
    int prom = (t1.actual + t2.actual) / 2;
    return prom;
}

int main()
{
    Temperatura temperatura1(10, 20, 15);
    Temperatura temperatura2(12, 25, 17);

    cout << "La temperatura promedio de las temperaturas actuales es: ";
    cout << temperaturaMedia(temperatura1, temperatura2);

    return 0;
}