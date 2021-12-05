// Función inline que calcula el volumen de un cubo.
#include <iostream>
using namespace std;

// Definición de la función en línea cubo. La definición de la función aparece
// antes de llamar a la función, por lo que no se requiere un prototipo de función.
// La primera línea de la función actúa como el prototipo.
inline double cubo( const double lado )
{
	return lado * lado * lado; // calcula el cubo
} // fin de la función cubo

int main()
{
	double valorLado;	// almacena el valor introducido por el usuario
	cout << "Escriba la longitud del lado de su cubo: ";
	cin >> valorLado;	// lee el valor del usuario

	// calcula el cubo de valorLado y muestra el resultado
	cout << "El volumen del cubo con un lado de "
		<< valorLado << " es " << cubo( valorLado ) << endl;
} // fin de main
