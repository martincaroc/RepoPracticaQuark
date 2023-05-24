#include <iostream>
using namespace std;

class PersonasEdades
{
private:
	char nombres[5][40];
	int edades[5];
public:
	void cargarDatos();
	void mostrarMayoresDeEdad();
};

void PersonasEdades::cargarDatos()
{
	for (int f = 0; f < 5; f++)
	{
		cout << "Ingrese el nombre ";
		cin.getline(nombres[f],40);
		cin.get();
		cout << "Ingrese la edad ";
		cin >> edades[f];
		cin.get();
	}
}

void PersonasEdades::mostrarMayoresDeEdad()
{
	for (int f = 0; f < 5; f++)
	{
		if (edades[f]>=18)
		{
			cout << nombres[f] << " es mayor de edad " << edades[f] << endl;
		}
	}
}

int main()
{
	PersonasEdades personasEdades1;
	personasEdades1.cargarDatos();
	personasEdades1.mostrarMayoresDeEdad();
	return 0;
}