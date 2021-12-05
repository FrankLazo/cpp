/*
 * Un jugador tira dos dados. Cada dado tiene seis caras, las cuales contienen 1, 2, 3, 4, 5 y 6 puntos negros.
 * Una vez que los dados dejan de moverse, se calcula la suma de los puntos negros en las dos caras superiores.
 * Si la suma es 7 u 11 en el primer tiro, el jugador gana. Si la suma es 2, 3 o 12 en el primer tiro (llamado
 * "craps"), el jugador pierde (es decir, la "casa" gana). Si la suma es 4, 5, 6, 8, 9 o 10 en el primer tiro, esta
 * suma se convierte en el "punto" del jugador. Para ganar, el jugador debe seguir tirando los dados hasta que
 * salga otra vez "su punto". El jugador pierde si tira un 7 antes de llegar a su punto.
 */

// Simulación del juego de "craps".
#include <iostream>
#include <cstdlib> 			// contiene los prototipos para las funciones srand y rand
#include <ctime>			// contiene el prototipo para la función time
using namespace std;

unsigned int tirarDados();	// tira los dados, calcula y muestra la suma

int main()
{
	// enumeración con constantes que representa el estado del juego
	enum Estado { CONTINUAR, GANO, PERDIO };
	// todas las letras mayúsculas en las constantes

	// randomiza el generador de números aleatorios, usando la hora actual
	srand( static_cast<unsigned int>( time( 0 ) ) );

	unsigned int miPunto = 0;					// punto si no se gana o pierde en el primer tiro
	Estado estadoJuego = CONTINUAR;				// puede contener CONTINUAR, GANO o PERDIO
	unsigned int sumaDeDados = tirarDados();	// primer tiro del dado

	// determina el estado del juego y el punto (si es necesario), con base en el primer tiro
	switch ( sumaDeDados )
	{
		case 7:		// gana con 7 en el primer tiro
		case 11:	// gana con 11 en el primer tiro
			estadoJuego = GANO;
			break;

		case 2:		// pierde con 2 en el primer tiro
		case 3:		// pierde con 3 en el primer tiro
		case 12:	// pierde con 12 en el primer tiro
			estadoJuego = PERDIO;
			break;

		default:	// no gano ni perdio, por lo que recuerda el punto
			estadoJuego = CONTINUAR;	// el juego no ha terminado
			miPunto = sumaDeDados;		// recuerda el punto
			cout << "El punto es " << miPunto << endl;
			break;						// opcional al final del switch
	} // fin de switch

	// mientras el juego no esté completo
	while ( CONTINUAR == estadoJuego )	// no GANO ni PERDIO
	{
		sumaDeDados = tirarDados();		// tira los dados de nuevo

		// determina el estado del juego
		if ( sumaDeDados == miPunto )	// gana al hacer un punto
		{
			estadoJuego = GANO;
		}
		else if ( sumaDeDados == 7 )	// pierde al tirar 7 antes del punto
		{
			estadoJuego = PERDIO;
		}
	} // fin de while

	// muestra mensaje de que ganó o perdió
	if ( GANO == estadoJuego )
	{
		cout << "El jugador gana" << endl;
	}
	else
	{
		cout << "El jugador pierde" << endl;
	}
} // fin de main

// tira los dados, calcula la suma y muestra los resultados
unsigned int tirarDados()
{
	// elige valores aleatorios para el dado
	unsigned int dado1 = 1 + rand() % 6;	// tiro del primer dado
	unsigned int dado2 = 1 + rand() % 6;	// tiro del segundo dado

	unsigned int suma = dado1 + dado2;		// calcula la suma de los valores de los dados

	// muestra los resultados de este tiro
	cout << "El jugador tiro " << dado1 << " + " << dado2
		<< " = " << suma << endl;

	return suma;							// devuelve la suma de los dados
} // fin de la función tirarDados
