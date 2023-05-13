#include<iostream>

using namespace std;

int main()
{
    int basetri, altura, superficie, cantidad, f, n;
    cantidad = 0;
    cout << "Cuantos triángulos procesará:";
    cin >> n;
    for (f = 1; f <= n; f++)
    {
        cout << "Ingrese el valor de la base:";
        cin >> basetri;
        cout << "Ingrese el valor de la altura:";
        cin >> altura;
        superficie = basetri * altura / 2;
        cout << "La superficie es:";
        cout << superficie;
        cout << "\n";
        if (superficie > 12)
        {
            cantidad = cantidad + 1;
        }
    }
    cout << "La cantidad de triángulos con superficie superior a 12 son:";
    cout << cantidad;
    return 0;
}