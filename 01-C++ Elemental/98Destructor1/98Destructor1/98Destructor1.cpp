/*Mostrar la tabla de multiplicar de un valor que se ingresa por teclado.
En el constructor pedir el entero.
Al finalizar el programa mostrar un mensaje de despedida
(este mensaje mostrarlo en el destructor).*/

#include<iostream>

using namespace std;

class Tabla {

private:
    int valor;

public:
    Tabla();
    void imprimir();
    ~Tabla();
};


Tabla::Tabla()
{
    cout << "Ingrese un valor entero: ";
    cin >> valor;
}

void Tabla::imprimir()
{
    for (int f = valor; f <= valor * 10; f = f + valor)
    {
        cout << f << " - ";
    }
    cout << "\n";
}

Tabla::~Tabla()
{
    cout << "Gracias por utilizar este programa.";

    cin.get();
    cin.get();
}

int main()
{
    Tabla tabla1;

    tabla1.imprimir();

    return 0;
}