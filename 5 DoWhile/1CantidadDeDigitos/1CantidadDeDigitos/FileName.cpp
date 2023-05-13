#include <iostream>
using namespace std;

int main()
{
	int valor, f;
	do
	{
		cout << "Ingrese un valor entre 0 y 999 ";
		cin >> valor;
		if (valor > 100)
		{
			cout << "El valor ingresado tiene 3 digitos" << "\n";
		}
		else
		{
			if (valor>10)
			{
				cout << "El valor ingresado tiene 2 digitos" << "\n";
			}
			else
			{
				cout << "El valor ingresado tiene 1 digito"<<"\n";
			}
		}
	} while (valor!=0);
	return 0;
}