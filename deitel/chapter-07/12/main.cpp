// Crea un objeto LibroCalificaciones usando un arreglo de calificaciones.
#include <array>
#include "LibroCalificaciones.h" // definición de la clase LibroCalificaciones
using namespace std;

// la función main empieza la ejecución del programa
int main()
{
	// arreglo de calificaciones de estudiantes
	const array< int, LibroCalificaciones::estudiantes > calificaciones =
		{ 87, 68, 94, 100, 83, 78, 85, 91, 76, 87 };
	string nombreCurso = "CS101 Introduccion a la programacion en C++";

	LibroCalificaciones miLibroCalificaciones( nombreCurso, calificaciones );
	miLibroCalificaciones.mostrarMensaje();
	miLibroCalificaciones.procesarCalificaciones();
} // fin de main
