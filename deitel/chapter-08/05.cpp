// Intento de modificar un apuntador constante a datos no constantes.

int main()
{
	int x, y;

	// ptr es un apuntador constante a un entero que se puede
	// modificar a través de ptr, pero ptr siempre apunta a la
	// misma ubicación de memoria.
	int * const ptr = &x; // el apuntador const de debe inicializar

	*ptr = 7; // se permite: *ptr no es const
	ptr = &y; // error: ptr es const; no se puede asignar a una nueva dirección
} // fin de main
