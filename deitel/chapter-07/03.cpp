// Establece el arreglo s con los enteros pares del 2 al 10.
#include <iostream>
#include <iomanip>
#include <array>
using namespace std;

int main()
{
	// la variable constante se puede usar para especificar el tamaño de los arreglos
	const size_t tamagnoArreglo = 5;		// debe inicializarse en la declaración

	array< int, tamagnoArreglo > s;			// el arreglo s tiene 5 elementos

	for ( size_t i = 0; i < s.size(); ++i)	// establece los valores
	{
		s[ i ] = 2 + 2 * i;
	}

	cout << "Elemento" << setw( 14 ) << "Valor" << endl;

	// imprime el contenido del arreglo s en formato tabular
	for ( size_t j = 0; j < s.size(); ++j )
	{
		cout << setw( 8 ) << j << setw( 14 ) << s[ j ] << endl;
	}
} // fin de main
