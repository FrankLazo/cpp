// Uso de la instrucción for basada en rango para multiplicar los elementos de un arreglo por 2.
#include <iostream>
#include <array>
using namespace std;

int main()
{
	array< int, 5 > items = { 1, 2, 3, 4, 5 };

	// muestra los items antes de modificarlos
	cout << "items antes de modificarlos: ";
	for ( int item : items )
	{
		cout << item << " ";
	}

	// multiplica los elementos de los items por 2
	for ( int &refItem : items )
	{
		refItem *= 2;
	}

	// muestra los items después de modificarlos
	cout << "\nitems despues de modificarlos: ";
	for ( int item : items )
	{
		cout << item << " ";
	}

	cout << endl;
} // fin de main
