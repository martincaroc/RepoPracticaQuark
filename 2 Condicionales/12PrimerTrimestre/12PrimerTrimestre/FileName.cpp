#include<iostream>

using namespace std;

int main()
{
    int dia, mes, a�o;
    cout << "Ingrese nro de dia:";
    cin >> dia;
    cout << "Ingrese nro de mes:";
    cin >> mes;
    cout << "Ingrese nro de a�o:";
    cin >> a�o;
    if (mes == 1 || mes == 2 || mes == 3)
    {
        cout << "Corresponde al primer trimestre";
    }
    return 0;
}