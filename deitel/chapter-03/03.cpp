// Define la clase LibroCalificaciones que contiene un miembro de datos
// nombreCurso y funciones miembro para establecer y obtener su valor;
// crea y manipula un objeto LibroCalificaciones con estas funciones.
#include <iostream>
#include <string> // el programa usa la clase string estándar de C++
using namespace std;

// Definición de la clase LibroCalificaciones
class LibroCalificaciones
{
	public:
		// función que establece el nombre del curso
		void establecerNombreCurso( string nombre )
		{
			nombreCurso = nombre; // almacena el nombre del curso en el objeto
		} // fin de la función establecerNombreCurso

		// función que obtiene el nombre del curso
		string obtenerNombreCurso() const
		{
			return nombreCurso; // devuelve el nombreCurso del objeto
		} // fin de la función obtenerNombreCurso

		// función que muestra un mensaje de bienvenida
		void mostrarMensaje() const
		{
			// esta instrucción llama a obtenerNombreCurso para obtener el
			// nombre del curso que representa este LibroCalificaciones
			cout << "Bienvenido al libro de calificaciones para\n"
				<< obtenerNombreCurso() << "!"
				<< endl;
		} // fin de la función mostrarMensaje

	private:
		string nombreCurso; // nombre del curso para este LibroCalificaciones
}; // fin de la clase LibroCalificaciones

// la función main empieza la ejecución del programa
int main()
{
	string nombreDelCurso;						// cadena de caracteres para almacenar el nombre del curso
	LibroCalificaciones miLibroCalificaciones;	// crea un objeto LibroCalificaciones llamado miLibroCalificaciones

	// muestra el valor inicial de nombreCurso
	cout << "El nombre inicial del curso es: "
		<< miLibroCalificaciones.obtenerNombreCurso()
		<< endl;

	// pide, recibe y establece el nombre del curso
	cout << "\nEscriba el nombre del curso:" << endl;
	getline( cin, nombreDelCurso ); 								// lee el nombre de un curso con espacios en blanco
	miLibroCalificaciones.establecerNombreCurso( nombreDelCurso );	// establece el nombre del curso

	cout << endl; 							// imprime una línea en blanco
	miLibroCalificaciones.mostrarMensaje();	// muestra un mensaje con el nuevo nombre del curso
} // fin de main
