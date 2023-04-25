/*Desarrollar una clase que represente un punto en el plano y tenga los siguientes m�todos:
cargar los valores de x e y,
imprimir en que cuadrante se encuentra dicho punto
(concepto matem�tico, primer cuadrante si x e y son positivas, si x<0 e y>0 segundo cuadrante, etc.)*/

#include<iostream>

using namespace std;

class Punto {

private:
    int x, y;

public:
    void inicializar();
    void imprimirCuadrante();
};

void Punto::inicializar()
{
    cout << "Ingrese la coordenada x: ";
    cin >> x;
    cout << "Ingrese la coordenada y: ";
    cin >> y;
}

void Punto::imprimirCuadrante()
{
    if (x > 0 && y > 0)
    {
        cout << "Se encuentra en el primer cuadrante.";
    }
    else
    {
        if (x < 0 && y>0)
        {
            cout << "Se encuentra en el segundo cuadrante.";
        }
        else
        {
            if (x < 0 && y < 0)
            {
                cout << "Se encuentra en el tercer cuadrante.";
            }
            else
            {
                if (x > 0 && y < 0)
                {
                    cout << "Se encuentra en el cuarto cuadrante.";
                }
                else
                {
                    cout << "El punto no est� en un cuadrante.";
                }
            }
        }
    }
    cin.get();
    cin.get();
}

int main()
{
    Punto punto1;

    punto1.inicializar();
    punto1.imprimirCuadrante();

    return 0;
}