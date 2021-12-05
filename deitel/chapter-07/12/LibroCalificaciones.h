// Definición de la clase LibroCalificaciones que usa un arreglo para almacenar calificaciones de una prueba.
// Las funciones miembro se definen en LibroCalificaciones.cpp
#include <string>
#include <array>

// definición de la clase LibroCalificaciones
class LibroCalificaciones
{
	public:
		// constante -- número de estudiantes que tomaron la prueba
		static const size_t estudiantes = 10;				// observe los datos públicos

		// el constructor inicializa el nombre del curso y el arreglo de calificaciones
		LibroCalificaciones( const std::string &, const std::array< int, estudiantes> & );

		void establecerNombreCurso( const std::string & );	// establece el nombre del curso
		std::string obtenerNombreCurso() const;				// obtiene el nombre del curso
		void mostrarMensaje() const;						// muestra un mensaje de bienvenida
		void procesarCalificaciones() const;				// realiza varias operaciones con los datos de las calificaciones
		int obtenerMinimo() const;							// busca la calificación mínima para la prueba
		int obtenerMaximo() const;							// busca la calificación máxima para la prueba
		double obtenerPromedio() const;						// determina la calificación promedio para la prueba
		void imprimirGraficoBarras() const;					// imprime gráfico de barras de la distribución de calificaciones
		void imprimirCalificaciones() const;				// imprime el contenido del arreglo calificaciones

	private:
		std::string nombreCurso; 							// nombre del curso para este libro de calificaciones
		std::array< int, estudiantes > calificaciones;		// arreglo de calificaciones de estudiantes
}; // fin de la clase LibroCalificaciones
