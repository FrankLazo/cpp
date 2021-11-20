// Instrucción break para salir de una instrucción for.
#include <iostream>
using namespace std;

int main()
{
	unsigned int cuenta;	// la variable de control también se usa después de que termina el ciclo

	for ( cuenta = 1; cuenta <= 10; ++cuenta )
	{
		if ( cuenta == 5 )
			break;			// termina el ciclo sólo si cuenta es 5

		cout << cuenta << " ";
	} // fin de for

	cout << "\nSalio del ciclo en cuenta = " << cuenta << endl;
} // fin de main
