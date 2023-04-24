/*De un operario se conoce su sueldo y los años de antigüedad.
Se pide confeccionar un programa que lea los datos de entrada e informe:
a) Si el sueldo es inferior a 500 y su antigüedad es igual o superior a 10 años,
otorgarle un aumento del 20 %, mostrar el sueldo a pagar.
b)Si el sueldo es inferior a 500 pero su antigüedad es menor a 10 años, otorgarle un aumento de 5 %.
c) Si el sueldo es mayor o igual a 500 mostrar el sueldo en pantalla sin cambios.*/

#include<iostream>

using namespace std;

int main()
{
    float sueldo;
    int antiguedad;

    cout << "Ingrese el sueldo del empleado: ";
    cin >> sueldo;
    cout << "Ingrese la antiguedad del empleado en años: ";
    cin >> antiguedad;

    if (sueldo < 500 && antiguedad > 10)
    {
        float aumento = sueldo * 0.20f;
        float sueldoTotal = sueldo + aumento;
        cout << "Sueldo a pagar: ";
        cout << sueldoTotal;
    }
    else
    {
        if (sueldo < 500)
        {
            float aumento = sueldo * 0.05f;
            float sueldoTotal = sueldo + aumento;
            cout << "Sueldo a pagar: ";
            cout << sueldoTotal;
        }
        else
        {
            cout << "Sueldo a pagar: ";
            cout << sueldo;
        }
    }

    return 0;
}