#include <iostream>
using namespace std;

class PruebaVector2
{
private:
	float altura[5];
public:
	void ingresarDatos();
	float obtenerPromedio();
	void cuantosAltoBajos();
};

void PruebaVector2::ingresarDatos()
{
	for (int f = 0; f < 5; f++)
	{
		cout << "Ingrese la altura: ";
		cin >> altura[f];
	}
}

float PruebaVector2::obtenerPromedio()
{
	int suma=0;
	float promedio;
	for (int f = 0; f < 5; f++)
	{
		suma = suma + altura[f];
	}
	promedio = suma / 5;
	return promedio;
}

void PruebaVector2::cuantosAltoBajos()
{
	int min = 0, max = 0;
	float promedio=obtenerPromedio();
	for (int f = 0; f < 5; f++)
	{
		if (altura[f]<promedio)
		{
			min++;
		}
		if (altura[f]>promedio)
		{
			max++;
		}
	}
	cout << "El promedio es de: " << promedio << endl;
	cout << "El número de personas más altas que el promedio es de: " << max << endl;
	cout << "El número de personas más altas que el promedio es de: " << min << endl;
}

int main()
{
	PruebaVector2 vector1;
	vector1.ingresarDatos();
	vector1.obtenerPromedio();
	vector1.cuantosAltoBajos();
	return 0;
}