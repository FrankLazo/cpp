// Búsqueda y ordenamiento de arreglos.
#include <iostream>
#include <iomanip>
#include <array>
#include <string>
#include <algorithm> // contiene sort y binary_search
using namespace std;

int main()
{
	const size_t tamagnoArreglo = 7; // tamaño del arreglo colores
	array< string, tamagnoArreglo > colores = { "rojo", "naranja", "amarillo",
		"verde", "azul", "indigo", "violeta" };

	// imprime el arreglo original
	cout << "Arreglo desordenado:\n";
	for ( string color : colores )
	{
		cout << color << " ";
	}

	sort( colores.begin(), colores.end() ); // ordena el contenido de los colores

	// imprime el arreglo ordenado
	cout << "\nArreglo ordenado:\n";
	for ( string elemento : colores )
	{
		cout << elemento << " ";
	}

	// busca "indigo" en colores
	bool encontro = binary_search( colores.begin(), colores.end(), "indigo" );
	cout << "\n\n\"indigo\" " << ( encontro ? "se" : "no se" )
		<< " encuentra en colores" << endl;

	// busca "cian" en colores
	encontro = binary_search( colores.begin(), colores.end(), "cian" );
	cout << "\"cian\" " << ( encontro ? "se" : "no se" )
		<< " encuentra en colores" << endl;
} // fin de main
