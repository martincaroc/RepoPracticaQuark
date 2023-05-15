#include <iostream>
using namespace std;

class ListaEnteros
{
private:
	void mostrarLista(int num1);
public:
	void ingresarDatos();
};
void ListaEnteros::mostrarLista(int num1)
{
	for (int f = 1; f <= num1; f++)
	{
		cout << f << " - ";
	}
}
void ListaEnteros::ingresarDatos()
{
	int num1;
	cout << "Ingrese el numero con el que desea hacer una lista ";
	cin >> num1;
	mostrarLista(num1);
}
int main()
{
	ListaEnteros lista1;
	lista1.ingresarDatos();
	return 0;
}