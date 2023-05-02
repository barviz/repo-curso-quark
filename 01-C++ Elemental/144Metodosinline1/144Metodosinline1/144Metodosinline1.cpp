/*Crear una clase llamada Temperatura que permita cargar la temperatura mínima, máxima y actual.
Definir un método inline para retornar el rango de variación (diferencia entre la máxima y la mínima)*/

#include<iostream>

using namespace std;

class Temperatura {

    int minima;
    int maxima;
    int actual;

//un método es inline solo con implementarlo en la declaración de la clase
public:

    Temperatura(int min, int max, int act);

    int rango() //inline int rango(){}   (se puede implementar así aunque normalmente no se hace)
    {
        int valor = maxima - minima;
        return valor;
    }
    void imprimir();
};

Temperatura::Temperatura(int min, int max, int act)
{
    minima = min;
    maxima = max;
    actual = act;
}

void Temperatura::imprimir()
{
    cout << "Minima: " << minima << "\n";
    cout << "Maxima: " << maxima << "\n";
    cout << "Actual: " << actual << "\n";
}


int main()
{
    Temperatura temperatura1(5, 25, 17);
    cout << "Rango de variacion de temperaturas: " << temperatura1.rango() << "\n\n";
    temperatura1.imprimir();
    return 0;
}