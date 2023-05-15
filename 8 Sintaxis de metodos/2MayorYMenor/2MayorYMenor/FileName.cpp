#include <iostream>
using namespace std;

class MayorMenor
{
private:
	int calcularMayor(int num1, int num2, int num3);
	int calcularMenor(int num1, int num2, int num3);
public:
	void cargarValor();
};
int MayorMenor::calcularMayor(int num1, int num2, int num3)
{
	int mayor;
	if (num1 > num2 && num1 > num3)
	{
		mayor = num1;
	}
	else
	{
		if (num2>num3)
		{
			mayor = num2;
		}
		else
		{
			mayor = num3;
		}
	}
	return mayor;
}
int MayorMenor::calcularMenor(int num1, int num2, int num3)
{
	int menor;
	if (num1 < num2 && num1 < num3)
	{
		menor = num1;
	}
	else
	{
		if (num2 < num3)
		{
			menor = num2;
		}
		else
		{
			menor = num3;
		}
	}
	return menor;
}
void MayorMenor::cargarValor()
{
	int num1, num2, num3;
	cout << "Ingrese el primer valor ";
	cin >> num1;
	cout << "Ingrese el segundo valor ";
	cin >> num2;
	cout << "Ingrese el tercer valor ";
	cin >> num3;

	cout << "El mayor es: " << calcularMayor(num1, num2, num3) << endl;
	cout << "El menor es: " << calcularMenor(num1, num2, num3) << endl;
}

int main()
{
	MayorMenor mayormenor1;
	mayormenor1.cargarValor();
	return 0;
}