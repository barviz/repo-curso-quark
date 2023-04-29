#include<iostream>

using namespace std;

int main()
{
    char cad[5];
    strcpy_s(cad, 5, "Sol");
    char* pc;
    pc = cad;

    cout << pc;        //Sol
    cout << "\n";

    pc++;

    cout << pc;        //ol
    cout << "\n";

    pc++;

    cout << pc;        //l
    cout << "\n";

    pc--;

    cout << pc;        //ol
    cout << "\n";

    int x[5] = { 10, 50, 100, 99, 33 };
    int* pe;
    pe = &x[3];

    cout << *pe;    //99
    cout << "\n";

    pe--;

    cout << *pe;    //100
    
    return 0;
}