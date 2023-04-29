/*Necesitamos implementar dos clases que llamaremos Suma y Resta.
Cada clase tiene como atributo valor1, valor2 y resultado.
Los métodos a definir son
cargar1 (que inicializa el atributo valor1),
carga2 (que inicializa el atributo valor2),
operar (que en el caso de la clase "Suma" suma los dos atributos
y en el caso de la clase "Resta" hace la diferencia entre valor1 y valor2,
y otro método mostrarResultado)*/

#include<iostream>

using namespace std;

class Operacion {

protected:
    int valor1;
    int valor2;
    int resultado;

public:
    void cargar1();
    void cargar2();
    void mostrarResultado();
};


class Suma : public Operacion {

public:
    void operar();
};


class Resta : public Operacion {

public:
    void operar();
};


void Operacion::cargar1()
{
    cout << "Ingrese el primer valor: ";
    cin >> valor1;
}

void Operacion::cargar2()
{
    cout << "Ingrese el segundo valor: ";
    cin >> valor2;
}

void  Operacion::mostrarResultado()
{
    cout << resultado << "\n";
}

void Suma::operar()
{
    resultado = valor1 + valor2;
}

void Resta::operar()
{
    resultado = valor1 - valor2;
}


int main()
{
    Suma suma1;
    suma1.cargar1();
    suma1.cargar2();
    suma1.operar();
    cout << "La suma de los dos valores es: ";
    suma1.mostrarResultado();

    Resta resta1;
    resta1.cargar1();
    resta1.cargar2();
    resta1.operar();
    cout << "La diferencia de los dos valores es: ";
    resta1.mostrarResultado();

    return 0;
}