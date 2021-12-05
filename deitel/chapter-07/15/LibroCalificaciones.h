// Definición de la clase LibroCalificaciones que utiliza un
// arreglo bidimensional para almacenar calificaciones de una prueba.
// Las funciones miembro se definen en LibroCalificaciones.cpp
#include <array>
#include <string>

// definición de la clase LibroCalificaciones
class LibroCalificaciones
{
	public:
		// constantes
		static const size_t estudiantes = 10;	// número de estudiantes
		static const size_t pruebas = 3;		// número de pruebas

		// el constructor inicializa el nombre del curso y el arreglo de calificaciones
		LibroCalificaciones( const std::string &,
			std::array< std::array< int, pruebas >, estudiantes > & );

		void establecerNombreCurso( const std::string & );	// establece el nombre del curso
		std::string obtenerNombreCurso() const;				// obtiene el nombre del curso
		void mostrarMensaje() const;						// muestra un mensaje de bienvenida
		void procesarCalificaciones() const;				// realiza varias operaciones en los datos de las calificaciones
		int obtenerMinimo() const;							// encuentra el valor mínimo en el libro de calificaciones
		int obtenerMaximo() const;							// encuentra el valor máximo en el libro de calificaciones
		double obtenerPromedio( const std::array< int, pruebas > & ) const;
		void imprimirGraficoBarras() const;					// imprime gráfico de barras de la distribución de calificaciones
		void imprimirCalificaciones() const;				// imprime el contenido del arreglo calificaciones

	private:
		std::string nombreCurso; 												// nombre del curso para este libro de calificaciones
		std::array< std::array< int, pruebas >, estudiantes > calificaciones;	// arreglo bidimensional de calificaciones
}; // fin de la clase LibroCalificaciones
