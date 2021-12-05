# Plantillas de clase **array** y **vector**; cómo atrapar excepciones

<a id="index"></a>

## Índice

1. [Buenas prácticas de programación](#section-1)
1. [Errores comunes de programación](#section-2)
1. [Tips para prevenir errores](#section-3)
1. [Tips de rendimiento](#section-4)

[Inicio][Home]

<a id="section-1"></a>

## Buenas prácticas de programación

1. Definir el tamaño de un arreglo como una variable constante, en vez de una constante literal, hace a los programas más claros. Esta técnica elimina lo que se conoce como **números mágicos**: valores numéricos que no se explican. Al usar una variable constante podemos proporcionar un nombre para una constante literal; esto ayuda a explicar el propósito del valor en el programa.

<a id="section-2"></a>

## Errores comunes de programación

1. Observe la diferencia entre el "séptimo elemento del arreglo" y el "elemento *7* del arreglo". Los subíndices de los arreglos empiezan en *0*, por lo que el "séptimo elemento del arreglo" tiene un subíndice de *6*, mientras que el "elemento *7* del arreglo" tiene un subíndice de *7* y es en realidad el *octavo* elemento del arreglo. Por desgracia, esta distinción genera con frecuencia **errores de desplazamiento en 1**. Para evitar dichos errores, nos referimos explícitamente a los elementos específicos de un arreglo por medio del nombre del arreglo y el número de subíndice (por ejemplo, c[6] o c[7]).

1. Si no se inicializa una variable constante al momento de declararla, se produce un error de compilación.

1. Asignar un valor a una variable constante en una instrucción ejecutable es un error de compilación.

1. Hacer referencia a un elemento fuera de los límites del arreglo es un error lógico en *tiempo de ejecución*. No es un error de sintaxis.

1. Es un error hacer referencia al elemento `a[x][y]` de un arreglo bidimensional en forma incorrecta como `a[x, y]`. En realidad, `a[x, y]` se trata como `a[y]`, ya que C++ evalúa la expresión `x, y` (que contiene un operador coma) simplemente como `y` (la última de las expresiones separadas por coma).

<a id="section-3"></a>

## Tips para prevenir errores

1. Al iterar a través de un arreglo, el subíndice del arreglo debe ser mayor o igual a 0 y siempre debe ser menor que el número total de elementos en el arreglo (uno menos que el tamaño del arreglo). Asegúrese que la condición de terminación de ciclo evite acceder a los elementos fuera de este rango.

1. Al procesar todos los elementos de un arreglo, si no necesita acceso al subíndice de los elementos del mismo, use la instrucción `for` basada en rango.

<a id="section-4"></a>

## Tips de rendimiento

1. Podemos aplicar `static` a la declaración de un arreglo local, de manera que el arreglo no se cree e inicialice cada vez que el programa llame a la función, y no se destruya cada vez que termine la función en el programa. Esto puede mejorar el rendimiento, en especial cuando se utilizan arreglos extensos.

[Inicio][Home] - [Arriba][Index]

[Home]: ../README.md
[Index]: #index
