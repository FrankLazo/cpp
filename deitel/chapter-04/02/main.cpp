// Crea un objeto LibroCalificaciones e invoca a su función determinarPromedioClase.
#include "LibroCalificaciones.h" // incluye la definición de la clase LibroCalificaciones

int main()
{
	// crea un objeto LibroCalificaciones llamado miLibroCalificaciones y
	// pasa el nombre del curso al constructor
	LibroCalificaciones miLibroCalificaciones( "CS101 Programacion en C++" );

	miLibroCalificaciones.mostrarMensaje();				// muestra el mensaje de bienvenida
	miLibroCalificaciones.determinarPromedioClase();	// busca el promedio de 10 calificaciones
} // fin de main
