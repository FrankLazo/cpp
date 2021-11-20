// Definiciones de las funciones miembro de LibroCalificaciones. Este archivo contiene
// implementaciones de las funciones miembro cuyo prototipo está en LibroCalificaciones.h.
#include <iostream>
#include "LibroCalificaciones.h" // incluye la definición de la clase LibroCalificaciones
using namespace std;

// el constructor inicializa nombreCurso con el objeto string suministrado como argumento
LibroCalificaciones::LibroCalificaciones( string nombre )
	: nombreCurso ( nombre ) // inicializador de miembro para inicializar nombreCurso
{
	// cuerpo vacío
} // fin del constructor de LibroCalificaciones

// función para establecer el nombre del curso
void LibroCalificaciones::establecerNombreCurso( string nombre )
{
	nombreCurso = nombre; // almacena el nombre del curso en el objeto
} // fin de la función establecerNombreCurso

// función para obtener el nombre del curso
string LibroCalificaciones::obtenerNombreCurso() const
{
	return nombreCurso; // devuelve el nombreCurso del objeto
} // fin de la función obtenerNombreCurso

// muestra un mensaje de bienvenida para el usuario de LibroCalificaciones
void LibroCalificaciones::mostrarMensaje() const
{
	// llama a obtenerNombreCurso para obtener el nombreCurso
	cout << "Bienvenido al libro de calificaciones para\n"
		<< obtenerNombreCurso()
		<< "!" << endl;
} // fin de la función mostrarMensaje
