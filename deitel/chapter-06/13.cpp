// Operador de resolución de ámbito unario.
#include <iostream>
using namespace std;

int numero = 7; // variable global llamada numero

int main()
{
	double numero = 10.5; // variable local llamada numero

	// muestra los valores de las variables local y global
	cout << "Valor local double de numero = " << numero
		<< "\nValor global int de numero = " << ::numero << endl;
} // fin de main
