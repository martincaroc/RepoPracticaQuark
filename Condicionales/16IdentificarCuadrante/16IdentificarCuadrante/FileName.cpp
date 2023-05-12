#include<iostream>

using namespace std;

int main()
{
    int x, y;
    cout << "Ingrese coordenada x:";
    cin >> x;
    cout << "Ingrese coordenada y:";
    cin >> y;
    if (x > 0 && y > 0)
    {
        cout << "Se encuentra en el primer cuadrante";
    }
    else
    {
        if (x < 0 && y > 0)
        {
            cout << "Se encuentra en el segundo cuadrante";
        }
        else
        {
            if (x < 0 && y < 0)
            {
                cout << "Se encuentra en el tercer cuadrante";
            }
            else
            {
                cout << "Se encuentra en el cuarto cuadrante";
            }
        }
    }
    return 0;
}