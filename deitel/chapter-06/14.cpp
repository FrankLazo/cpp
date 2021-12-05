// Funciones cuadrado sobrecargadas.
#include <iostream>
using namespace std;

// función cuadrado para valores int
int cuadrado( int x )
{
	cout << "el cuadrado del entero " << x << " es ";
	return x * x;
} // fin de la función cuadrado con argumento int

// función cuadrado para valores double
double cuadrado( double y )
{
	cout << "el cuadrado del double " << y << " es ";
	return y * y;
} // fin de la función cuadrado con argumento double

int main()
{
	cout << cuadrado( 7 );		// llama a la versión int
	cout << endl;
	cout << cuadrado( 7.5 );	// llama a la versión double
	cout << endl;
} // fin de main
