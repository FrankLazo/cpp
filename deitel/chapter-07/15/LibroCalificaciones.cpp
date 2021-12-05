// Definiciones de las funciones miembro de LibroCalificaciones,
// que utiliza un arreglo bidimensional para almacenar calificaciones.
#include <iostream>
#include <iomanip> // manipuladores de flujo parametrizados
using namespace std;

// incluye la definición de la clase LibroCalificaciones de LibroCalificaciones.h
#include "LibroCalificaciones.h" // definición de la clase LibroCalificaciones

// el constructor con dos argumentos que inicializa nombreCurso y el arreglo calificaciones
LibroCalificaciones::LibroCalificaciones( const string &nombre,
	array< array< int, pruebas >, estudiantes > &arregloCalificaciones )
	: nombreCurso( nombre ), calificaciones( arregloCalificaciones )
{
} // fin del constructor de LibroCalificaciones con dos argumentos

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

	// llama a las funciones obtenerMinimo y obtenerMaximo
	cout << "\nLa calificacion mas baja en el libro de calificaciones es " << obtenerMinimo()
		<< "\nLa calificacion mas alta en el libro de calificaciones es " << obtenerMaximo()
		<< endl;

	// imprime gráfico de distribución de todas las calificaciones en todas las pruebas
	imprimirGraficoBarras();
} // fin de la función procesarCalificaciones

// encuentra la calificación más baja en todo el libro de calificaciones
int LibroCalificaciones::obtenerMinimo() const
{
	int calificacionInf = 100; // asume que la calificación más baja es 100

	// itera a través de las filas del arreglo calificaciones
	for ( auto const &estudiante : calificaciones)
	{
		// itera a través de las columnas de la fila actual
		for ( auto const &calificacion : estudiante )
		{
			// si la calificación actual es menor que calificacionInf, la asigna a calificacionInf
			if ( calificacion < calificacionInf )
			{
				calificacionInf = calificacion; // nueva calificación más baja
			}
		} // fin de for interior
	} // fin de for exterior

	return calificacionInf; // devuelve la calificación más baja
} // fin de la función obtenerMinimo

// busca la calificación más alta en todo el libro de calificaciones
int LibroCalificaciones::obtenerMaximo() const
{
	int calificacionSup = 0; // asume que la calificación más alta es 0

	// itera a través de las filas del arreglo calificaciones
	for ( auto const &estudiante : calificaciones )
	{
		// itera a través de las columnas de la fila actual
		for ( auto const &calificacion : estudiante )
		{
			// si la calificación actual es mayor que calificacionSup, la asigna a calificacionSup
			if ( calificacion > calificacionSup )
			{
				calificacionSup = calificacion; // nueva calificación más alta
			}
		} // fin de for interior
	} // fin de for exterior

	return calificacionSup; // devuelve la calificación más alta
} // fin de la función obtenerMaximo

// determina la calificación promedio para un conjunto específico de calificaciones
double LibroCalificaciones::obtenerPromedio( const array< int, pruebas > &conjuntoDeCalificaciones ) const
{
	int total = 0; // inicializa el total

	// suma las calificaciones en el arreglo
	for ( int calificacion : conjuntoDeCalificaciones )
	{
		total += calificacion;
	}

	// devuelve el promedio de las calificaciones
	return static_cast< double >( total ) / conjuntoDeCalificaciones.size();
} // fin de la función obtenerPromedio

// imprime gráfico de barras que muestra la distribución de las calificaciones
void LibroCalificaciones::imprimirGraficoBarras() const
{
	cout << "\nDistribucion general de calificaciones:" << endl;

	// almacena la frecuencia de las calificaciones en cada rango de 10 calificaciones
	const size_t tamagnoFrecuencia = 11;
	array< unsigned int, tamagnoFrecuencia > frecuencia = {}; // inicializa con ceros

	// para cada calificación, incrementa la frecuencia apropiada
	for ( auto const &estudiante : calificaciones )
	{
		for ( auto const &prueba : estudiante )
		{
			++frecuencia[ prueba / 10 ];
		}
	}

	// para cada frecuencia de calificaciones, imprime la barra en el gráfico
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
	cout << "               "; // alinea los encabezados de las columnas

	// crea un encabezado de columna para cada una de las pruebas
	for ( size_t prueba = 0; prueba < pruebas; ++prueba )
	{
		cout << "Prueba " << prueba + 1 << "  ";
	}

	cout << "Promedio" << endl; // encabezado de la columna de promedio de estudiantes

	// crea filas/columnas de texto que representan el arreglo calificaciones
	for ( size_t estudiante = 0; estudiante < calificaciones.size(); ++estudiante )
	{
		cout << "Estudiante " << setw( 2 ) << estudiante + 1;

		// imprime las calificaciones del estudiante
		for ( size_t prueba = 0; prueba < calificaciones[ estudiante ].size(); ++prueba )
		{
			cout << setw( 10 ) << calificaciones[ estudiante ][ prueba ];
		}

		// llama a la función miembro obtenerPromedio para calcular el promedio del
		// estudiante; pasa la fila de calificaciones como argumento
		double promedio = obtenerPromedio( calificaciones[ estudiante ] );
		cout << setw( 10 ) << setprecision( 2 ) << fixed << promedio << endl;
	} // fin de for exterior
} // fin de la función imprimirCalificaciones
