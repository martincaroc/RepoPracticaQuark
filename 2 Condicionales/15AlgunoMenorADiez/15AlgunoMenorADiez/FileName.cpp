#include<iostream>

using namespace std;

int main()
{
    int num1, num2, num3;
    cout << "Ingrese primer valor:";
    cin >> num1;
    cout << "Ingrese segundo valor:";
    cin >> num2;
    cout << "Ingrese tercer valor:";
    cin >> num3;
    if (num1 < 10 || num2 < 10 || num3 < 10)
    {
        cout << "Alguno de los números es menor a diez";
    }
    return 0;
}