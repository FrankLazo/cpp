// Inicialización de arreglos multidimensionales.
#include <iostream>
#include <array>
using namespace std;

const size_t filas = 2;
const size_t columnas = 3;
void imprimirArreglo( const array< array< int, columnas >, filas > & );

int main()
{
	array< array< int, columnas >, filas > arreglo1 = { 1, 2, 3, 4, 5, 6 };
	array< array< int, columnas >, filas > arreglo2 = { 1, 2, 3, 4, 5 };

	cout << "Los valores en el arreglo1 por fila son: " << endl;
	imprimirArreglo( arreglo1 );

	cout << "\nLos valores en el arreglo2 por fila son: " << endl;
	imprimirArreglo( arreglo2 );
} // fin de main

// imprime arreglo con dos filas y tres columnas
void imprimirArreglo( const array< array< int, columnas >, filas > &a )
{
	// itera a través de las filas del arreglo
	for ( auto const &fila : a )
	{
		// itera por las columnas de la fila actual
		for ( auto const &elemento : fila )
			cout << elemento << " ";

		cout << endl; // inicia nueva línea de salida
	} // fin de for externo
} // fin de la función imprimirArreglo
