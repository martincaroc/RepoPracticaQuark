#include <iostream>
using namespace std;

int main()
{
	int f, cantidadNegativos, cantidadPositivos, cantidadMultiplos15, sumaPares,valor;
	cantidadMultiplos15 = 0;
	cantidadNegativos = 0;
	cantidadPositivos = 0;
	sumaPares = 0;

	for (f = 1; f <= 10; f++)
	{
		cout << "Ingrese un valor, positivo o negativo ";
		cin >> valor;

		if (valor>0)
		{
			cantidadPositivos++;
		}
		else
		{
			cantidadNegativos++;
		}
		if (valor%15==0)
		{
			cantidadMultiplos15++;
		}
		if (valor % 2 == 0)
		{
			sumaPares = sumaPares + valor;
		}
	}
	cout<<"La cantidad de valores positivos es de: "<< cantidadPositivos <<"\n";
	cout <<"La cantidad de valores negativos es de "<< cantidadNegativos <<"\n";
	cout << "La cantidad de multiplos de 15 es de: " << cantidadMultiplos15 << "\n";
	cout << "La suma de los valores Par es de: " << sumaPares << "\n";
	return 0;

}