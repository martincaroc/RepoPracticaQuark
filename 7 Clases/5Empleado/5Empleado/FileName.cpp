#include <iostream>
using namespace std;

class Empleado
{
private:
	char nombre[40];
	float sueldo;
public:
	void carga();
	void imprimir();
	void debeImpuesto();
};
void Empleado::carga()
{
	cout << "Ingrese el nombre: ";
	cin.getline(nombre, 40);
	cout << "Ingrese el sueldo: ";
	cin >> sueldo;
}
void Empleado::imprimir()
{
	cout << "Nombre: " << nombre << "\n";
	cout << "Sueldo: " << sueldo << "\n";
}
void Empleado::debeImpuesto()
{
	if (sueldo>3000)
	{
		cout << "El empleado debe pagar impuestos";
	}
}
int main()
{
	Empleado empleado1;
	empleado1.carga();
	empleado1.imprimir();
	empleado1.debeImpuesto();
	return 0;
}