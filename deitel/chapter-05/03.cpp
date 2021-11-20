// Suma de enteros con la instrucción for.
#include <iostream>
using namespace std;

int main()
{
	unsigned int total = 0; // inicializa el total

	// obtiene el total de los enteros pares del 2 al 20
	for ( unsigned int numero = 2; numero <= 20; numero += 2 )
		total += numero;

	cout << "La suma es " << total << endl; // muestra los resultados
} // fin de main
