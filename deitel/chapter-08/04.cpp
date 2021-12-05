// Intento de modificar los datos a través de un
// apuntador no constante a datos constantes.

void f( const int * ); // prototipo

int main()
{
	int y = 0;

	f( &y ); // f intentará realizar una modificación ilegal
} // fin de main

// una variable constante no se puede modificar a través de xPtr
void f( const int *xPtr )
{
	*xPtr = 100; // error: no se puede modificar un objeto const
} // fin de la función f
