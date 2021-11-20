// Definición de la clase LibroCalificaciones que cuenta calificaciones de letras.
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
		void recibirCalificaciones();					// recibe un número arbitrario de calificaciones del usuario
		void mostrarReporteCalificaciones() const;		// muestra un reporte con base en la entrada del usuario

	private:
		std::string nombreCurso; 						// nombre del curso para este LibroCalificaciones
		unsigned int aCuenta;							// cuenta de calificaciones A
		unsigned int bCuenta;							// cuenta de calificaciones B
		unsigned int cCuenta;							// cuenta de calificaciones C
		unsigned int dCuenta;							// cuenta de calificaciones D
		unsigned int fCuenta;							// cuenta de calificaciones F
}; // fin de la clase LibroCalificaciones
