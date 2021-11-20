// Definiciones de funciones miembro para la clase LibroCalificaciones que resuelve
// el programa del promedio de la clase con repetición controlada por contador.
#include <iostream>
#include "LibroCalificaciones.h" // incluye la definición de la clase LibroCalificaciones
using namespace std;

// el constructor inicializa a nombreCurso con la cadena que se suministra como argumento
LibroCalificaciones::LibroCalificaciones( string nombre )
{
	establecerNombreCurso( nombre ); // valida y almacena nombreCurso
} // fin del constructor de LibroCalificaciones

// función para establecer el nombre del curso;
// asegura que el nombre del curso tenga cuando menos 25 caracteres
void LibroCalificaciones::establecerNombreCurso( string nombre )
{
	if ( nombre.size() <= 25 )					// si nombre tiene 25 caracteres o menos
		nombreCurso = nombre; 					// almacena el nombre del curso en el objeto
	else										// si nombre es mayor de 25 caracteres
	{											// establece nombreCurso a los primeros 25 caracteres del parámetro nombre
		nombreCurso = nombre.substr( 0, 25 );	// selecciona los primeros 25 caracteres

		cerr << "El nombre \"" << nombre << "\" excede la longitud maxima (25).\n"
			"Se limito nombreCurso a los primeros 25 caracteres.\n" << endl;
	} // fin de if...else
} // fin de la función establecerNombreCurso

// función para obtener el nombre del curso
string LibroCalificaciones::obtenerNombreCurso() const
{
	return nombreCurso;
} // fin de la función obtenerNombreCurso

// muestra un mensaje de bienvenida para el usuario de LibroCalificaciones
void LibroCalificaciones::mostrarMensaje() const
{
	cout << "Bienvenido al libro de calificaciones para\n"
		<< obtenerNombreCurso()
		<< "!" << endl;
} // fin de la función mostrarMensaje

// determina el promedio de la clase, con base en las 10 calificaciones escritas por el usuario
void LibroCalificaciones::determinarPromedioClase() const
{
	// fase de inicialización
	int total = 0;					// suma de las calificaciones introducidas por el usuario
	unsigned int contadorCalif = 1;	// número de la calificación a introducir a continuación

	// fase de procesamiento
	while ( contadorCalif <= 10 )	// itera 10 veces
	{
		cout << "Escriba una calificacion: ";	// pide la entrada
		int calificacion = 0;					// valor de la calificación introducida por el usuario
		cin >> calificacion;					// recibe como entrada la siguiente calificación
		total = total + calificacion;			// suma la calificación al total
		contadorCalif = contadorCalif + 1;		// incrementa el contador por 1
	} // fin de while

	// fase de terminación
	int promedio = total / 10;	// está bien mezclar la declaración con el cálculo

	// muestra el total y el promedio de las calificaciones
	cout << "\nEl total de las 10 calificaciones es " << total << endl;
	cout << "El promedio de la clase es " << promedio << endl;
} // fin de la función determinarPromedioClase
