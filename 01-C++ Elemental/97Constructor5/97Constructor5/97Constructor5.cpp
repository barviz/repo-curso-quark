/*Implementar la clase Operaciones.
Al constructor llegan dos enteros que deben utilizarse en los métodos para calcular
su suma, resta, multiplicación y división.
imprimir dichos resultados.*/

#include<iostream>

using namespace std;

class Operaciones {

private:
    int valor1, valor2;

public:
    Operaciones(int v1, int v2);
    void sumar();
    void restar();
    void multiplicar();
    void dividir();
};

Operaciones::Operaciones(int v1, int v2)
{
    valor1 = v1;
    valor2 = v2;
}

void Operaciones::sumar()
{
    int suma;

    suma = valor1 + valor2;

    cout << "El resultado de la suma es: " << suma << "\n";
}

void Operaciones::restar()
{
    int resta;

    resta = valor1 - valor2;

    cout << "El resultado de la resta es: " << resta << "\n";
}

void Operaciones::multiplicar()
{
    int multip;

    multip = valor1 * valor2;

    cout << "El resultado de la multiplicacion es: " << multip << "\n";
}

void Operaciones::dividir()
{
    int division;

    division = valor1 / valor2;

    cout << "El resultado de la division es: " << division << "\n";
}

int main()
{
    Operaciones operaciones1(100, 50);

    operaciones1.sumar();
    operaciones1.restar();
    operaciones1.multiplicar();
    operaciones1.dividir();

    return 0;
}