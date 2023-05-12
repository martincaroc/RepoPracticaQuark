#include <iostream>
using namespace std;

int main()
{
	int f, suma, valor;
	suma = 0;
	for (f = 0; f < 11; f++)
	{
		cout << "Ingrese un valor";
		cin >> valor;

		if (f>5)
		{
			suma = suma + valor;
		}
	}
	cout << "La suma de los últimos 5 valores es de: ";
	cout << suma;
	return 0;
}