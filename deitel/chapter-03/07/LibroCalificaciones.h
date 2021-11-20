// Definición de la clase LibroCalificaciones presenta la interfaz public
// de la clase. Las definiciones de las funciones miembro aparecen en LibroCalificaciones.cpp.
#include <string> // el programa usa la clase string estándar de C++

// definición de la clase LibroCalificaciones
class LibroCalificaciones
{
	public:
		explicit LibroCalificaciones( std::string );	// constructor que inicializa nombreCurso
		void establecerNombreCurso( std::string );		// establece el nombre del curso
		std::string obtenerNombreCurso() const;			// obtiene el nombre del curso
		void mostrarMensaje() const;					// muestra un mensaje de bienvenida

	private:
		std::string nombreCurso; 						// nombre del curso para este LibroCalificaciones
}; // fin de la clase LibroCalificaciones
