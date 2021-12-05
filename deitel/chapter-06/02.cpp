// Enteros desplazados y escalados, producidos por 1 + rand() % 6.
#include <iostream>
#include <iomanip>
#include <cstdlib> // contiene el prototipo de función para rand
using namespace std;

int main()
{
	// itera 20 veces
	for ( unsigned int contador = 1; contador <= 20; ++contador )
	{
		// elije un número aleatorio de 1 a 6 y lo imprime
		cout << setw( 10 ) << ( 1 + rand() % 6 );

		// si contador puede dividirse entre 5, empieza una nueva línea de salida
		if ( contador % 5 == 0 )
		{
			cout << endl;
		}
	} // fin de for
} // fin de main
