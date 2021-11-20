// Definición de la clase LibroCalificaciones en un archivo separado de main.
#include <iostream>
#include <string> // la clase LibroCalificaciones utiliza la clase string estándar de C++

// definición de la clase LibroCalificaciones
class LibroCalificaciones
{
	public:
		// el constructor inicializa nombreCurso con la cadena que se suministra como argumento
		explicit LibroCalificaciones( std::string nombre )
			: nombreCurso ( nombre ) // inicializador de miembro para inicializar nombreCurso
		{
			// cuerpo vacío
		} // fin del constructor de LibroCalificaciones

		// función para establecer el nombre del curso
		void establecerNombreCurso( std::string nombre )
		{
			nombreCurso = nombre; // almacena el nombre del curso en el objeto
		} // fin de la función establecerNombreCurso

		// función para obtener el nombre del curso
		std::string obtenerNombreCurso() const
		{
			return nombreCurso; // devuelve el nombreCurso del objeto
		} // fin de la función obtenerNombreCurso

		// muestra un mensaje de bienvenida para el usuario de LibroCalificaciones
		void mostrarMensaje() const
		{
			// llama a obtenerNombreCurso para obtener el nombreCurso
			std::cout << "Bienvenido al libro de calificaciones para\n"
				<< obtenerNombreCurso()
				<< "!" << std::endl;
		} // fin de la función mostrarMensaje

	private:
		std::string nombreCurso; // nombre del curso para este LibroCalificaciones
}; // fin de la clase LibroCalificaciones
