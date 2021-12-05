// Cálculo de la suma de los elementos de un arreglo.
#include <iostream>
#include <array>
using namespace std;

int main()
{
	const size_t tamagnoArreglo = 4; // especifica el tamaño del arreglo
	array< int, tamagnoArreglo > a = { 10, 20, 30, 40 };
	int total = 0;

	// suma el contenido del arreglo a
	for ( size_t i = 0; i < a.size(); ++i )
	{
		total += a[ i ];
	}

	cout << "Total de elementos del arreglo: " << total << endl;
} // fin de main
