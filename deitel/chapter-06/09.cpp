// Funciones que no reciben argumentos.
#include <iostream>
using namespace std;

void funcion1();		// función que no recibe argumentos
void funcion2( void );	// función que no recibe argumentos

int main()
{
	funcion1();	// llama a funcion1 sin argumentos
	funcion2();	// llama a funcion2 sin argumentos
} // fin de main

// funcion1 usa una lista de parámetros vacía para especificar que
// la función no recibe argumentos
void funcion1()
{
	cout << "funcion1 no recibe argumentos" << endl;
} // fin de funcion1

// funcion2 usa una lista de parámetros vacía para especificar que
// la función no recibe argumentos
void funcion2( void )
{
	cout << "funcion2 tampoco recibe argumentos" << endl;
} // fin de funcion2
