// Demostración de la clase LibroCalificaciones después de separar
// su interfaz de su implementación.
#include <iostream>
#include "LibroCalificaciones.h" // incluye la definición de la clase LibroCalificaciones
using namespace std;

// la función main empieza la ejecución del programa
int main()
{
	// crea dos objetos LibroCalificaciones
	LibroCalificaciones libroCalificaciones1( "CS101 Introduccion a la programacion en C++" );
	LibroCalificaciones libroCalificaciones2( "CS102 Estructuras de datos en C++" );

	// muestra el valor inicial de nombreCurso para cada LibroCalificaciones
	cout << "libroCalificaciones1 se creo para el curso: "
		<< libroCalificaciones1.obtenerNombreCurso()
		<< "\nlibroCalificaciones2 se creo para el curso: "
		<< libroCalificaciones2.obtenerNombreCurso()
		<< endl;
} // fin de main
