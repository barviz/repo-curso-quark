#include<iostream>

using namespace std;

int main()
{
	int num1, num2, suma, producto;

	cout << "Ingrese el primer valor: ";
	cin >> num1;
	cout << "Ingrese el segundo valor: ";
	cin >> num2;

	suma = num1 + num2;
	producto = num1 * num2;

	cout << "La suma de los dos valores ingresados es: ";
	cout << suma;
	cout << "\n";
	cout << "El producto de los dos valores ingresados es: ";
	cout << producto;

	return 0;
}