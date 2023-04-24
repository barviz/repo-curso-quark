/*Desarrollar un programa que muestre la tabla de multiplicar del 5 (del 5 al 50).*/

#include<iostream>

using namespace std;

int main()
{
    int f;

    for (f = 5; f <= 50; f = f + 5)
    {
        cout << f;
        cout << "-";
    }
    return 0;
}