#include <iostream>
using namespace std;

class Operaciones
{
private:
	int num1, num2;
public:
	void inicializar();
	void sumar();
	void restar();
	void multiplicar();
	void dividir();
};
void Operaciones::inicializar()
{
	cout << "Ingrese el primer numero ";
	cin >> num1;
	cout << "Ingrese el segundo numero ";
	cin >> num2;
}
void Operaciones::sumar()
{
	int suma;
	suma = num1 + num2;
	cout << "suma ";
	cout << suma;
	cout << "\n";
}
void Operaciones::restar()
{
	int resta;
	resta = num1 + num2;
	cout << "restar ";
	cout << resta;
	cout << "\n";
}
void Operaciones::multiplicar()
{
	int mult;
	mult = num1 * num2;
	cout << "multiplicar ";
	cout << mult;
	cout << "\n";
}
void Operaciones::dividir()
{
	float dividir;
	dividir = num1 / num2;
	cout << "dividir ";
	cout << dividir;
	cout << "\n";
}
int main()
{
	Operaciones operacion1;
	operacion1.inicializar();
	operacion1.sumar();
	operacion1.restar();
	operacion1.dividir();
	operacion1.multiplicar();
	return 0;
}