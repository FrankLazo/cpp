// Operadores lógicos.
#include <iostream>
using namespace std;

int main()
{
	// crea la tabla de verdad para el operador && (AND lógico)
	cout << boolalpha << "AND logico (&&)"
		<< "\nfalse && false: " << ( false && false )
		<< "\nfalse && true: " << ( false && true )
		<< "\ntrue && false: " << ( true && false )
		<< "\ntrue && true: " << ( true && true ) << "\n\n";

	// crea la tabla de verdad para el operador || (OR lógico)
	cout << "OR logico (||)"
		<< "\nfalse || false: " << ( false || false )
		<< "\nfalse || true: " << ( false || true )
		<< "\ntrue || false: " << ( true || false )
		<< "\ntrue || true: " << ( true || true ) << "\n\n";

	// crea la tabla de verdad para el operador ! (negación lógica)
	cout << "NOT logico (!)"
		<< "\n!false: " << ( !false )
		<< "\n!true: " << ( !true ) << endl;
} // fin de main
