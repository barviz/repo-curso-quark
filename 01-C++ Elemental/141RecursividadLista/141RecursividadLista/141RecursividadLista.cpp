/*Imprimir la informaci�n de una lista simplemente encadenada de atr�s para adelante.
El empleo de estructuras repetitivas para resolver este problema es bastante engorroso y lento
(debemos avanzar hasta el �ltimo nodo e imprimir, luego avanzar desde el principio hasta el ante�ltimo nodo y as� sucesivamente)
El empleo de la recursividad para este problema hace m�s sencillo su soluci�n.*/

#include <iostream>

using namespace std;

class ListaGenerica {

    class Nodo {
        public:
            int info;
            Nodo* sig;
    };
    Nodo* raiz;
    void imprimir(Nodo* reco);

public:

    ListaGenerica();
    ~ListaGenerica();
    void insertarPrimero(int x);
    void imprimir();
};

ListaGenerica::ListaGenerica()
{
    raiz = NULL;
}

ListaGenerica::~ListaGenerica()
{
    Nodo* reco = raiz;
    Nodo* bor;

    while (reco != NULL)
    {
        bor = reco;
        reco = reco->sig;
        delete bor;
    }
}


void ListaGenerica::insertarPrimero(int x)
{
    Nodo* nuevo = new Nodo();

    nuevo->info = x;
    nuevo->sig = raiz;
    raiz = nuevo;
}

void ListaGenerica::imprimir()
{
    imprimir(raiz);
}

void ListaGenerica::imprimir(Nodo* reco)
{
    if (reco != NULL)
    {
        imprimir(reco->sig);
        cout << reco->info << " - ";
    }
}

int main()
{
    ListaGenerica* lg = new ListaGenerica();

    lg->insertarPrimero(10);
    lg->insertarPrimero(4);
    lg->insertarPrimero(5);
    lg->imprimir();
    delete lg;

    return 0;
}