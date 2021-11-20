// Repetición controlada por un contador.
#include <iostream>
using namespace std;

int main()
{
	unsigned int contador = 1;	// declara e inicializa la variable de control

	while ( contador <= 10 )	// condición de continuación de ciclo
	{
		cout << contador << " ";
		++contador;				// incrementa la variable de control en 1
	} // fin de while

	cout << endl;				// imprime una nueva línea
} // fin de main
