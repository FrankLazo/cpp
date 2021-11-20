// Definiciones de las funciones miembro para la clase LibroCalificaciones que
// utiliza una instrucción switch para contar calificaciones A, B, C, D, E y F.
#include <iostream>
#include "LibroCalificaciones.h" // incluye la definición de la clase LibroCalificaciones
using namespace std;

// el constructor inicializa a nombreCurso con la cadena suministrada como
// argumento; inicializa los miembros de datos contadores a 0
LibroCalificaciones::LibroCalificaciones( string nombre )
	: aCuenta( 0 ),	// inicializa cuenta de calificaciones A con 0
	  bCuenta( 0 ),	// inicializa cuenta de calificaciones B con 0
	  cCuenta( 0 ),	// inicializa cuenta de calificaciones C con 0
	  dCuenta( 0 ),	// inicializa cuenta de calificaciones D con 0
	  fCuenta( 0 )	// inicializa cuenta de calificaciones F con 0
{
	establecerNombreCurso( nombre );
} // fin del constructor de LibroCalificaciones

// función para establecer el nombre del curso; limita el nombre a 25 caracteres o menos
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
	// esta instrucción llama a obtenerNombreCurso para obtener el
	// nombre del curso que representa este LibroCalificaciones
	cout << "Bienvenido al libro de calificaciones para\n"
		<< obtenerNombreCurso()
		<< "!\n" << endl;
} // fin de la función mostrarMensaje

// recibe un número arbitrario de calificaciones del usuario; actualiza el contador de calificaciones
void LibroCalificaciones::recibirCalificaciones()
{
	int calificacion;	// calificación introducida por el usuario

	cout << "Escriba las calificaciones de letra." << endl
		<< "Escriba el caracter EOF para terminar la entrada." << endl;

	// itera hasta que el usuario escriba la secuencia de fin de archivo
	while ( ( calificacion = cin.get() ) != EOF )
	{
		// determina cuál calificación se introdujo
		switch ( calificacion )	// instrucción switch anidada en el while´
		{
			case 'A':			// calificación fue A mayúscula
			case 'a':			// o a minúscula
				++aCuenta;		// incrementa aCuenta
				break;			// es necesario salir del switch

			case 'B':			// calificación fue B mayúscula
			case 'b':			// o b minúscula
				++bCuenta;		// incrementa bCuenta
				break;			// sale del switch

			case 'C':			// calificación fue C mayúscula
			case 'c':			// o c minúscula
				++cCuenta;		// incrementa cCuenta
				break;			// sale del switch

			case 'D':			// calificación fue D mayúscula
			case 'd':			// o d minúscula
				++dCuenta;		// incrementa dCuenta
				break;			// sale del switch

			case 'F':			// calificación fue F mayúscula
			case 'f':			// o f minúscula
				++fCuenta;		// incrementa fCuenta
				break;			// sale del switch

			case '\n':			// ignora caracteres de nueva línea,
			case '\t':			// tabuladores,
			case ' ':			// y espacios en la entrada,
				break;			// sale del switch

			default:			// atrapa todos los demás caracteres
				cout << "Se introdujo una letra de calificacion incorrecta."
					<< " Escriba una nueva calificacion." << endl;
				break;			// opcional; saldrá del switch de todas formas
		} // fin del switch
	} // fin de while
} // fin de la función recibirCalificaciones

// muestra un reporte con base en las calificaciones introducidas por el usuario
void LibroCalificaciones::mostrarReporteCalificaciones() const
{
	// imprime resumen de resultados
	cout << "\n\nNumero de estudiantes que recibieron cada calificacion de letra:"
		<< "\nA: " << aCuenta	// muestra el número de calificaciones A
		<< "\nB: " << bCuenta	// muestra el número de calificaciones B
		<< "\nC: " << cCuenta	// muestra el número de calificaciones C
		<< "\nD: " << dCuenta	// muestra el número de calificaciones D
		<< "\nF: " << fCuenta	// muestra el número de calificaciones F
		<< endl;
} // fin de la función mostrarReporteCalificaciones
