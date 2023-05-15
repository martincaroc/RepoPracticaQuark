#include <iostream>
using namespace std;

class Triangulo
{
private:
	int lado1, lado2, lado3;
public:
	void inicializar();
	void mostrarLadoMayor();
	void esEquilatero();
};

void Triangulo::inicializar()
{
	cout << "Ingrese el primer lado del triangulo: ";
	cin >> lado1;
	cout << "Ingrese el segundo lado: ";
	cin >> lado2;
	cout << "Ingrese el tercer lado: ";
	cin >> lado3;
}

void Triangulo::mostrarLadoMayor()
{
	cout << "Lado mayor:";
	if (lado1 > lado2 && lado1 > lado3)
	{
		cout << lado1;
	}
	else
	{
		if (lado2 > lado3)
		{
			cout << lado2;
		}
		else
		{
			cout << lado3;
		}
	}
	cout << "\n";
}

void Triangulo::esEquilatero()
{
	if (lado1==lado2&&lado2==lado3)	
	{
		cout << " Es Equilatero";
	}
	else
	{
		cout << " No es equilatero";
	}
}

int main()
{
	Triangulo triangulo1;
	triangulo1.inicializar();
	triangulo1.mostrarLadoMayor();
	triangulo1.esEquilatero();
	return 0;
}