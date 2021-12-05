# Funciones y una introducción a la recursividad

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

1. Asegúrese de que su programa *siembre* el generador de números aleatorios de manera *distinta* (y *sólo una vez*) cada vez que se ejecute el programa; de lo contrario, un atacante podría determinar con facilidad la secuencia de números seudoaleatorios que se producirían.

1. La primera letra de un identificador que se utilice como un nombre de tipo definido por el usuario debe ir en mayúscula.

1. Use sólo letras mayúsculas en los nombres de las constantes de enumeración. Esto hace que resalten y le recuerdan que las constantes de enumeración no son variables.

1. Declare las variables lo más cerca posible de donde se utilicen por primera vez.

1. El uso de argumentos predeterminados puede simplificar la escritura de las llamadas a funciones. Sin embargo, algunos programadores sienten que es más claro especificar de manera explícita todos los argumentos.

1. Si utiliza siempre el operador de resolución de ámbito unario (`::`) para hacer referencia a las variables globales, establece claramente que está tratando de acceder a una variable global, en vez de una variable no global.

1. Al sobrecargar las funciones que realizan tareas estrechamente relacionadas, los programas pueden ser más fáciles de leer y comprender.

<a id="section-2"></a>

## Errores comunes de programación

1. Declarar los parámetros de funciones del mismo tipo como `double x, y` en vez de `double x, double y` es un error de sintaxis; se requiere un tipo para cada parámetro en la lista de parámetros.

1. Si el prototipo de función, el encabezado y las llamadas a la función no concuerdan en el número, tipo y orden de argumentos y parámetros, además del tipo de retorno, se producen errores de compilación. También pueden ocurrir errores en el enlazador y otros tipos de errores.

1. Si se define una función *antes* de invocarla, entonces su definición también sirve como el prototipo de la misma, por lo que no es necesario un prototipo separado. Si se invoca una función *antes* de definirla, y no tiene un prototipo de función, se produce un error de compilación.

1. Si los argumentos en la llamada a una función no concuerdan con el número y tipos de los parámetros declarados en el prototipo de función correspondiente, se produce un error de compilación. También es un error si el número de argumentos en la llamada concuerda, pero los argumentos no se pueden convertir de manera implícita a los tipos esperados.

1. Asignar el equivalente entero de una constante de enumeración (en vez de la misma constante de enumeración) a una variable del tipo de enumeración es un error de compilación.

1. Si el valor de la constante de una `enum` está fuera del rango que puede representarse por el tipo subyacente de esa `enum`, se produce un error de compilación.

1. El uso accidental del mismo nombre para un identificador en un bloque interior, que se utiliza para un identificador en un bloque exterior, cuando de hecho deseamos que el identificador en el bloque exterior esté activo durante la ejecución del bloque interior, es comúnmente un error lógico.

1. Como los parámetros por referencia se mencionan sólo por su nombre en el cuerpo de la función a la que se llama, podríamos tratar de manera inadvertida los parámetros por referencia como parámetros de paso por valor. Esto puede provocar efectos secundarios inesperados si la función modifica las copias originales de las variables.

1. Devolver una referencia a una variable automática en una función a la que se ha llamado es un error lógico. Por lo general, los compiladores generan una advertencia cuando esto ocurre. Para el código de nivel industrial, *siempre hay que* eliminar todas las advertencias de compilación para poder producir código ejecutable.

1. Crear funciones sobrecargadas con las listas de parámetros idénticos y distintos tipos de valores de retorno es un error de compilación.

1. Una función en la que se omiten sus argumentos predeterminados se podría invocar de una manera idéntica a otra función sobrecargada; esto es un error de compilación. Por ejemplo, al tener en un programa tanto una función que no reciba argumentos de manera explícita, como una función con el mismo nombre que contenga todos los argumentos predeterminados, se produce un error de compilación cuando tratamos de usar el nombre de esa función en una llamada en la que no se pasen argumentos. El compilador no sabe cuál versión de la función elegir.

1. Omitir el caso base o escribir el paso de recursividad en forma incorrecta, de modo que no converja en el paso base, producirá un error de recursividad infinito y tal vez un desbordamiento de pila. Esto es análogo al problema de un ciclo infinito en una solución iterativa (no recursiva).

1. La escritura de programas que dependen del orden de evaluación de los operandos de operadores distintos de `&&`, `||`, `?:` y el operador coma (`,`) pueden producir errores lógicos.

1. Recuerde que los operadores `&&` y `||` usan la evaluación de corto circuito. Colocar una expresión con un efecto secundario del lado derecho de un operador `&&` o `||` es un error lógico si esa expresión siempre debe evaluarse.

1. Hacer que una función no recursiva se llame a sí misma por accidente, ya sea en forma directa o indirecta (a través de otra función), es un error lógico.

<a id="section-3"></a>

## Tips para prevenir errores

1. No llame a `sqrt` con un argumento negativo. Para el código de nivel industrial, revise siempre que los argumentos que pasa a las funciones matemáticas sean válidos.

1. Si tiene dudas acerca del orden de evaluación de los argumentos de una función, y de si el orden afectaría a los valores que se pasan a la función, evalúe los argumentos en instrucciones de asignación separadas antes de la llamada a la función, asigne el resultado de cada expresión a una variable local y después pase esas variables como argumentos para la función.

1. Hay que proporcionar un caso `default` en una instrucción `switch` para atrapar errores, ¡incluso si estamos absoluta y positivamente seguros de no tener errores!

1. Use valores únicos para las constantes de una enumeración, para ayudar a evitar los errores lógicos difíciles de localizar.

1. Use `enum` con alcance para evitar conflictos de nombre y errores lógicos potenciales debido a las enumeraciones sin alcance que contienen los mismos identificadores.

1. Evite los nombres de variables que ocultan nombres de alcances exteriores.

1. Al utilizar siempre el operador de resolución de ámbito unario (`::`) para hacer referencia a una variable global, se eliminan los posibles errores lógicos que podrían ocurrir si una variable no global oculta a la variable global.

1. Evite usar variables con el mismo nombre para distintos propósitos en un programa. Aunque esto se permite en diversas circunstancias, puede producir errores.

1. No dependa del orden en el que se evalúan los operandos. Para asegurar que los efectos secundarios se apliquen en el orden correcto, divida las expresiones complejas en instrucciones separadas.

<a id="section-4"></a>

## Tips de rendimiento

1. El almacenamiento automático es un medio de conservar la memoria, ya que las variables de duración de almacenamiento automática existen en memoria sólo cuando se ejecuta el bloque en el cual están definidas.

1. El especificador de clase de almacenamiento `register` se puede colocar antes de la declaración de una variable automática, para sugerir que el compilador debe mantener la variable en uno de los registros de hardware de alta velocidad de la computadora, en vez de hacerlo en memoria. Si las variables de uso intensivo, como los contadores o totales, se mantienen en los registros de hardware, se elimina la sobrecarga de cargar de manera repetitiva las variables de memoria hacia los registros, y almacenar los resultados de vuelta a la memoria.

1. Por lo general, es innecesario el uso de `register`. Los compiladores optimizadores de la actualidad pueden reconocer las variables de uso frecuente y colocarlas en registros, sin necesidad de una declaración `register`.

1. Los compiladores pueden poner código en línea para el que no hayamos utilizado de manera explícita la palabra clave `inline`. Los compiladores optimizadores actuales son tan sofisticados que es mejor dejarles las decisiones sobre poner o no código en línea.

1. Una desventaja del paso por valor es que, si se va a pasar un elemento de datos extenso, el proceso de copiar esos datos puede requerir una cantidad considerable de tiempo de ejecución y espacio en memoria.

1. El paso por referencia es bueno por cuestiones de rendimiento, ya que puede eliminar la sobrecarga de copiar grandes cantidades de datos en el paso por valor.

1. Para pasar objetos extensos, use un parámetro por referencia *constante* para simular la apariencia y seguridad del paso por valor, evitando así la sobrecarga de pasar una copia del objeto extenso.

1. Evite los programas recursivos al estilo Fibonacci que produzcan una "explosión" exponencial de llamadas.

1. Evite usar la recursividad en situaciones en las que se requiera un alto rendimiento. Las llamadas recursivas requieren tiempo y consumen memoria adicional.

<a id="section-5"></a>

## Tips de portabilidad

1. Algunas veces, cuando los argumentos de una función son expresiones, como las de las llamadas a otras funciones, el orden en el que el compilador evalúa los argumentos podría afectar a los valores de uno o más de los argumentos. Si el orden de evaluación cambia entre un compilador y otro, los valores de los argumentos que se pasan a la función podrían variar, lo cual produciría errores lógicos sutiles.

1. Los programas que dependen del orden de evaluación de los operandos de operadores distintos de `&&`, `||`, `?:` y el operador coma (`,`) pueden funcionar de manera distinta en sistemas con distintos compiladores y producir errores lógicos.

<a id="section-6"></a>

## Observaciones de ingeniería de software

1. Para promover la reutilización de software, toda función debe limitarse a realizar una sola tarea bien definida, y el nombre de la función debe expresar esa tarea con eficiencia.

1. Las comas utilizadas para separar los argumentos de una función *no* son operadores coma. El operador coma garantiza que su operandos se evalúen de izquierda a derecha. Sin embargo, el estándar de C++ no especifica el orden de evaluación de los argumentos de una función. Por ende, distintos compiladores pueden evaluar los argumentos de una función en distintos órdenes. El estándar de C++ *garantiza* que todos los argumentos en la llamada a una función se evaluén *antes* de ejecutar la función que se va a llamar.

1. Una función que tiene muchos parámetros puede estar realizando muchas tareas. Considere dividir la función en funciones más pequeñas que realicen las tareas por separado. Limite el encabezado de la función a una línea, si es posible.

1. Los prototipos de función son obligatorios, a menos que la función se defina antes de usarla. Use directivas `#include` del preprocesador para obtener prototipos de función para las funciones de la Biblioteca estándar de C++ de los encabezados para las bibliotecas apropiadas (por ejemplo, el prototipo para `sqrt` está en el encabezado `<cmath>`). Use también `#include` para obtener encabezados que contengan prototipos de función escritos por usted, o por otros programadores.

1. Siempre debemos proporcionar prototipos de funciones, aun cuando es posible omitirlas cuando se definen las funciones *antes* de utilizarlas. Al proporcionar los prototipos, evitamos fijar el código al orden en el que se definen las funciones (lo cual puede cambiar fácilmente, a medida que un programa evoluciona).

1. El almacenamiento automático es un ejemplo del **principio del menor privilegio**. En el contexto de una aplicación, el principio establece que el código debe recibir *sólo* el nivel de privilegio y acceso que requiere para realizar su tarea designada, *pero no más*. ¿Por qué deberíamos tener variables almacenadas en memoria y accesibles cuando no se necesitan?

1. Al declarar una variable como global en vez de local, se permite la ocurrencia de *efectos secundarios inesperados* cuando una función que no requiere acceso a la variable la modifica en forma accidental o premeditada. Esto es otro ejemplo del principio del menor privilegio. En general, con la excepción de los recursos verdaderamente globales como `cin` y `cout`, debe evitarse el uso de variables globales, excepto en ciertas situaciones con requerimientos de rendimiento únicos.

1. Las variables que se utilizan sólo en una función específica deben declararse como locales en esa función, en vez de declararlas como variables globales.

1. Si cambia la definición de una función `inline`, deberá volver a compilar todos los clientes de esa función.

1. El calificador `const` se debe utilizar para hacer valer el principio del menor privilegio. El uso de este principio para diseñar software de manera apropiada puede reducir considerablemente el tiempo de depuración y los efectos secundarios inadecuados; además puede facilitar la modificación y el mantenimiento de un programa.

1. El paso por referencia puede debilitar la seguridad, ya que la función a la que se llamó puede corromper los datos de la función que hizo la llamada.

1. Al utilizar siempre el operador de resolución de ámbito unario (`::`) para hacer referencia a las variables globales, se facilita la modificación de los programas, al reducir el riesgo de conflictos de nombres con variables no globales.

1. Cualquier problema que se pueda resolver mediante la recursividad, se puede resolver también mediante la iteración (sin recursividad). Por lo general se prefiere un método recursivo a uno iterativo cuando el primero refleja con más naturalidad el problema, y se produce un programa más fácil de entender y depurar. Otra razón por la que es preferible elegir una solución recursiva es que una iterativa podría no ser aparente.

[Inicio][Home] - [Arriba][Index]

[Home]: ../README.md
[Index]: #index
