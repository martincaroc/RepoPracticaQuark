#include<iostream>

using namespace std;
int main()
{
    int x, cantpersonas, cantsueldomayor, cantsueldomenor;
    float promedio, sueldo, sumasueldo;
    x = 1;
    cantpersonas = 0;
    cantsueldomayor = 0;
    cantsueldomenor = 0;
    sumasueldo = 0;
    cout << "Ingrese cantidad de empleados a procesar: ";
    cin >> cantpersonas;
    while (x <= cantpersonas)
    {
        cout << "Ingrese el sueldo del empleado: ";
        cin >> sueldo;
        sumasueldo = sumasueldo + sueldo;
        if (sueldo > 300)
        {
            cantsueldomayor = cantsueldomayor + 1;
        }
        else
        {
            if (sueldo >= 100)
            {
                cantsueldomenor = cantsueldomenor + 1;
            }
        }
        x = x + 1;
    }
    cout << "\n";
    cout << "La cantidad de empleados que cobran un sueldo mayor a $300 son: ";
    cout << cantsueldomayor;
    cout << "\n";
    cout << "La cantidad de empleados que cobran un sueldo entre $100 y $300 son: ";
    cout << cantsueldomenor;
    cout << "\n";
    cout << "El importe total de sueldos erogado por la empresa es de: ";
    cout << sumasueldo;
    return 0;
}