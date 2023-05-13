#include <iostream>
using namespace std;

int main()
{
	int f, turnoManana, turnoTarde, turnoNoche, sumaEdadTurnoManana, sumaEdadTurnoTarde, sumaEdadTurnoNoche, edad;
	float promedioManana, promedioTarde, promedioNoche;

	turnoManana = 5;
	turnoTarde = 6;
	turnoNoche = 11;
	sumaEdadTurnoManana = 0;
	sumaEdadTurnoTarde = 0;
	sumaEdadTurnoNoche = 0;

	for (int f = 1; f <= turnoManana; f++)
	{
		cout << "Ingrese la edad del alumno";
		cin >> edad;
		sumaEdadTurnoManana = sumaEdadTurnoManana + edad;
	}
	promedioManana = sumaEdadTurnoManana / turnoManana;

	for (int f = 1; f <= turnoTarde; f++)
	{
		cout << "Ingrese la edad del alumno";
		cin >> edad;
		sumaEdadTurnoTarde = sumaEdadTurnoTarde + edad;
	}
	promedioTarde = sumaEdadTurnoTarde / turnoTarde;

	for (int f = 1; f <= turnoNoche; f++)
	{
		cout << "Ingrese la edad del alumno";
		cin >> edad;
	}
	promedioNoche = sumaEdadTurnoNoche / turnoNoche;

	cout << "El promedio del turno manana es de: "<<promedioManana;
	cout << "El promedio del turno tarde es de: "<<promedioTarde;
	cout << "El promedio del turno noche es de: "<<promedioNoche;

	if (promedioManana<promedioTarde)
	{
		if (promedioManana<promedioNoche)
		{
			cout << "El turno manana tiene el menor promedio";
		}
		else
		{
			cout << "El turno noche tiene el menor promedio";
		}
	}
	else
	{
		if (promedioTarde<promedioNoche)
		{
			cout << "El turno tarde tiene el menor promedio";
		}
		else
		{
			cout << "El Turno noche tiene el menor promedio";
		}
	}
	return 0;
}