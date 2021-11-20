# Instrucciones de control, parte 1: operadores de asignación, ++ y --

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

1. Si hay varios niveles de sangría, en cada nivel debe aplicarse la misma cantidad de espacio adicional para promover la legibilidad y facilidad de mantenimiento.

1. Declare cada variable en una línea separada con su propio comentario, para mejorar la legibilidad.

1. Pida al usuario cada dato de entrada del teclado. El indicador debe indicar la forma de la entrada y cualquier valor de entrada especial. En un ciclo controlado por centinela, los indicadores que solicitan datos de entrada deben recordar explícitamente al usuario cuál es el valor centinela.

1. A diferencia de los operadores binarios, los operadores unarios de incremento y decremento deben colocarse enseguida de sus operandos, sin espacios entre ellos.

<a id="section-2"></a>

## Errores comunes de programación

1. Colocar un punto y coma después de la condición en una instrucción `if` produce un error lógico en las instrucciones `if` de selección simple, y un error de sintaxis en las instrucciones `if...else` de selección doble (cuando la parte del `if` contiene una instrucción en el cuerpo).

1. Un error lógico conocido como `ciclo infinito`, en el que la instrucción de repetición nunca termina, ocurre si no se proporciona una acción en el cuerpo de una instrucción `while` que ocasione que en algún momento la condición del `while` se torne false por lo general. Esto puede hacer que un programa parezca "quedar colgado" o "congelarse" si el cuerpo del ciclo no contiene instrucciones que interactúen con el usuario.

1. Asumir que la división entera redondea (en vez de truncar) puede producir resultados erróneos. Por ejemplo, 7 ÷ 4 produce 1.75 en la aritmética convencional, pero trunca la parte de punto flotante (.75) en la aritmética entera. Por lo tanto, el resultado es 1. De manera similar, -7 ÷ 4 produce -1.

1. El uso de una variable de control tipo contador de un ciclo en un cálculo después del ciclo produce un error lógico, conocido como **error de desplazamiento en 1**. En un ciclo controlado por contador que cuenta en uno cada vez que recorre el ciclo, éste termina cuando el valor del contador es uno más que su último valor legítimo (es decir, 11 en el caso de contar del 1 al 10).

1. Un intento de dividir entre cero produce un comportamiento indefinido y generalmente un error fatal en tiempo de ejecución.

1. Omitir las llaves que delimitan a un bloque puede provocar errores lógicos, como ciclos infinitos. Para prevenir este problema, algunos programadores encierran el cuerpo de todas las instrucciones de control con llaves, aun si el cuerpo sólo contiene una instrucción.

1. Usar números de punto flotante de una manera que suponga que se representan con precisión de manera exacta (por ejemplo, usándolos en las comparaciones de igualdad) puede producir resultados imprecisos. Los números de punto flotante se representan sólo en forma aproximada.

1. Tratar de usar el operador de incremento o decremento en una expresión que no sea un nombre de variable que pueda modificarse [por ejemplo, escribir `++(x + 1)`] es un error de sintaxis.

<a id="section-3"></a>

## Tips para prevenir errores

1. En el código que se utiliza en la industria, siempre hay que validar todas las entradas.

1. Para evitar problemas de precedencia (y por claridad), coloque las expresione condicionales (que aparezcan en expresiones más grandes) entre paréntesis.

1. Inicialice siempre las variables al momento de declararlas. Esto le ayudará a evitar los errores lógicos que ocurren al realizar cálculos con variables sin inicializar.

1. En algunos casos, los compiladores emiten una *advertencia* si usted intenta usar el valor de una variable sin inicializar. Siempre hay que obtener una *compilación limpia*, al resolver todos los errores y advertencias.

1. Al realizar una división entre una expresión cuyo valor pudiera ser cero, debemos evaluar explícitamente esta posibilidad y manejarla de manera apropiada en el programa (como imprimir un mensaje de error), en vez de permitir que ocurra el error fatal.

<a id="section-4"></a>

## Tips de rendimiento

1. Una instrucción `if...else` anidada puede ejecutarse con mucha más rapidez que una serie de instrucciones `if` de selección simple, debido a la posibilidad de salir antes de tiempo, una vez que se cumple una de las condiciones.

1. En una instrucción `if...else` anidada, debemos evaluar las condiciones que tengan más probabilidades de ser `true` al principio de la instrucción anidada. Esto permite que la instrucción `if...else` anidada se ejecute con más rapidez, al salir antes de lo esperado si se evaluaran primero los casos que ocurren con menos frecuencia.

1. Una pequeña mejora en el rendimiento para el código que se ejecuta muchas veces en un ciclo puede producir una mejora considerable en el rendimiento en general.

<a id="section-5"></a>

## Tips de portabilidad

1. Para tener compatibilidad con versiones anteriores de C, en las que se utilizan enteros para los valores booleanos, el valor `bool true` también se puede representar mediante cualquier valor *distinto de cero* (por lo general, los compiladores utilizan 1) y el valor `bool false` también se puede representar como el valor cero.

<a id="section-6"></a>

## Observaciones de ingeniería de software

1. Cualquier programa de C++ puede construirse a partir de sólo siete tipos distintos de instrucciones de control (secuencia, `if`, `if...else`, `switch`, `while`, `do...while` y `for`), combinadas en sólo dos formas (apilamiento de instrucciones de control y anidamiento de instrucciones de control).

1. Un bloque puede colocarse en cualquier parte de un programa en donde pueda colocarse una sola instrucción.

1. La parte más dificil para la resolución de un problema en una computadora es desarrollar el algoritmo. El proceso de producir un programa funcional en C++ a partir de dicho algoritmo es, por lo general, relativamente sencillo.

1. Cada mejora, así como la cima en sí, es una especificación completa del algoritmo; sólo varía el nivel del detalle.

1. Muchos programas pueden dividirse lógicamente en tres fases: una *fase de inicialización* en la que se inicializan las variables del programa; una *fase de procesamiento* en la que se introducen los valores de los datos y se ajustan las variables del programa (como contadores y totales) según sea necesario; y una *fase de terminación*, que calcula y produce los resultados finales.

1. Termine el proceso de mejoramiento de arriba a abajo, paso a paso, cuando haya especificado el algoritmo en seudocódigo con el detalle suficiente como para poder convertir el seudocódigo en C++. Por lo general, la implementación del programa en C++ después de esto es mucho más sencilla.

1. Muchos programadores experimentados escriben programas sin utilizar herramientas de desarrollo de programas como el seudocódigo. Estos programadores sienten que su meta final es resolver el problema en una computadores y que usar herramientas de desarrollo de programas como el seudocódigo simplemente retarda la producción de los resultados finales. Aunque este método pudiera funcionar para problemas sencillos y conocidos, tiende a ocasionar graves errores y retrasos en proyectos grandes y complejos.

[Inicio][Home] - [Arriba][Index]

[Home]: ../README.md
[Index]: #index
