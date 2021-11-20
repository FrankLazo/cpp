// Repetición controlada por contador con la instrucción for.
#include <iostream>
using namespace std;

int main()
{
	// el encabezado de la instrucción for incluye la inicialización
	// la condición de continuación del ciclo y el incremento.
	for ( unsigned int contador = 1; contador <= 10; ++contador )
		cout << contador << " ";

	cout << endl; // imprime una nueva línea
} // fin de main
