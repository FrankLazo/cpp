// Definición de la clase LibroCalificaciones que determina el promedio de una clase.
// Las funciones miembro se definen en LibroCalificaciones.cpp.
#include <string> // el programa usa la clase string estándar de C++

// definición de la clase LibroCalificaciones
class LibroCalificaciones
{
	public:
		explicit LibroCalificaciones( std::string );	// inicializa el nombre del curso
		void establecerNombreCurso( std::string );		// establece el nombre del curso
		std::string obtenerNombreCurso() const;			// obtiene el nombre del curso
		void mostrarMensaje() const;					// muestra un mensaje de bienvenida
		void determinarPromedioClase() const;			// promedia las calificaciones escritas por el usuario

	private:
		std::string nombreCurso; 						// nombre del curso para este LibroCalificaciones
}; // fin de la clase LibroCalificaciones
