/*Se desea guardar los sueldos de 5 operarios en un vector.
Realizar la carga del vector en el constructor.*/

#include<iostream>

using namespace std;

class Operarios {

private:
    float sueldos[5];

public:
    Operarios();
    void imprimir();
};

Operarios::Operarios()
{
    cout << "Carga de sueldos." << "\n";

    for (int f = 0; f < 5; f++)
    {
        cout << "Ingrese el sueldo: ";
        cin >> sueldos[f];
    }
}

void Operarios::imprimir()
{
    for (int f = 0; f < 5; f++)
    {
        cout << sueldos[f] << "\n";
    }

    cin.get();
    cin.get();
}

int main()
{
    Operarios op;

    op.imprimir();

    return 0;
}