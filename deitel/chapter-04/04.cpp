// Preincremento y postincremento.
#include <iostream>
using namespace std;

int main()
{
	// demuestra el postincremento
	int c = 5;				// asigna 5 a c
	cout << c << endl;		// imprime 5
	cout << c++ << endl;	// imprime 5 y después postincrementa
	cout << c << endl;		// imprime 6

	cout << endl;			// salta una línea

	// demuestra el preincremento
	c = 5;					// asigna 5 a c
	cout << c << endl;		// imprime 5
	cout << ++c << endl;	// preincrementa y después imprime 6
	cout << c << endl;		// imprime 6
} // fin de main
