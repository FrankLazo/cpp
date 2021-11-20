// Instrucción continue para terminar una iteración de una instrucción for.
#include <iostream>
using namespace std;

int main()
{
	for ( unsigned int cuenta = 1; cuenta <= 10; ++cuenta )	// itera 10 veces
	{
		if ( cuenta == 5 )									// si cuenta es 5,
			continue;										// omite el código restante en el ciclo

		cout << cuenta << " ";
	} // fin de for

	cout << "\nSe uso continue para no imprimir el 5" << endl;
} // fin de main
