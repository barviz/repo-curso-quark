/*Realizar un programa que imprima en pantalla los números del 1 al 100.*/

#include<iostream>

using namespace std;

int main()
{
    int x;
    x = 1;

    while (x <= 100)
    {
        cout << x;
        cout << " - ";
        x = x + 1;
    }

    return 0;
}