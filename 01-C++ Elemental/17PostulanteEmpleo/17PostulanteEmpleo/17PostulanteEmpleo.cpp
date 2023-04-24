/*Un postulante a un empleo, realiza un test de capacitaci�n, se obtuvo la siguiente informaci�n:
cantidad total de preguntas que se le realizaron y la cantidad de preguntas que contest� correctamente.
Se pide confeccionar un programa que ingrese los dos datos por teclado
e informe el nivel del mismo seg�n el porcentaje de respuestas correctas que ha obtenido,
y sabiendo que:
	Nivel m�ximo:	Porcentaje>=90%.
	Nivel medio:	Porcentaje>=75% y <90%.
	Nivel regular:	Porcentaje>=50% y <75%.
	Fuera de nivel:	Porcentaje<50%.*/

#include<iostream>

using namespace std;

int main()
{
    int totalPreguntas, totalCorrectas;

    cout << "Ingrese la cantidad total de preguntas del examen: ";
    cin >> totalPreguntas;
    cout << "Ingrese la cantidad total de preguntas contestadas correctamente: ";
    cin >> totalCorrectas;

    int porcentaje = totalCorrectas * 100 / totalPreguntas;

    if (porcentaje >= 90)
    {
        cout << "Nivel m�ximo";
    }
    else
    {
        if (porcentaje >= 75)
        {
            cout << "Nivel medio";
        }
        else
        {
            if (porcentaje >= 50)
            {
                cout << "Nivel regular";
            }
            else
            {
                cout << "Fuera de nivel";
            }
        }
    }

    return 0;
}