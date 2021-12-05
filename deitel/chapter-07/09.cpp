// Programa para analizar encuestas.
#include <iostream>
#include <iomanip>
#include <array>
using namespace std;

int main()
{
	// define los tamaños de los arreglos
	const size_t tamagnoRespuesta = 20;	// tamaño del arreglo respuestas
	const size_t tamagnoFrecuencia = 6;	// tamaño del arreglo frecuencia

	// coloca las respuestas de la encuesta en el arreglo respuestas
	const array< unsigned int, tamagnoRespuesta > respuestas =
		{ 1, 2, 5, 4, 3, 5, 2, 1, 3, 1, 4, 3, 3, 3, 2, 3, 3, 2, 2, 5 };

	// inicializa los contadores de frecuencia con 0
	array< unsigned int, tamagnoFrecuencia > frecuencia = {};

	// para cada respuesta, selecciona el elemento de respuestas y usa ese valor
	// como subíndice de frecuencia para determinar el elemento a incrementar
	for ( size_t respuesta = 0; respuesta < respuestas.size(); ++respuesta )
	{
		++frecuencia[ respuestas[ respuesta ] ];
	}

	cout << "Calificacion" << setw( 16 ) << "Frecuencia" << endl;

	// imprime el valor de cada elemento del arreglo
	for ( size_t calificacion = 1; calificacion < frecuencia.size(); ++calificacion )
	{
		cout << setw( 12 ) << calificacion << setw( 16 ) << frecuencia[ calificacion ]
			<< endl;
	}
} // fin de main
