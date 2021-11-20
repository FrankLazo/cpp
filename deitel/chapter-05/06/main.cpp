// Creación de un objeto LibroCalificaciones e invocación de sus funciones miembro.
#include "LibroCalificaciones.h" // incluye la definición de la clase LibroCalificaciones

int main()
{
	// crea un objeto LibroCalificaciones
	LibroCalificaciones miLibroCalificaciones( "CS101 Programacion en C++" );

	miLibroCalificaciones.mostrarMensaje();					// muestra el mensaje de bienvenida
	miLibroCalificaciones.recibirCalificaciones();			// lee las calificaciones del usuario
	miLibroCalificaciones.mostrarReporteCalificaciones();	// muestra el reporte con base en las calificaciones
} // fin de main
