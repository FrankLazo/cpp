# Apuntadores

<a id="index"></a>

## Índice

1. [Buenas prácticas de programación](#section-1)
1. [Errores comunes de programación](#section-2)
1. [Tips para prevenir errores](#section-3)
1. [Tips de rendimiento](#section-4)
1. [Tips de portabilidad](#section-5)
1. [Observaciones de ingeniería de software](#section-6)

[Inicio][Home]

<a id="section-1"></a>

## Buenas prácticas de programación

1. Aunque no es un requerimiento, incluir las letras `Ptr` en los nombres de las variables apuntadores deja claro que estas variables son apuntadores, y que deben tratarse de manera acorde.

1. Por cuestión de claridad, usamos la notación de arreglos integrados en vez de la notación de apuntadores al manipular arreglos integrados.

<a id="section-2"></a>

## Errores comunes de programación

1. Asumir que el `*` que se utiliza para declarar a un apuntador se distribuye a todos los nombres de variables en la lista separada por comas de variables de una declaración puede provocar errores. Cada apuntador se debe declarar con el `*` antepuesto al nombre (ya sea con o sin un espacio entre ellos). Si declaramos sólo una variable por cada declaración, evitamos estos tipos de errores y mejoramos la legibilidad de los programas.

1. Al desreferenciar un apuntador que no se haya inicializado se produce un comportamiento indefinido, el cual podría producir un error fatal en tiempo de ejecución. Esto también podría conducir a la modificación accidental de datos importantes y permitir que el programa se ejecutara por completo, lo que posiblemente produzca resultados incorrectos.

1. Al utilizar el operador `sizeof` en una función para buscar el tamaño en bytes de un parámetro tipo arreglo, se obtiene el tamaño en bytes de un apuntador, no el tamaño en bytes del arreglo integrado.

1. Restar o comparar dos apuntadores que no hagan referencia a los elementos del mismo arreglo integrado es un error lógico.

1. Asignar un apuntador de un tipo a un apuntador de otro (que no sea `void *`) sin usar una conversión de tipos (por lo general, `reinterpret_cast`) es un error de compilación.

1. Las operaciones permitidas en apuntadores `void *` son: comparar apuntadores `void *` con otros apuntadores, convertir apuntadores `void *` a otros tipos de apuntadores y asignar direcciones a apuntadores `void *`. Todas las demás operaciones en apuntadores `void *` son errores de compilación.

1. Si no se asigna suficiente espacio en un arreglo integrado de caracteres para almacenar el carácter nulo que termina una cadena, se produce un error.

1. Crear o usar una cadena estilo C que no contiene un carácter nulo de terminación puede producir errores lógicos.

<a id="section-3"></a>

## Tips para prevenir errores

1. Inicialice todos los apuntadores para evitar que apunten hacia áreas desconocidas o no inicializadas en la memoria.

1. Desreferenciar un apuntador nulo produce un comportamiento indefinido y, por lo general, es un error en tiempo fatal de ejecución, por lo que debe asegurarse de que un apuntador no sea nulo *antes* de desreferenciarlo.

1. Especifique siempre el tamaño de un arreglo integrado, incluso cuando se proporcione una lista inicializadora. Esto permite al compilador asegurar que no se proporcionen demasiados inicializadores.

1. Antes de usar una función, compruebe su prototipo para determinar los parámetros que puede y no puede modificar.

1. En la aritmética de apuntadores no hay comprobación de límites. El programador debe asegurarse de que cada operación aritmética con apuntadores que sume o reste un entero a un apuntador dé como resultado otro apuntador que haga referencia a un elemento dentro de los límites del arreglo integrado.

1. Si necesita modificar el contenido de una literal de cadena, almacénela primero en un arreglo integrado de valores `char`.

1. Al almacenar una cadena de caracteres en un arreglo integrado de caracteres, asegúrese de que el arreglo sea lo bastante grande como para contener la cadena más larga que se vaya a almacenar. C++ permite almacenar cadenas de cualquier longitud. Si una cadena es mayor que el arreglo integrado de caracteres en la que se va a almacenar, los caracteres que estén más allá del final del arreglo integrado sobrescribirán datos en las ubicaciones de memoria que sigan después del arreglo integrado, lo cual produce errores lógicos y fugas de seguridad potenciales.

<a id="section-4"></a>

## Tips de rendimiento

1. Si no es necesario modificarlos por la función a la que se llamó, pase objetos grandes utilizando apuntadores a datos constantes, para obtener los beneficios de rendimiento del paso por referencia y evitar la sobrecarga de la copia del paso por valor.

<a id="section-5"></a>

## Tips de portabilidad

1. El número de bytes utilizados para almacenar un tipo de datos específico puede variar de un sistema a otro. Al escribir programas que dependan de los tamaños de los tipos de datos, use siempre `sizeof` para determinar el número de bytes utilizados para almacenar los tipos de datos.

1. La mayoría de las computadoras de la actualidad tienen enteros de cuatro o de ocho bytes. Debido a que los resultados de la aritmética de apuntadores dependen del tamaño de los objetos a los que apunta un apuntador, la aritmética de apuntadores es dependiente del equipo.

<a id="section-6"></a>

## Observaciones de ingeniería de software

1. Aplicar el calificador de tipo `const` a un parámetro de arreglo integrado en una definición de función para evitar que el arreglo integrado original se modifique en el cuerpo de la función es otro ejemplo del principio de menor privilegio. Las funciones no deben tener la capacidad de modificar un arreglo integrado, a menos que sea absolutamente necesario.

1. Si un valor no cambia (o no debe cambiar) en el cuerpo de una función que lo recibe, el parámetro se debe declarar `const`.

1. Hay que pasar objetos grandes usando apuntadores a datos constantes, o referencias a datos constantes, para obtener la seguridad del paso por valor.

1. Use el paso por valor para pasar argumentos de tipos fundamentales (como `int`, `double`, etc.) a una función, a menos que la función que hace la llamada requiera de manera *explícita* que la función a la que se llamó pueda modificar directamente el valor en la función que hizo la llamada. Este es otro ejemplo del principio del menor privilegio.

[Inicio][Home] - [Arriba][Index]

[Home]: ../README.md
[Index]: #index
