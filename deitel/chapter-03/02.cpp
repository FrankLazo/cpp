// Define la clase LibroCalificaciones con una función miembro que recibe un parámetro,
// crea un objeto LibroCalificaciones y llama a su función mostrarMensaje.
#include <iostream>
#include <string> // el programa usa la clase string estándar de C++
using namespace std;

// Definición de la clase LibroCalificaciones
class LibroCalificaciones
{
	public:
		// función que muestra un mensaje de bienvenida para el usuario de LibroCalificaciones
		void mostrarMensaje( string nombreCurso ) const
		{
			cout << "Bienvenido al Libro de calificaciones para\n" << nombreCurso << "!" << endl;
		} // fin de la función mostrarMensaje
}; // fin de la clase LibroCalificaciones

// la función main empieza la ejecución del programa
int main()
{
	string nombreDelCurso;						// cadena de caracteres que almacena el nombre del curso
	LibroCalificaciones miLibroCalificaciones;	// crea un objeto LibroCalificaciones llamado miLibroCalificaciones

	// pide y recibe el nombre del curso como entrada
	cout << "Escriba el nombre del curso:" << endl;
	getline( cin, nombreDelCurso ); // lee el nombre de un curso con espacios en blanco

	cout << endl; // imprime una línea en blanco

	// llama a la función mostrarMensaje de miLibroCalificaciones
	// y pasa nombreDelCurso como argumento
	miLibroCalificaciones.mostrarMensaje( nombreDelCurso );
} // fin de main
