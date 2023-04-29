/*Confeccionar una clase que permita administrar un vector de 5 enteros.
Definir dos métodos:
uno que permita cargar el vector
y otro que retorne el mayor y el menor valor del vector.
Emplear dos punteros para poder retornar dos datos en un único método.*/

#include<iostream>

using namespace std;

class Vector {

    int vec[5];

public:
    void cargar();
    void retornarMayorMenor(int* pmayor, int* pmenor);
};

void Vector::cargar()
{
    for (int f = 0; f < 5; f++)
    {
        cout << "Ingrese un elemento: ";
        cin >> vec[f];
    }
}

void Vector::retornarMayorMenor(int* pmayor, int* pmenor)
{
    *pmayor = vec[0];
    *pmenor = vec[0];
    for (int f = 1; f < 5; f++)
    {
        if (vec[f] > *pmayor)
        {
            *pmayor = vec[f];
        }
        else
        {
            if (vec[f] < *pmenor)
            {
                *pmenor = vec[f];
            }
        }
    }
}


int main()
{
    Vector vector1;

    vector1.cargar();
    int may, men;
    vector1.retornarMayorMenor(&may, &men);

    cout << "El elemento mayor del vector es:" << may << "\n";
    cout << "El elemento menor del vector es:" << men << "\n";

    return 0;
}