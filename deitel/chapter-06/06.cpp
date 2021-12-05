// Uso de un motor de generación de números aleatorios y una distribución
// de C++11 para tirar un dado con seis lados.
#include <iostream>
#include <iomanip>
#include <random> // contiene herramientas de generación de números aleatorios de C++11
#include <ctime>
using namespace std;

int main()
{
	// usa el motor de generación de números aleatorios predeterminado para
	// producir valores int seudoaleatorios del 1 al 6, distribuidos de manera uniforme
	default_random_engine motor( static_cast<unsigned int>( time( 0 ) ) );
	uniform_int_distribution<unsigned int> intAleatorio( 1, 6 );

	// itera 10 veces
	for ( unsigned int contador = 1; contador <= 10; ++contador )
	{
		// elije un número aleatorio del 1 al 6 y lo imprime
		cout << setw( 10 ) << intAleatorio( motor );

		// si contador es divisible entre 5, comienza una nueva línea de salida
		if ( contador % 5 == 0 )
		{
			cout << endl;
		}
	} // fin de for
} // fin de main
