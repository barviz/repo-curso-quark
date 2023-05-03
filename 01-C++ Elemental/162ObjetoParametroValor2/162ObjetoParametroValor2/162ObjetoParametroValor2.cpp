/*Plantear la clase Reloj y definir como atributo la hora, minuto y segundo.
En el constructor inicializar los atributos.
Definir un m�todo que retorne si son iguales los atributos de dos objetos de tipo Reloj,
el m�todo tiene que tener la estructura:

  bool iguales(Reloj r);*/

#include<iostream>

using namespace std;

class Reloj {

    int hora;
    int minuto;
    int segundo;

public:

    Reloj(int hora, int minuto, int segundo) { this->hora = hora; this->minuto = minuto; this->segundo = segundo; };
    void imprimir();
    bool iguales(Reloj r);
};

void Reloj::imprimir()
{
    cout << hora << ":" << minuto << ":" << segundo << "\n";
}

bool Reloj::iguales(Reloj r)
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