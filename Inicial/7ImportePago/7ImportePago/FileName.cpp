#include<iostream>

using namespace std;

int main()
{
    int cantidad;
    float precio, importe;
    cout << "Ingrese la cantidad de artículos a llevar:";
    cin >> cantidad;
    cout << "Ingrese el valor unitario del producto:";
    cin >> precio;
    importe = precio * cantidad;
    cout << "El importe total a pagar es:";
    cout << importe;
    return 0;
}