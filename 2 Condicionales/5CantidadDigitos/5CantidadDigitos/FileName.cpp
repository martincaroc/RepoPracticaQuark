#include<iostream>

using namespace std;

int main()
{
    int num;
    cout << "Ingrese un valor entero de 1 o 2 dígitos:";
    cin >> num;
    if (num < 10)
    {
        cout << "Tiene un dígito";
    }
    else
    {
        cout << "Tiene dos dígitos";
    }
    return 0;
}