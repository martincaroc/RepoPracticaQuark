#include<iostream>

using namespace std;

int main()
{
    int totalPreguntas, totalCorrectas;
    cout << "Ingrese la cantidad total de preguntas del examen:";
    cin >> totalPreguntas;
    cout << "Ingrese la cantidad total de preguntas contestadas correctamente:";
    cin >> totalCorrectas;
    int porcentaje = totalCorrectas * 100 / totalPreguntas;
    if (porcentaje >= 90)
    {
        cout << "Nivel máximo";
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