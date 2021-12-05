// Intento de modificar un apuntador constante a datos constantes.
#include <iostream>
using namespace std;

int main()
{
	int x = 5, y;

	// ptr es un apuntador constante a un entero constante
	// ptr siempre apunta a la misma ubicación; el entero
	// en esa ubicación no se puede modificar.
	const int *const ptr = &x;

	cout << *ptr << endl;

	*ptr = 7; // error: *ptr es const; no se puede asignar un nuevo valor
	ptr = &y; // error: ptr es const; no se puede asignar una nueva dirección
} // fin de main
