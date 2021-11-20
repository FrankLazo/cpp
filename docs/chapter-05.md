# Instrucciones de control, parte 2: operadores lógicos

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

1. Utilizar el valor final en la condición de una instrucción `while` o `for` con el operador relacional `<=` nos ayuda a evitar los **errores por desplazamiento en 1**. Por ejemplo, para un ciclo que imprime los valores del 1 al 10, la condición de continuación de ciclo debe ser `contador <= 10`, en vez de `contador < 10` (lo cual produce un error por desplazamiento en uno) o `contador < 11` (que es correcto). Muchos programadores prefieren el llamado `conteo con base cero`, en el cual para contar 10 veces, contador se inicializaría a cero y la prueba de continuación de ciclo sería `contador < 10`.

1. Coloque sólo expresiones que involucren a las variables de control en las secciones de inicialización e incremento de una instrucción `for`.

1. Aunque las instrucciones antes de un `for` y las instrucciones en el cuerpo de un `for` comúnmente se pueden fusionar en el encabezado del `for`, esto podría hacer que el programa fuera más difícil de leer, mantener, modificar y depurar.

1. El último `case` en una instrucción `switch` no requiere una instrucción `break`. Algunos programadores incluyen este `break` por claridad y por simetría con otros casos.

1. Algunos programadores sienten que las instrucciones `break` y `continue` violan la programación estructurada. Como pronto veremos, pueden lograrse los mismos efectos de estas instrucciones con las técnicas de programación estructurada, por lo que estos programadores prefieren no utilizar instrucciones `break` o `continue`. La mayoría de los programadores consideran aceptable el uso de `break` en las instrucciones `switch`.

<a id="section-2"></a>

## Errores comunes de programación

1. Utilizar un operador relacional incorrecto o un valor final incorrecto de un contador de ciclo en la condición de continuación de ciclo de una instrucción `while` o `for` puede producir **errores por desplazamiento en 1**.

1. Al colocar un punto y coma justo a la derecha del paréntesis derecho del encabezado de un `for`, el cuerpo de esa instrucción `for` se convierte en una instrucción vacía. Por lo general, esto es un error lógico.

1. No utilizar el operador relacional apropiado en la condición de continuación de un ciclo que cuente en forma regresiva (como usar incorrectamente `i <= 1` en vez de `i >= 1` en un ciclo que cuente en forma regresiva hasta llegar a 1) es generalmente un error lógico que produce resultados incorrectos al momento de ejecutar el programa.

1. No use operadores de igualdad (`!=` o `==`) en una condición de continuación de ciclo si la variable de control del ciclo se incrementa o decrementa por más de 1. Por ejemplo, considere el encabezado de la instrucción `for ( unsigned int contador = 1; contador != 10; contador += 2)`. La prueba de continuación de ciclo `contador != 10;` nunca se volverá falsa (lo que produce un *ciclo infinito*) debido a que contador se incrementa por 2 después de cada iteración.

1. Olvidar incluir el encabezado apropiado al utilizar funciones de la biblioteca estándar (por ejemplo, `<cmath>` en un programa que utilice funciones matemáticas de la biblioteca) es un error de compilación.

1. Olvidar una instrucción `break` cuando se necesita una en una instrucción `switch` es un error lógico.

1. Omitir el espacio entre la palabra `case` y el valor integral que se está evaluando en una instrucción `switch` (como escribir `case3:` en vez de `case 3:`) es un error lógico. La instrucción `switch` no ejecutará las acciones apropiadas cuando su expresión de control tenga un valor de 3.

1. Especificar una expresión integral no constante en la etiqueta `case` de una instrucción `switch` es un error de sintaxis.

1. Proporcionar etiquetas `case` idénticas en una instrucción `switch` es un error de compilación.

1. Aunque `3 < x < 7` es una condición matemáticamente correcta, no se evalúa como podría esperarse en C++. Use `( 3 < x &&  x < 7 )` para obtener la evaluación apropiada en C++.

1. El uso del operador `==` para asignación y el uso del operador `=` para igualdad son errores lógicos.

<a id="section-3"></a>

## Tips para prevenir errores

1. Los valores de punto flotante son aproximados, por lo que controlar los ciclos de conteo con variables de punto flotante puede producir valores de contador imprecisos y pruebas incorrectas para la terminación. Controle los ciclos de conteo con valores enteros. Por separado, `++` y `--` pueden usarse sólo con operandos enteros.

1. Aunque el valor de la variable de control puede cambiarse en el cuerpo de la instrucción `for`, evite hacerlo, ya que esta práctica puede llevarlo a cometer errores sutiles.

1. Proporciones un caso `default` en las instrucciones `switch`. Los casos que no se evalúen en forma explícita en una instrucción `switch` sin un caso `default` deben ignorarse. Al incluir un caso `default`, nos enfocamos en la necesidad de procesar las condiciones excepcionales. Existen situaciones en las que no se necesita un procesamiento `default`. Aunque las cláusulas `case` y la cláusula del caso `default` en una instrucción `switch` pueden ocurrir en cualquier orden, es una práctica común colocar la cláusula `default` al último.

1. Por lo general, los programadores escriben condiciones como `x == 7` con el nombre de la variable a la izquierda y la constante a la derecha. Al colocar la constante a la izquierda, como en `7 == x`, estará protegido por el compilador si accidentalmente sustituye el operador `==` con `=`. El compilador trata esto como un error de compilación, ya que no se puede modificar el valor de una constante. Esto evitará la potencial devastación de un error lógico en tiempo de ejecución.

1. Use su editor de texto para buscar todas las ocurrencias de `=` en su programa, y compruebe que tenga el operador de asignación u operador lógico correcto en cada lugar.

<a id="section-4"></a>

## Tips de rendimiento

1. Evite colocar expresiones cuyos valores no cambien dentro de los ciclos. Si lo hace, muchos de los compiladores optimizadores sofisticados de la actualidad colocarán de manera automática dichas expresiones *fuera* de los ciclos en el código de lenguaje máquina generado.

1. Muchos compiladores contienen características de optimización que mejoran el rendimiento del código que el programador escribe, sin embargo, es mejor escribir buen código desde el principio.

1. En las expresiones que utilizan el operador `&&`, si las condiciones separadas son independientes una de otra, haga que la condición que tenga más probabilidad de ser `false` sea la condición de más a la izquierda. En expresiones que utilicen el operador `||`, haga que la condición que tenga más probabilidad de ser `true` sea la condición de más a la izquierda. Este uso de la **evaluación en corto circuito** puede reducir el tiempo de ejecución de un programa.

<a id="section-5"></a>

## Tips de portabilidad

1. Las combinaciones de teclas para introducir el fin de archivo son dependientes del sistema.

1. La acción de evaluar la constante simbólica `EOF` en vez de -1 hace que los programas sean más portables. El estándar de C, del cual C++ adopta la definición de `EOF`, establece que `EOF` es un valor integral negativo, por lo que `EOF` podría tener distintos valores en diferentes sistemas.

<a id="section-6"></a>

## Observaciones de ingeniería de software

1. Existe una tensión entre lograr la ingeniería de software de calidad y lograr el software con mejor desempeño. A menudo, una de estas metas se logra a expensas de la otra. Para todas las situaciones excepto las que demanden el mayor rendimiento, aplique la siguiente regla empírica: primero, asegúrese de que su código sea simple y correcto; después hágalo rápido y pequeño, pero sólo si es necesario.

[Inicio][Home] - [Arriba][Index]

[Home]: ../README.md
[Index]: #index
