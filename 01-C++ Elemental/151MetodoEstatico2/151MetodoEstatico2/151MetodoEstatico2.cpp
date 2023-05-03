/*Plantear una clase Cuenta que defina dos atributos,
uno que almacene el importe de la misma
y otro atributo estático llamado cantidad que se debe incrementar en uno cada vez que se crea un objeto de dicha clase,
definir en esta misma clase un método estático que retorne el contandor cantidad.
Por otro lado crear una clase Banco que defina tres objetos de la clase Cuenta.
Imprimir la cantidad de cuentas llamando al método estático de la clase Cuenta.*/

#include<iostream>

using namespace std;

class Cuenta {

    float saldo;
    static int cantidad;

public:

    Cuenta(float sal) { saldo = sal; cantidad++; };
    static int retornarCantidad() { return cantidad; };
};

int Cuenta::cantidad = 0;

class Banco {

    Cuenta* cuenta1, * cuenta2, * cuenta3;

public:

    Banco();
    ~Banco();
    void cantidadClientes();
};

Banco::Banco()
{
    cuenta1 = new Cuenta(1000);
    cuenta2 = new Cuenta(3000);
    cuenta3 = new Cuenta(5000);
}

Banco::~Banco()
{
    delete cuenta1;
    delete cuenta2;
    delete cuenta3;
}

void Banco::cantidadClientes()
{
    cout << Cuenta::retornarCantidad();
}

int main()
{
    Banco* banco1 = new Banco();
    banco1->cantidadClientes();
    delete banco1;

    return 0;
}