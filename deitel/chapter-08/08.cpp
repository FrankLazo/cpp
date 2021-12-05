// Uso del operador sizeof para determinar los tamaños de los tipos de datos estándar.
#include <iostream>
using namespace std;

int main()
{
	char c; 			// variable de tipo char
	short s; 			// variable de tipo short
	int i; 				// variable de tipo int
	long l; 			// variable de tipo long
	long long ll; 		// variable de tipo long long
	float f; 			// variable de tipo float
	double d; 			// variable de tipo double
	long double ld; 	// variable de tipo long double
	int arreglo[ 20 ];	// arreglo integrado de int
	int *ptr = arreglo;	// variable de tipo int *

	cout << "sizeof c = " << sizeof c
		<< "\tsizeof(char) = " << sizeof( char )
		<< "\nsizeof s = " << sizeof s
		<< "\tsizeof(short) = " << sizeof( short )
		<< "\nsizeof i = " << sizeof i
		<< "\tsizeof(int) = " << sizeof( int )
		<< "\nsizeof l = " << sizeof l
		<< "\tsizeof(long) = " << sizeof( long )
		<< "\nsizeof ll = " << sizeof ll
		<< "\tsizeof(long long) = " << sizeof( long long )
		<< "\nsizeof f = " << sizeof f
		<< "\tsizeof(float) = " << sizeof( float )
		<< "\nsizeof d = " << sizeof d
		<< "\tsizeof(double) = " << sizeof( double )
		<< "\nsizeof ld = " << sizeof ld
		<< "\tsizeof(long double) = " << sizeof( long double )
		<< "\nsizeof arreglo = " << sizeof arreglo
		<< "\nsizeof ptr = " << sizeof ptr << endl;
} // fin de main
