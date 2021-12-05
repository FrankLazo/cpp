// Función recursiva factorial.
#include <iostream>
#include <iomanip>
using namespace std;

unsigned long factorial( unsigned long ); // prototipo de la función

int main()
{
	// calcula los factoriales del 0 al 10
	for ( unsigned int contador = 0; contador <= 10; ++contador )
	{
		cout << setw( 2 ) << contador << "! = " << factorial( contador )
			<< endl;
	}
} // fin de main

// definición recursiva de la función factorial
unsigned long factorial( unsigned long numero )
{
	if ( numero <= 1)	// evalúa el caso base
	{
		return 1;		// casos base: 0! = 1 y 1! = 1
	}
	else				// paso recursivo
	{
		return numero * factorial( numero - 1 );
	}
} // fin de la función factorial
