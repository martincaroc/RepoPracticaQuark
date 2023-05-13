#include<iostream>

using namespace std;

int main()
{
    int x, cantidad, n;
    float largo;
    x = 1;
    cantidad = 0;
    cout << "Cuantas piezar procesará:";
    cin >> n;
    while (x <= n)
    {
        cout << "Ingrese la medida de la pieza:";
        cin >> largo;
        if (largo >= 1.20 && largo <= 1.30)
        {
            cantidad = cantidad + 1;
        }
        x = x + 1;
    }
    cout << "La cantidad de piezas aptas son:";
    cout << cantidad;
    return 0;
}