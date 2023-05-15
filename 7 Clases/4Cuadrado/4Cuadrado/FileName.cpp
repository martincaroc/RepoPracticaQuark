#include <iostream>
using namespace std;

class Cuadrado
{
private:
	int lado;
public:
	void inicializar();
	void perimetroYSuperficie();
};

void Cuadrado::inicializar()
{
	cout << "Ingresar el lado del cuadrado: ";
	cin >> lado;
}

void Cuadrado::perimetroYSuperficie()
{
	cout << "El perimetro es de: " << lado * 4 << "\n";
	cout << "La superficie es de: " << lado * 2 << "\n";
}

int main()
{
	Cuadrado cuadrado1;
	cuadrado1.inicializar();
	cuadrado1.perimetroYSuperficie();
	return 0;
}