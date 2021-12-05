// Inicialización de un arreglo static e inicialización de un arreglo automático.
#include <iostream>
#include <array>
using namespace std;

void inicArregloStatic();		// prototipo de función
void inicArregloAutomatico();	// prototipo de función
const size_t tamagnoArreglo = 3;

int main()
{
	cout << "Primera llamada a cada funcion:\n";
	inicArregloStatic();
	inicArregloAutomatico();

	cout << "\n\nSegunda llamada a cada funcion:\n";
	inicArregloStatic();
	inicArregloAutomatico();
	cout << endl;
} // fin de main

// función para demostrar un arreglo local static
void inicArregloStatic( void )
{
	// inicializa los elementos con 0 la primera vez que se llama a la función
	static array< int, tamagnoArreglo > arreglo1; // arreglo local static

	cout << "\nValores al entrar en inicArregloStatic:\n";

	// imprime el contenido de arreglo1
	for ( size_t i = 0; i < arreglo1.size(); ++i )
	{
		cout << "arreglo1[" << i << "] = " << arreglo1[ i ] << " ";
	}

	cout << "\nValores al salir de inicArregloStatic:\n";

	// modifica e imprime el contenido de arreglo1
	for ( size_t j = 0; j < arreglo1.size(); ++j )
	{
		cout << "arreglo1[" << j << "] = " << ( arreglo1[ j ] += 5 ) << " ";
	}
} // fin de la función inicArregloStatic

// función para demostrar un arreglo local automático
void inicArregloAutomatico()
{
	// inicializa los elementos cada vez que se llama a la función
	array< int, tamagnoArreglo > arreglo2 = { 1, 2, 3 }; // arreglo local automático

	cout << "\n\nValores al entrar a inicArregloAutomatico:\n";

	// imprime el contenido de arreglo2
	for ( size_t i = 0; i < arreglo2.size(); ++i )
	{
		cout << "arreglo2[" << i << "] = " << arreglo2[ i ] << " ";
	}

	cout << "\nValores al salir de inicArregloAutomatico:\n";

	// modifica e imprime el contenido de arreglo2
	for ( size_t j = 0; j < arreglo2.size(); ++j )
	{
		cout << "arreglo2[" << j << "] = " << ( arreglo2[ j ] += 5 ) << " ";
	}
} // fin de la función inicArregloAutomatico
