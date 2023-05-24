#include<iostream>
using namespace std;

class Kiosco
{
private:
	char productos[5][40];
	float precios[5];
public:
	void cargarDatos();
	void precioMayorPrimero();
};

void Kiosco::cargarDatos()
{
	for (int f = 0; f < 5; f++)
	{
		cout << "Ingrese el nombre del producto ";
		cin.getline(productos[f],40);
		cin.get();
		cout << "Ingrese el precio del producto ";
		cin >> precios[f];
		cin.get();
	}
}

void Kiosco::precioMayorPrimero()
{
	int cantMayor=0;
	for (int f = 1; f < 5; f++)
	{
		if (precios[0]<precios[f])
		{
			cantMayor++;
		}
	}
	cout << "La cantidad de productos mayores al primero es: " << cantMayor;
}

int main()
{
	Kiosco kiosco1;
	kiosco1.cargarDatos();
	kiosco1.precioMayorPrimero();
	return 0;
}