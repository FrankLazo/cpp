// La instrucción de repetición do...while.
#include <iostream>
using namespace std;

int main()
{
	unsigned int contador = 1;		// inicializa contador

	do
	{
		cout << contador << " ";	// muestra contador
		++contador;					// incrementa contador
	}
	while ( contador <= 10 );		// fin de do...while

	cout << endl;					// imprime una nueva línea
} // fin de main
