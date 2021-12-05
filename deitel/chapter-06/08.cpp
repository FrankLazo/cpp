// Función cuadrado utilizada para demostrar la pila
// de llamadas a funciones y los registros de activación.
#include <iostream>
using namespace std;

int cuadrado( int );	// prototipo para la función cuadrado

int main()
{
	int a = 10;			// valor para cuadrado (variable local automática en main)

	cout << a << " al cuadrado: " << cuadrado( a ) << endl;	// muestra a al cuadrado
} // fin de main

// devuelve el cuadrado de un entero
int cuadrado( int x )
{
	return x * x;		// calcula el cuadrado y devuelve el resultado
} // fin de la función cuadrado
