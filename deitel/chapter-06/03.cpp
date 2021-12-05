// Tiro de un dado de seis lados 6 000 000 veces.
#include <iostream>
#include <iomanip>
#include <cstdlib> // contiene el prototipo de función para rand
using namespace std;

int main()
{
	unsigned int frecuencia1 = 0;	// cuenta las veces que se tiró 1
	unsigned int frecuencia2 = 0;	// cuenta las veces que se tiró 2
	unsigned int frecuencia3 = 0;	// cuenta las veces que se tiró 3
	unsigned int frecuencia4 = 0;	// cuenta las veces que se tiró 4
	unsigned int frecuencia5 = 0;	// cuenta las veces que se tiró 5
	unsigned int frecuencia6 = 0;	// cuenta las veces que se tiró 6

	// sintetiza los resultados de tirar un dado 6 000 000 veces
	for ( unsigned int tiro = 1; tiro <= 6000000; ++tiro )
	{
		unsigned int cara = 1 +  rand() % 6;	// número aleatorio del 1 al 6

		// determina el valor del tiro de 1 a 6 e incrementa el contador apropiado
		switch ( cara )
		{
			case 1:
				++frecuencia1;	// incrementa el contador de 1
				break;

			case 2:
				++frecuencia2;	// incrementa el contador de 2
				break;

			case 3:
				++frecuencia3;	// incrementa el contador de 3
				break;

			case 4:
				++frecuencia4;	// incrementa el contador de 4
				break;

			case 5:
				++frecuencia5;	// incrementa el contador de 5
				break;

			case 6:
				++frecuencia6;	// incrementa el contador de 6
				break;

			default:			// valor inválido
				cout << "El programa nunca debio llegar aqui!";
		} // fin de switch
	} // fin de for

	cout << "Cara" << setw( 13 ) << "Frecuencia" << endl;	// imprime encabezados
	cout << "   1" << setw( 13 ) << frecuencia1
	   << "\n   2" << setw( 13 ) << frecuencia2
	   << "\n   3" << setw( 13 ) << frecuencia3
	   << "\n   4" << setw( 13 ) << frecuencia4
	   << "\n   5" << setw( 13 ) << frecuencia5
	   << "\n   6" << setw( 13 ) << frecuencia6 << endl;
} // fin de main
