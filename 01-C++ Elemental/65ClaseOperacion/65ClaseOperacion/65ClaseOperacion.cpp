/*Implementar la clase operaciones.
Se deben cargar dos valores enteros, calcular su suma, resta, multiplicación y división,
cada una en un método, imprimir dichos resultados.*/

#include<iostream>

using namespace std;

class Operaciones {

private:
    int valor1, valor2;

public:
    void inicializar();
    void sumar();
    void restar();
    void multiplicar();
    void dividir();
};

void Operaciones::inicializar()
{
    cout << "Ingrese el primer valor: ";
    cin >> valor1;
    cout << "Ingrese el segundo valor: ";
    cin >> valor2;
}

void Operaciones::sumar()
{
    int suma;

    suma = valor1 + valor2;

    cout << "La suma es: ";
    cout << suma;
    cout << "\n";
}

void Operaciones::restar()
{
    int resta;

    resta = valor1 - valor2;

    cout << "La resta es: ";
    cout << resta;
    cout << "\n";
}

void Operaciones::multiplicar()
{
    int multiplicacion;

    multiplicacion = valor1 * valor2;

    cout << "La multiplicacion es: ";
    cout << multiplicacion;
    cout << "\n";
}

void Operaciones::dividir()
{
    int division;

    division = valor1 / valor2;

    cout << "La division es: ";
    cout << division;
    cout << "\n";
}

int main()
{
    Operaciones operacion1;

    operacion1.inicializar();
    operacion1.sumar();
    operacion1.restar();
    operacion1.multiplicar();
    operacion1.dividir();

    return 0;
}