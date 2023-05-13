#include <iostream>
using namespace std;

int main()
{
	int f, valor;
	cout << "Ingrese un valor entre 1 y 10 ";
	cin >> valor;
	if (valor>0 && valor<11)
	{
		for (f = 1; f <= 12; f++)
		{
			cout << f * valor; 
			cout << " - ";
		}
	}
	else
	{
		cout << "El numero ingresado no es valido, por favor ingresar un numero entre 1 y 10";
	}
	return 0;
}