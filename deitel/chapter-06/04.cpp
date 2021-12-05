// Randomización del programa para tirar dados.
#include <iostream>
#include <iomanip>
#include <cstdlib> // contiene los prototipos para las funciones srand y rand
using namespace std;

int main()
{
	unsigned int semilla = 0;	// almacena la semilla introducida por el usuario

	cout << "Introduzca la semilla: ";
	cin >> semilla;
	srand( semilla );			// siembra el generador de números aleatorios

	// itera 10 veces
	for ( unsigned int contador = 1; contador <= 10; ++contador )
	{
		// elije un número aleatorio entre 1 y 6, y lo imprime
		cout << setw( 10 ) << (1 + rand() % 6 );

		// si contador puede dividirse entre 5, empieza una nueva línea de salida
		if ( contador % 5 == 0 )
		{
			cout << endl;
		}
	} // fin de for
} // fin de main
