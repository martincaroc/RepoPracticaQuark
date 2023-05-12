#include<iostream>

using namespace std;

int main()
{
    int aprobados, reprobados, f, nota;
    aprobados = 0;
    reprobados = 0;
    for (f = 1; f <= 10; f++)
    {
        cout << "Ingrese la nota:";
        cin >> nota;
        if (nota >= 7)
        {
            aprobados = aprobados + 1;
        }
        else
        {
            reprobados = reprobados + 1;
        }
    }
    cout << "Cantidad de aprobados:";
    cout << aprobados;
    cout << "\n";
    cout << "Cantidad de reprobados:";
    cout << reprobados;
    return 0;
}