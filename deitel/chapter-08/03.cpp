// Uso del paso por referencia con un argumento apuntador para elevar
// al cubo el valor de una variable.
#include <iostream>
using namespace std;

void cuboPorReferencia( int * ); // prototipo

int main()
{
	int numero = 5;

	cout << "El valor original de numero es " << numero;

	cuboPorReferencia( &numero ); // pasa la dirección de numero a cuboPorReferencia

	cout << "\nEl nuevo valor de numero es " << numero << endl;
} // fin de main

void cuboPorReferencia( int *nPtr )
{
	*nPtr = *nPtr * *nPtr * *nPtr; // eleva *nPtr al cubo
} // fin de la función cuboPorReferencia
