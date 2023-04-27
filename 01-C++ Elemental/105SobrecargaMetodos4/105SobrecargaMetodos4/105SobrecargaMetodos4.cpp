/*Plantear una clase llamada Punto con dos atributos llamados x e y.
Definir dos constructores
uno sin parámetros donde cargue en los atributos x e y el valor cero
y otro con dos parámetros que cargue los atributos x e y con los valores que llegan al constructor.
Imprimir los valores de los atributos.*/

#include<iostream>

using namespace std;

class Punto {
    int x, y;

public:
    Punto();
    Punto(int vx, int vy);
    void imprimir();
};

Punto::Punto()
{
    x = 0;
    y = 0;
}

Punto::Punto(int vx, int vy)
{
    x = vx;
    y = vy;
}

void Punto::imprimir()
{
    cout << "x: " << x << " y: " << y;
    cout << "\n\n";
}

int main()
{
    Punto p1;
    p1.imprimir();

    Punto p2(30, 2);
    p2.imprimir();

    return 0;
}