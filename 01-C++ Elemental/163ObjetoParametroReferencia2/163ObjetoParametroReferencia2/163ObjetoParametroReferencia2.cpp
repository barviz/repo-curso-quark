/*Volver a codificar el problema anterior
pero ahora al m�todo iguales hacer que llegue como referencia el par�metro
(agregamos el modificador const ya que no tenemos que modificar el objeto que le pasamos como referencia):

  bool iguales(const Reloj &r);*/

#include<iostream>

using namespace std;

class Reloj {

    int hora;
    int minuto;
    int segundo;

public:

    Reloj(int hora, int minuto, int segundo) { this->hora = hora; this->minuto = minuto; this->segundo = segundo; };
    void imprimir();
    bool iguales(const Reloj& r);
};

void Reloj::imprimir()
{
    cout << hora << ":" << minuto << ":" << segundo << "\n";
}

bool Reloj::iguales(const Reloj& r)
{
    if (hora == r.hora && minuto == r.minuto && segundo == r.segundo)
        return true;
    else
        return false;
}

int main()
{
    Reloj reloj1(10, 10, 10);
    Reloj reloj2(10, 10, 10);

    reloj1.imprimir();
    reloj2.imprimir();

    if (reloj1.iguales(reloj2))
        cout << "Tienen la misma hora los relojes";
    else
        cout << "No tienen la misma hora los relojes";

    return 0;
}