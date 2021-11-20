// Crea y manipula un objeto LibroCalificaciones; ilustra la validación.
#include <iostream>
#include "LibroCalificaciones.h" // incluye la definición de la clase LibroCalificaciones
using namespace std;

// la función main empieza la ejecución del programa
int main()
{
	// crea dos objetos LibroCalificaciones;
	// el nombre inicial del curso libroCalificaciones1 es demasiado largo
	LibroCalificaciones libroCalificaciones1( "CS101 Introduccion a la programacion en C++" );
	LibroCalificaciones libroCalificaciones2( "CS102 C++:Estruc de datos" );

	// muestra el nombreCurso de cada LibroCalificaciones
	cout << "el nombre inicial del curso de libroCalificaciones1 es: "
		<< libroCalificaciones1.obtenerNombreCurso()
		<< "\nel nombre inicial del curso de libroCalificaciones2 es: "
		<< libroCalificaciones2.obtenerNombreCurso()
		<< endl;

	// modifica el nombreCurso de libroCalificaciones1 (con una cadena con longitud válida)
	libroCalificaciones1.establecerNombreCurso( "CS101 Programacion en C++" );

	// muestra el nombreCurso de cada LibroCalificaciones
	cout << "\nel nombre del curso de libroCalificaciones1 es: "
		<< libroCalificaciones1.obtenerNombreCurso()
		<< "\nel nombre del curso de libroCalificaciones2 es: "
		<< libroCalificaciones2.obtenerNombreCurso()
		<< endl;
} // fin de main
