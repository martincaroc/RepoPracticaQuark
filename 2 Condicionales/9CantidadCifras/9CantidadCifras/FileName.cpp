#include<iostream>

using namespace std;

int main()
{
    int num;
    cout << "Ingrese un valor de hasta tres d�gitos positivo:";
    cin >> num;
    if (num < 10)
    {
        cout << "Tiene un d�gito";
    }
    else
    {
        if (num < 100)
        {
            cout << "Tiene dos d�gitos";
        }
        else
        {
            if (num < 1000)
            {
                cout << "Tiene tres d�gitos";
            }
            else
            {
                cout << "Error en la entrada de datos.";
            }
        }
    }
    return 0;
}