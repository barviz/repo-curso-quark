/*Crear una clase llamada Temperatura que permita cargar la temperatura m�nima, m�xima y actual.
Definir un m�todo inline para retornar el rango de variaci�n (diferencia entre la m�xima y la m�nima)*/

#include<iostream>

using namespace std;

class Temperatura {

    int minima;
    int maxima;
    int actual;

//un m�todo es inline solo con implementarlo en la declaraci�n de la clase
public:

    Temperatura(int min, int max, int act);

    int rango() //inline int rango(){}   (se puede implementar as� aunque normalmente no se hace)
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