#include <iostream>
using namespace std;

class TablaMultiplicar
{
private:
	void calcular(int v);
public:
	void cargarValor();
};
void TablaMultiplicar::calcular(int v)
{
	for (int f = 1; f <= 10; f++)
	{
		cout << f << "*" << v << "=" << f * v << endl;
	}
}
void TablaMultiplicar::cargarValor()
{
	int valor;
	do
	{
		cout << "Ingrese un numero. -1 para finalizar ";
		cin >> valor;
		if (valor != -1)
		{
			calcular(valor);
		}
	} while (valor!=-1);
}
int main()
{
	TablaMultiplicar tabla1;
	tabla1.cargarValor();
	return 0;
}