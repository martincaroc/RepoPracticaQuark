#include <iostream>
using namespace std;

int main()
{
	int f, valor, suma,cant;
	float promedio;
	suma = 0;
	cant = 0;

	do
	{
		cout << "Ingrese un numero. 0 para finalizar ";
		cin >> valor;
		if (valor!=0)
		{
			cant++;
			suma = suma + valor;
		}
	} while (valor!=0);
	if (cant!=0)
	{
		promedio = suma / valor;
		cout << "El promedio es de: " << promedio;
	}
	else
	{
		cout << "No se ingresaron numeros";
	}
}