#include<iostream>

using namespace std;

int main()
{
    int suma, f, valor, promedio;
    suma = 0;
    for (f = 1; f <= 10; f++)
    {
        cout << "Ingrese valor:";
        cin >> valor;
        suma = suma + valor;
    }
    cout << "La suma es:";
    cout << suma;
    cout << "\n";
    promedio = suma / 10;
    cout << "El promedio es:";
    cout << promedio;
    return 0;
}