// Uso de argumentos predeterminados.
#include <iostream>
using namespace std;

// prototipo de función que especifica argumentos predeterminados
unsigned int volumenCaja( unsigned int longitud = 1, unsigned int anchura = 1,
	unsigned int altura = 1 );

int main()
{
	// sin argumentos--usa valores predeterminados para todas las medidas
	cout << "El volumen predeterminado de la caja es: " << volumenCaja();

	// especifica la longitud; anchura y altura predeterminadas
	cout << "\n\nEl volumen de una caja con longitud 10,\n"
		<< "anchura 1 y altura 1 es: " << volumenCaja( 10 );

	// especifica la longitud y anchura; altura predeterminada
	cout << "\n\nEl volumen de una caja con longitud 10,\n"
		<< "anchura 5 y altura 1 es: " << volumenCaja( 10, 5 );

	// especifica todos los argumentos
	cout << "\n\nEl volumen de una caja con longitud 10,\n"
		<< "anchura 5 y altura 2 es: " << volumenCaja( 10, 5, 2 )
		<< endl;
} // fin de main

// la función volumenCaja calcula el volumen de una caja
unsigned int volumenCaja( unsigned int longitud, unsigned int anchura,
	unsigned int altura )
{
	return longitud * anchura * altura;
} // fin de la función volumenCaja
