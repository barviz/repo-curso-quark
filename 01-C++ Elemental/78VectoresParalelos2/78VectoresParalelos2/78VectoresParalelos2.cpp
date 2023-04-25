/*Crear una clase que permita ingresar el nombre de 5 productos y sus respectivos precios.
Definir dos vectores paralelos.
Mostrar cuantos productos tienen un precio mayor al primer producto ingresado.*/

#include<iostream>

using namespace std;

class ProductoPrecio {

private:
    char nombres[5][40];
    float precios[5];

public:
    void cargar();
    void precioMayorPrimero();
};

void ProductoPrecio::cargar()
{
    for (int f = 0; f < 5; f++)
    {
        cout << "Ingrese el nombre del producto: ";
        cin.getline(nombres[f], 40);

        cout << "Ingrese el precio: ";
        cin >> precios[f];
        cin.get();
    }
}

void ProductoPrecio::precioMayorPrimero()
{
    int cantidad = 0;

    for (int f = 0; f < 5; f++)
    {
        if (precios[f] > precios[0])
        {
            cantidad++;
        }
    }
    cout << "Cantidad de productos con un precio mayor al primero: ";
    cout << cantidad;

    cin.get();
}

int main()
{
    ProductoPrecio productoprecio1;

    productoprecio1.cargar();
    productoprecio1.precioMayorPrimero();

    return 0;
}