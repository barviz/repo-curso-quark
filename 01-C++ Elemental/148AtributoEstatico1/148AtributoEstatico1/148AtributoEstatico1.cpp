/*Plantear una clase que defina dos atributos, definir a uno de tipo estático.
Crear dos objetos de dicha clase y modificar e imprimir dichos atributos.*/

#include<iostream>

using namespace std;

class Prueba {

    int x1;
    static int x2; //creado dentro de la clase

public:

    Prueba(int v1, int v2) { x1 = v1; x2 = v2; };
    void imprimir();
};

int Prueba::x2; //definido fuera de la clase
//int Prueba::x2=100; así sería además inicializarlo con un valor

void Prueba::imprimir()
{
    cout << x1 << " - " << x2 << "\n";
}

int main()
{
    Prueba prueba1(1, 1);
    prueba1.imprimir(); // 1 - 1
    Prueba prueba2(20, 20);
    prueba1.imprimir(); // 1 - 20

    return 0;
}