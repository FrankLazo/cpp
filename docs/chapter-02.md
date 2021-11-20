# Introducción a la programación en C++, entrada/salida y operadores

<a id="index"></a>

## Índice

1. [Buenas prácticas de programación](#section-1)
1. [Errores comunes de programación](#section-2)
1. [Tips para prevenir errores](#section-3)
1. [Tips de portabilidad](#section-5)

[Inicio][Home]

<a id="section-1"></a>

## Buenas prácticas de programación

1. Todo programa debe comenzar con un comentario que describa su propósito.

1. Aplique sangría al cuerpo de cada función un nivel dentro de las llaves que delimitan el cuerpo de la función. Esto hace que la estructura funcional de un programa resalte y hace que sea más fácil de leer.

1. Establezca una convención para el tamaño de la sangría que prefiera y luego aplíquela de manera uniforme. La tecla de tabulación puede usarse para crear sangrías, pero los topes de tabulación pueden variar. Nosotros preferimos tres espacios por cada nivel de sangría.

1. Declare sólo una variable en cada declaración y proporcione un comentario que explique el propósito de la variable en el programa.

1. Seleccionar nombres significativos para los identificadores ayuda a que un programa se **autodocumente**: que una persona pueda comprender el programa con sólo leerlo, en lugar de tener que consultar los comentarios o la documentación del programa.

1. Evite usar abreviaciones en los identificadores. Esto mejora la legibilidad del programa.

1. No use identificadores que empiecen con guiones bajos y dobles guiones bajos, ya que los compiladores de C++ pueden, de manera interna, utilizar nombres como esos para sus propios fines. Esto evitará que los nombres que usted elija se confundan con los nombres que elijan los compiladores.

1. Coloque espacios en cualquier lado de un operador binario. Esto hace que el operador resalte y mejora la legibilidad del programa.

1. Aplique sangría a la(s) instrucción(es) en el cuerpo de una instrucción `if` para mejorar la legibilidad.

1. Una instrucción larga puede esparcirse en varias líneas. Si hay que dividir una sola instrucción en varias líneas, elija puntos que tengan sentido para hacer la división, como después de una como en una lista separada por comas, o después de una operación en una expresión larga. Si una instrucción se divide entre dos o más líneas, aplique sangría a todas las líneas subsecuentes y alinee a la izquierda el grupo de líneas con sangría.

1. Consulte la tabla de precedencia y asociatividad de operadores (TODO: enlace a tabla) cuando escriba expresiones que contengan muchos operadores. Confirme que los operadores en la expresión se ejecuten en el orden que usted espera. Si no está seguro en cuanto al orden de evaluación en una expresión compleja, divida la expresión en instrucciones más pequeñas o use paréntesis para forzar el orden de evaluación de la misma forma como lo haría en una expresión algebraica. Asegúrese de observar que ciertos operadores, como la asignación (`=`), se asocien de derecha a izquierda en lugar de hacerlo de izquierda a derecha.

<a id="section-2"></a>

## Errores comunes de programación

1. Olvidar incluir el archivo de encabezado `<iostream>` en un programa que reciba datos del teclado, o que envíe datos a la pantalla, hace que el compilador genere un mensaje de error.

1. Omitir el punto y coma al final de una instrucción de C++ es un error de **sintaxis**. La sintaxis de un lenguaje de programación especifica las reglas para crear programas apropiados en ese lenguaje. Un **error de sintaxis** ocurre cuando el compilador encuentra código que viola las reglas del lenguaje C++ (es decir, su sintaxis). Por lo general, el compilador genera un mensaje de error para ayudarnos a localizar y corregir el código incorrecto. A los errores de sintaxis también se les llama **errores del compilador**, **errores en tiempo de compilación** o **errores de compilación**, ya que el compilador los detecta durante la fase de compilación. No podrá ejecutar su programa sino hasta que corrija todos los errores de sintaxis que contenga. Algunos errores de compilación no son errores de sintaxis.

1. Invertir el orden del par de símbolos en cualquiera de los operadores `!=`, `>=` y `<=` (al escribirlos como `=!`, `=>` y `=<`, respectivamente) es comúnmente un error de sintaxis. En algunos casos, escribir `!=` como `=!` no será un error de sintaxis, sino casi con certeza será un **error lógico**, el cual tiene un efecto en tiempo de ejecución. Un **error lógico fatal** hace que un programa falle y termine antes de tiempo. Un **error lógico no fatal** permite que un programa continúe ejecutándose, pero por lo general produce resultados incorrectos.

1. Confundir el operador de igualdad `==` con el operador de asignación `=` produce errores lógicos. El operador de igualdad se debe leer como "es igual a" o "doble igual", y el operador de asignación se debe leer como "obtiene" u "obtiene el valor de", o "se le asigna el valor de". Confundir estos operadores no necesariamente puede provocar un error de sintaxis fácil de reconocer, pero puede producir errores lógicos sutiles.

1. Colocar un punto y coma justo después del paréntesis derecho que va después de la condición en una instrucción `if` es, generalmente, un error lógico (aunque no es un error de sintaxis). El punto y coma hace que el cuerpo de la instrucción `if` esté vacío, por lo que esta instrucción no realiza ninguna acción, sin importar que la condición sea verdadera o no. Peor aún, la instrucción del cuerpo original de la instrucción `if` ahora se convierte en una instrucción en secuencia con la instrucción `if` y siempre se ejecuta, lo cual a menudo ocasiona que el programa produzca resultados incorrectos.

<a id="section-3"></a>

## Tips para prevenir errores

1. Aunque no siempre es necesario inicializar cada variable de manera explícita, hacerlo evitará muchos tipos de problemas.

<a id="section-5"></a>

## Tips de portabilidad

1. C++ permite identificadores de cualquier longitud, pero tal vez la implementación de C++ que usted utilice imponga algunas restricciones en cuanto a la longitud de los identificadores. Use identificadores de 31 caracteres o menos, para asegurar la portabilidad.

[Inicio][Home] - [Arriba][Index]

[Home]: ../README.md
[Index]: #index
