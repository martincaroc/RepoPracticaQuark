#include <iostream>
using namespace std;

class Mayor
{
private:
	int mostrarMayor(int num1, int num2);
public:
	void ingresarValor();
};
int Mayor::mostrarMayor(int num1, int num2)
{
	int mayor;
	if (num1>num2)
	{
		mayor = num1;
	}
	else
	{
		mayor = num2;
	}
	return mayor;
}
void Mayor::ingresarValor()
{
	int num1, num2;
	cout << "Ingrese el primer numero ";
	cin >> num1;
	cout << "Ingrese el segundo numero ";
	cin >> num2;
	cout<<"El mayor de los dos numeros es: "<<mostrarMayor(num1, num2);
}
int main()
{
	Mayor mayor1;
	mayor1.ingresarValor();
	return 0;
}