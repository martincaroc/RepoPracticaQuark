#include<iostream>

using namespace std;

int main()
{
    int x, termino;
    x = 1;
    termino = 11;
    while (x <= 25)
    {
        cout << termino;
        cout << " - ";
        x = x + 1;
        termino = termino + 11;
    }
    return 0;
}