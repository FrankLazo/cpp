// Función iterativa factorial.
#include <iostream>
#include <iomanip>
using namespace std;

unsigned long factorial( unsigned int ); // prototipo de la función

int main()
{
	// calcula los factoriales del 0 al 10
	for ( unsigned int contador = 0; contador <= 10; ++contador )
	{
		cout << setw( 2 ) << contador << "! = " << factorial( contador )
			<< endl;
	}
} // fin de main

// función factorial iterativa
unsigned long factorial( unsigned int numero )
{
	unsigned long resultado = 1;

	// cálculo iterativo del factorial
	for ( unsigned int i = numero; i >= 1; --i)
	{
		resultado *= i;
	}

	return resultado;
} // fin de la función factorial
