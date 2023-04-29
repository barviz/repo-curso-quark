/*Un banco tiene 3 clientes que pueden hacer depósitos y extracciones.
También el banco requiere que al final del día calcule la cantidad de dinero que hay depositada.*/

#include<iostream>

using namespace std;

class Cliente {

	char nombre[40];
	float monto;

public:
	Cliente(const char nomb[40]);
	void depositar(int mont);
	void extraer(int mont);
	float retornarMonto();
	void imprimir();
};


class Banco {

	Cliente cliente1, cliente2, cliente3;

public:
	Banco();
	void operar();
	void depositiosTotales();
};


Cliente::Cliente(const char nomb[40])
{
	strcpy_s(nombre, nomb);
	monto = 0;
}

void Cliente::depositar(int mont)
{
	monto = monto + mont;
}

void Cliente::extraer(int mont)
{
	monto = monto - mont;
}

float Cliente::retornarMonto()
{
	return monto;
}

void Cliente::imprimir()
{
	cout << "Nombre: " << nombre << "  Monto: " << monto << "\n\n";
}

//ClassName::ClassName(): classMember(parameter){}
Banco::Banco() : cliente1("Pedro"), cliente2("Claudio"), cliente3("Luis")
{
}

void Banco::operar()
{
	cliente1.depositar(100);
	cliente2.depositar(150);
	cliente3.depositar(200);
	cliente3.extraer(150);
}

void Banco::depositiosTotales()
{
	float t = cliente1.retornarMonto() + cliente2.retornarMonto() + cliente3.retornarMonto();
	cout << "El total de dinero en el banco es: " << t << "\n\n";

	cliente1.imprimir();
	cliente2.imprimir();
	cliente3.imprimir();
}


int main()
{
	Banco banco1;

	banco1.operar();
	banco1.depositiosTotales();

	return 0;
}