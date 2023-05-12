#include<iostream>

using namespace std;

int main()
{
    int n, x, valor, pares, impares;
    x = 1;
    pares = 0;
    impares = 0;
    cout << "Cuantos numeros ingresara:";
    cin >> n;
    while (x <= n)
    {
        cout << "Ingrese el valor:";
        cin >> valor;
        if (valor % 2 == 0)
        {
            pares = pares + 1;
        }
        else
        {
            impares = impares + 1;
        }
        x = x + 1;
    }
    cout << "Cantadad de pares:";
    cout << pares;
    cout << "\n";
    cout << "Cantidad de impares:";
    cout << impares;
    return 0;
}