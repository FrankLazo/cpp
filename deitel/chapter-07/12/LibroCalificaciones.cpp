// Funciones miembro para la clase LibroCalificaciones
// que manipulan un arreglo de calificaciones.
#include <iostream>
#include <iomanip>
#include "LibroCalificaciones.h" // incluye la definición de la clase LibroCalificaciones
using namespace std;

// el constructor inicializa nombreCurso y el arreglo calificaciones
LibroCalificaciones::LibroCalificaciones( const string &nombre,
	const array< int, estudiantes > &arregloCalificaciones )
	: nombreCurso( nombre ), calificaciones( arregloCalificaciones )
{
} // fin del constructor de LibroCalificaciones

// función para establecer el nombre del curso
void LibroCalificaciones::establecerNombreCurso( const string &nombre )
{
	nombreCurso = nombre; // almacena el nombre del curso
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
		<< obtenerNombreCurso() << "!"
		<< endl;
} // fin de la función mostrarMensaje

// realiza varias operaciones con los datos
void LibroCalificaciones::procesarCalificaciones() const
{
	// imprime el arreglo calificaciones
	imprimirCalificaciones();

	// llama a la función obtenerPromedio para calcular la calificación promedio
	cout << setprecision( 2 ) << fixed;
	cout << "\nEl promedio de la clase es " << obtenerPromedio() << endl;

	// llama a las funciones obtenerMinimo y obtenerMaximo
	cout << "La calificacion mas baja es " << obtenerMinimo()
		<< "\nLa calificacion mas alta es " << obtenerMaximo()
		<< endl;

	// llama a la función imprimirGraficoBarras para imprimir el gráfico de distribución de calificaciones
	imprimirGraficoBarras();
} // fin de la función procesarCalificaciones

// busca la calificación mínima
int LibroCalificaciones::obtenerMinimo() const
{
	int calificacionInf = 100; // asume que la calificación más baja es 100

	// itera a través del arreglo calificaciones
	for ( int calificacion : calificaciones)
	{
		// si la calificación actual es menor que calificacionInf, la asigna a calificacionInf
		if ( calificacion < calificacionInf )
		{
			calificacionInf = calificacion; // nueva calificación más baja
		}
	} // fin de for

	return calificacionInf; // devuelve la calificación más baja
} // fin de la función obtenerMinimo

// busca la calificación máxima
int LibroCalificaciones::obtenerMaximo() const
{
	int calificacionSup = 0; // asume que la calificación más alta es 0

	// itera a través del arreglo calificaciones
	for ( int calificacion : calificaciones)
	{
		// si la calificación actual es mayor que calificacionSup, la asigna a calificacionSup
		if ( calificacion > calificacionSup )
		{
			calificacionSup = calificacion; // nueva calificación más alta
		}
	} // fin de for

	return calificacionSup; // devuelve la calificación más alta
} // fin de la función obtenerMaximo

// determina la calificación promedio para la prueba
double LibroCalificaciones::obtenerPromedio() const
{
	int total = 0; // inicializa el total

	// suma las calificaciones en el arreglo
	for ( int calificacion : calificaciones )
	{
		total += calificacion;
	}

	// devuelve el promedio de las calificaciones
	return static_cast< double >( total ) / calificaciones.size();
} // fin de la función obtenerPromedio

// imprime gráfico de barras que muestra la distribución de las calificaciones
void LibroCalificaciones::imprimirGraficoBarras() const
{
	cout << "\nDistribucion de calificaciones:" << endl;

	// almacena la frecuencia de calificaciones en cada rango de 10 calificaciones
	const size_t tamagnoFrecuencia = 11;
	array< unsigned int, tamagnoFrecuencia > frecuencia = {}; // inicializa elementos con 0

	// para cada calificación, incrementa la frecuencia apropiada
	for ( int calificacion : calificaciones)
	{
		++frecuencia[ calificacion / 10 ];
	}

	// para cada frecuencia de calificación, imprime barra en el gráfico
	for ( size_t cuenta = 0; cuenta < tamagnoFrecuencia; ++cuenta )
	{
		// imprime etiquetas de las barras ("0-9:", ..., "90-99:", "100:")
		if ( 0 == cuenta )
		{
			cout << "  0-9: ";
		}
		else if ( 10 == cuenta )
		{
			cout << "  100: ";
		}
		else
		{
			cout << cuenta * 10 << "-" << ( cuenta * 10 ) + 9 << ": ";
		}

		// imprime barra de asteriscos
		for ( unsigned int estrellas = 0; estrellas < frecuencia[ cuenta ]; ++estrellas )
		{
			cout << '*';
		}

		cout << endl; // empieza una nueva línea de salida
	} // fin de for exterior
} // fin de la función imprimirGraficoBarras

// imprime el contenido del arreglo calificaciones
void LibroCalificaciones::imprimirCalificaciones() const
{
	cout << "\nLas calificaciones son:\n\n";

	// imprime la calificación de cada estudiante
	for ( size_t estudiante = 0; estudiante < calificaciones.size(); ++estudiante )
	{
		cout << "Estudiante " << setw( 2 ) << estudiante + 1 << ": " << setw( 3 )
			<< calificaciones[ estudiante ] << endl;
	}
} // fin de la función imprimirCalificaciones
