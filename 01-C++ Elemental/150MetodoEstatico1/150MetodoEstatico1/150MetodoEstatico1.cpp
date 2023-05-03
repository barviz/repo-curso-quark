/*Plantear una clase que defina un atributo y un método estático.
Desde la main llamar al método estático sin tener que crear un objeto de dicha clase.*/

#include<iostream>

using namespace std;

class Prueba {

    static int x1;

public:

    static int retornarX();
};

int Prueba::x1 = 20;

int Prueba::retornarX()
{
    return x1;
}

int main()
{
    cout << Prueba::retornarX(); //20
    return 0;
}