// Cálculo del interés compuesto con for.
#include <iostream>
#include <iomanip>
#include <cmath> // biblioteca de matemáticas estándar
using namespace std;

int main()
{
	double monto;				// monto a depositar al final de cada año
	double principal = 10000.0;	// monto inicial antes del interés
	double tasa = .05;			// tasa de interés anual

	// muestra los encabezados
	cout << "Anio" << setw( 21 ) << "Monto en deposito" << endl;

	// establece el formato de número de punto flotante
	cout << fixed << setprecision( 2 );

	// calcula el monto en depósito para cada uno de los diez años
	for ( unsigned int anio = 1; anio <= 10; ++anio )
	{
		// calcula el nuevo monto para el año especificado
		monto = principal * pow( 1.0 + tasa, anio );

		// muestra el año y el monto
		cout << setw( 4 ) << anio << setw( 21 ) << monto << endl; // muestra los resultados
	} // fin de for
} // fin de main
