#include<iostream>

using namespace std;

int main()
{
    int num;
    cout << "Ingrese un valor entero de 1 o 2 d�gitos:";
    cin >> num;
    if (num < 10)
    {
        cout << "Tiene un d�gito";
    }
    else
    {
        cout << "Tiene dos d�gitos";
    }
    return 0;
}