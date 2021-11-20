// Definiciones de funciones miembro para la clase LibroCalificaciones que resuelve
// el programa del promedio de la clase con repetición controlada por centinela.
#include <iostream>
#include <iomanip>					// manipuladores de flujo parametrizados
#include "LibroCalificaciones.h" 	// incluye la definición de la clase LibroCalificaciones
using namespace std;

// el constructor inicializa a nombreCurso con la cadena que se suministra como argumento
LibroCalificaciones::LibroCalificaciones( string nombre )
{
	establecerNombreCurso( nombre ); // valida y almacena nombreCurso
} // fin del constructor de LibroCalificaciones

// función para establecer el nombre del curso;
// asegura que el nombre del curso tenga cuando mucho 25 caracteres
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
	unsigned int contadorCalif = 0;	// número de calificaciones introducidas

	// fase de procesamiento
	// pide la entrada y lee la calificación del usuario
	cout << "Escriba la calificacion o -1 para salir: ";
	int calificacion = 0;	// valor de la calificación
	cin >> calificacion;	// recibe como entrada la calificación o el valor centinela

	// itera hasta leer el valor centinela del usuario
	while ( calificacion != -1 )				// mientras calificación no sea -1
	{
		total = total + calificacion;			// suma la calificación al total
		contadorCalif = contadorCalif + 1;		// incrementa el contador

		// pide la entrada y lee la siguiente calificación del usuario
		cout << "Escriba la calificacion o -1 para salir: ";
		cin >> calificacion;					// recibe como entrada la calificación o el valor centinela
	} // fin de while

	// fase de terminación
	if ( contadorCalif != 0 ) // si el usuario introdujo al menos una calificación...
	{
		// calcula el promedio de todas las calificaciones introducidas
		double promedio = static_cast< double >( total ) / contadorCalif;

		// muestra el total y el promedio (con dos dígitos de precisión)
		cout << "\nEl total de las " << contadorCalif << " calificaciones introducidas es "
			<< total << endl;
		cout << setprecision( 2 ) << fixed;
		cout << "El promedio de la clase es " << promedio << endl;
	} // fin de if
	else // no se introdujeron calificaciones, por lo que imprime el mensaje apropiado
		cout << "No se introdujeron calificaciones" << endl;
} // fin de la función determinarPromedioClase
