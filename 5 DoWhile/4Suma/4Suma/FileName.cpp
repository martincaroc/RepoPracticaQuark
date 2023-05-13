#include<iostream>

using namespace std;

int main()
{
    int suma, valor;
    suma = 0;
    do {
        cout << "Ingrese un valor:";
        cin >> valor;
        if (valor != 9999)
        {
            suma = suma + valor;
        }
    } while (valor != 9999);
    cout << "El valor acumulado es ";
    cout << suma;
    cout << "\n";
    if (suma == 0)
    {
        cout << "El valor acumulado es cero.";
    }
    else
    {
        if (suma > 0)
        {
            cout << "El valor acumulado es positivo.";
        }
        else
        {
            cout << "El valor acumulado es negativo";
        }
    }
    return 0;
}