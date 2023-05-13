#include<iostream>

using namespace std;

int main()
{
    int cantPesadas, cantIntermedios, cantLivianas, sumaTotal;
    float peso;
    cantPesadas = 0;
    cantIntermedios = 0;
    cantLivianas = 0;
    do {
        cout << "Ingrese el peso de la pieza (0 pera finalizar):";
        cin >> peso;
        if (peso > 10.2)
        {
            cantPesadas++;
        }
        else
        {
            if (peso >= 9.8)
            {
                cantIntermedios++;
            }
            else
            {
                if (peso > 0)
                {
                    cantLivianas++;
                }
            }
        }
    } while (peso != 0);
    sumaTotal = cantPesadas + cantIntermedios + cantLivianas;
    cout << "Piezas aptas:";
    cout << cantIntermedios;
    cout << "\n";
    cout << "Piezas con un peso superior a 10.2:";
    cout << cantPesadas;
    cout << "\n";
    cout << "Piezas con un peso inferior a 9.8:";
    cout << cantLivianas;
    return 0;
}