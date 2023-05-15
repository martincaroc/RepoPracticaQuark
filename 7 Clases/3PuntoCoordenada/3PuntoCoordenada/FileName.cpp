#include <iostream>
using namespace std;

class Punto {
private:
	int x, y;
public:
	void inicializar();
	void mostrarCuadrante();
};
void Punto::inicializar()
{
	cout << "Ingresar el punto x: ";
	cin >> x;
	cout << "Ingresar el punto y: ";
	cin >> y;
}
void Punto::mostrarCuadrante()
{
	if (x>0 && y>0)
	{
		cout << "Se encuentra en el primer cuadrante";
	}
	else
	{
		if (x<0 && y>0)
		{
			cout << "Se encuentra en el segundo cuadrante";
		}
		else
		{
			if (x<0 && y<0)
			{
				cout << "Se encuentra en el tercer cuadrante";
			}
			else
			{
				if (x > 0 && y < 0)
				{
					cout << "Se encuentra en el cuarto cuadrante.";
				}
				else
				{
					cout << "El punto no está en un cuadrante.";
				}
			}
		}
	}
	cout << "\n";
}
int main()
{
	Punto punto1;
	punto1.inicializar();
	punto1.mostrarCuadrante();
	return 0;
}