/*Se desea saber la temperatura media trimestral de cuatro paises peque�os.
Para ello se tiene como dato las temperaturas medias mensuales de dichos paises.
Se debe ingresar el nombre del pa�s y seguidamente las tres temperaturas medias mensuales.
Seleccionar las estructuras de datos adecuadas para el almacenamiento de los datos en memoria.
a - Cargar por teclado los nombres de los pa�ses y las temperaturas medias mensuales.
b - Imprimir los nombres de los pa�ses y las temperaturas medias mensuales de las mismas.
c - Calcular la temperatura media trimestral de cada pa�s.
d - Imprimir los nombres de los pa�ses y las temperaturas medias trimestrales.
e - Imprimir el nombre del pa�s con la temperatura media trimestral mayor.*/

#include <iostream>

using namespace std;

class TemperaturaPaises {

private:
	int tempmen[4][3];
	char paises[4][40];
	int temptri[4];

public:
	void cargar();
	void imprimirTempMensuales();
	void calcularTemperaturaTri();
	void imprimirTempTrimestrales();
	void paisMayorTemperaturaTri();
};



void TemperaturaPaises::cargar()
{
	for (int f = 0; f < 4; f++)
	{
		cout << "Ingrese el nombre del pais: ";
		cin.getline(paises[f], 40);

		for (int c = 0; c < 3; c++)
		{
			cout << "Ingrese temperatura mensual: ";
			cin >> tempmen[f][c];

			cin.get();
		}
	}
}

void TemperaturaPaises::imprimirTempMensuales()
{
	for (int f = 0; f < 4; f++)
	{
		cout << "Pais: " << paises[f] << ":" << "\n";

		for (int c = 0; c < 3; c++)
		{
			cout << tempmen[f][c] << " " << "\n";
		}
		cout << "\n";
	}
}

void TemperaturaPaises::calcularTemperaturaTri()
{
	for (int f = 0; f < 4; f++)
	{
		int suma = 0;

		for (int c = 0; c < 3; c++)
		{
			suma = suma + tempmen[f][c];
		}
		temptri[f] = suma / 3;
	}
}

void TemperaturaPaises::imprimirTempTrimestrales()
{
	cout << "Temperaturas trimestrales." << "\n";

	for (int f = 0; f < 4; f++)
	{
		cout << paises[f] << " " << temptri[f] << "\n";
	}
}

void TemperaturaPaises::paisMayorTemperaturaTri()
{
	int may = temptri[0];
	char nom[40];
	strcpy_s(nom, 40, paises[0]);

	for (int f = 0; f < 4; f++)
	{
		if (temptri[f] > may)
		{
			may = temptri[f];
			strcpy_s(nom, 40, paises[f]);
		}
	}
	cout << "Pais con temperatura trimestral mayor es " << nom << " que tiene una temperatura de " << may;
}

int main()
{
	TemperaturaPaises tp;

	tp.cargar();
	tp.imprimirTempMensuales();
	tp.calcularTemperaturaTri();
	tp.imprimirTempTrimestrales();
	tp.paisMayorTemperaturaTri();

	return 0;
}