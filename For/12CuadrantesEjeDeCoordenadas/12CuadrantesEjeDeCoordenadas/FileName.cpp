#include <iostream>
using namespace std;

int main()
{
	int f, x, y,cantidadDatos;
	int cuadranteI = 0, cuadranteII = 0, cuadranteIII = 0, cuadranteIV = 0;

	cout << "Ingrese la cantidad de Datos ";
	cin >> cantidadDatos;
	for (f = 0; f < cantidadDatos; f++)
	{
		cout << "Ingrese el valor de x";
		cin >> x;
		cout << "Ingrese el valor de y";
		cin >> y;
		if (x<0 && y<0)
		{
			cuadranteI++;
		}
		else
		{
			if (x>0 && y<0)
			{
				cuadranteII++;
			}
			else
			{
				if (x>0 && y>0)
				{
					cuadranteIII++;
				}
				else
				{
					cuadranteIV++;
				}
			}
		}
	}

	cout << "La cantidad de valores en el cuadrante I es de: ";
	cout << cuadranteI << "\n";
	cout << "La cantidad de valores en el cuadrante II es de: ";
	cout << cuadranteII << "\n";
	cout << "La cantidad de valores en el cuadrante III es de: ";
	cout << cuadranteIII<<"\n";
	cout << "La cantidad de valores en el cuadrante IV es de: ";
	cout << cuadranteIV << "\n";
}