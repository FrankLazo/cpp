// Implementaciones de las definiciones de las funciones miembro de LibroCalificaciones.
// La función establecerNombreCurso realiza la validación.
#include <iostream>
#include "LibroCalificaciones.h" // incluye la definición de la clase LibroCalificaciones
using namespace std;

// el constructor inicializa nombreCurso con la cadena que se suministra como argumento
LibroCalificaciones::LibroCalificaciones( string nombre )
{
	establecerNombreCurso( nombre ); // valida y almacena nombreCurso
} // fin del constructor de LibroCalificaciones

// función que establece el nombre del curso;
// asegura que el nombre del curso tenga como máximo 25 caracteres
void LibroCalificaciones::establecerNombreCurso( string nombre )
{
	if ( nombre.size() <= 25 )	// si nombre tiene 25 caracteres o menos
		nombreCurso = nombre; 	// almacena el nombre del curso en el objeto

	if ( nombre.size() > 25)	// si nombre tiene más de 25 caracteres
	{
		// establece nombreCurso a los primeros 25 caracteres del parámetro nombre
		nombreCurso = nombre.substr( 0, 25 ); // empieza en 0, longitud de 25

		cerr << "El nombre \"" << nombre << "\" excede la longitud maxima (25).\n"
			"Se limito nombreCurso a los primeros 25 caracteres.\n" << endl;
	} // fin de if
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
