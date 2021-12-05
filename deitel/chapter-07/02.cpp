// Inicialización de un arreglo en una declaración.
#include <iostream>
#include <iomanip>
#include <array>
using namespace std;

int main()
{
	// usa la lista inicializadora para inicializar el arreglo n
	array< int, 5 > n = { 32, 27, 64, 18, 95 };

	cout << "Elemento" << setw( 14 ) << "Valor" << endl;

	// imprime el valor de cada elemento del arreglo
	for ( size_t i = 0; i < n.size(); ++i )
	{
		cout << setw( 8 ) << i << setw( 14 ) << n[ i ] << endl;
	}
} // fin de main
