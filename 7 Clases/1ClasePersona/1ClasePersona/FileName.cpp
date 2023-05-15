#include <iostream>
using namespace std;

class Persona
{
public:
	void inicializar();
	void imprimir();
	void esMayorEdad();

private:
	char nombre[40];
	int edad;

};

void Persona::inicializar()
{
	cout << "Ingrese nombre: ";
	cin.getline(nombre, 40);
	cout << "Ingrese edad: ";
	cin >> edad;
}

void Persona::imprimir() 
{
	cout << "Nombre: "<<nombre<<"\n";
	cout << "Edad: " << edad << "\n";
}

void Persona::esMayorEdad()
{
	if (edad>18)
	{
		cout << "Es mayor de edad";
	}
	else
	{
		cout << "No es mayor de edad";
	}
	cin.get();
}

int main()
{
	Persona persona1,persona2;

	persona1.inicializar();
	cin.get();
	persona1.imprimir();
	persona1.esMayorEdad();

	persona2.inicializar();
	cin.get();
	persona2.imprimir();
	persona2.esMayorEdad();

	return 0;
}