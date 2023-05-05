/*Realizar la carga de dos string por teclado
luego crear un tercer string concatenando los dos con el caracter "-" entre medio.*/

#include<string>
#include<iostream>

using namespace std;

int main()
{
    string s1;
    string s2;

    cout << "Primera cadena: ";
    getline(cin, s1);

    cout << "Segunda cadena: ";
    getline(cin, s2);

    string s3 = s1 + " - " + s2;
    cout << "string que resulta de la concatenacion de los dos anteriores: " << s3;

    return 0;
}