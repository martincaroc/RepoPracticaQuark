#include<iostream>

using namespace std;

int main()
{
    int dia, mes, a�o;
    cout << "Ingrese nro de d�a:";
    cin >> dia;
    cout << "Ingrese nro de mes:";
    cin >> mes;
    cout << "Ingrese nro de a�o:";
    cin >> a�o;
    if (mes == 12 && dia == 25)
    {
        cout << "La fecha ingresada corresponde a navidad.";
    }
    return 0;
}