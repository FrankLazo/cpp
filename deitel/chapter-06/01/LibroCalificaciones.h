// Definición de la clase LibroCalificaciones que encuentra el máximo de tres calificaciones.
// Las funciones miembro están definidas en LibroCalificaciones.cpp.
#include <string> // el programa usa la clase string estándar de C++

// definición de la clase LibroCalificaciones
class LibroCalificaciones
{
	public:
		explicit LibroCalificaciones( std::string );	// inicializa el nombre del curso
		void establecerNombreCurso( std::string );		// establece el nombre del curso
		std::string obtenerNombreCurso() const;			// obtiene el nombre del curso
		void mostrarMensaje() const;					// muestra un mensaje de bienvenida
		void recibirCalificaciones();					// recibe las tres calificaciones del usuario
		void mostrarReporteCalificaciones() const;		// muestra un reporte con base en las calificaciones
		int maximo( int, int, int ) const;				// determina el máximo de 3 valores

	private:
		std::string nombreCurso; 						// nombre del curso para este LibroCalificaciones
		int calificacionMaxima;							// valor máximo de las tres calificaciones
}; // fin de la clase LibroCalificaciones
