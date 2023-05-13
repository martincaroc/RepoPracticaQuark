#include<iostream>

using namespace std;

int main()
{
    int n, x;
    cout << "Ingrese el valor final:";
    cin >> n;
    x = 1;
    while (x <= n)
    {
        cout << x;
        cout << " - ";
        x = x + 1;
    }
    return 0;
}