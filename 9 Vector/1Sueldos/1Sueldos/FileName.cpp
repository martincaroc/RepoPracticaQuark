#include <iostream>
using namespace std;

class PruebaVector
{
private:
	int sueldos[5];
public:
	void ingresar();
	void imprimir();
};

void PruebaVector::ingresar()
{
	for (int f = 0; f < 5; f++)
	{
		cout << "Ingrese el sueldo del empleado ";
		cin >> sueldos[f];
	}
}
void PruebaVector::imprimir()
{
	for (int f = 0; f <= 4; f++)
	{
		cout << "Sueldos: " << sueldos[f] << endl;
	}
}
int main()
{
	PruebaVector vector1;
	vector1.ingresar();
	vector1.imprimir();
	return 0;
}