// Crea un objeto LibroCalificaciones, introducir calificaciones y mostrar reporte.
#include "LibroCalificaciones.h" // incluye la definición de la clase LibroCalificaciones

int main()
{
	// crea un objeto LibroCalificaciones
	LibroCalificaciones miLibroCalificaciones( "CS101 Programacion en C++" );

	miLibroCalificaciones.mostrarMensaje();					// muestra el mensaje de bienvenida
	miLibroCalificaciones.recibirCalificaciones();			// lee calificaciones del usuario
	miLibroCalificaciones.mostrarReporteCalificaciones();	// muestra reporte con base en las calificaciones
} // fin de main
