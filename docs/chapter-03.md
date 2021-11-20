# Introducción a las clases, objetos y cadenas

<a id="index"></a>

## Índice

1. [Buenas prácticas de programación](#section-1)
1. [Errores comunes de programación](#section-2)
1. [Tips para prevenir errores](#section-3)
1. [Observaciones de ingeniería de software](#section-6)

[Inicio][Home]

<a id="section-1"></a>

## Buenas prácticas de programación

1. Trate siempre de *localizar* los efectos de las modificaciones a los datos miembros de una clase, utilizando y manipulando los datos miembros a través de sus correspondientes funciones *obtener* y *establecer*.

1. Aunque los nombres de los parámetros en los prototipos de funciones son opcionales (el compilador los ignora), muchos programadores utilizan estos nombres para fines de documentación.

<a id="section-2"></a>

## Errores comunes de programación

1. Olvidar el punto y coma al final de la definición de una clase es un error de sintaxis.

1. Si una función, que no sea miembro de una clase específica (o amiga de esa clase), intenta acceder a un miembro `private` de esa clase, se produce un error de compilación.

1. Al definir las funciones miembro de una clase fuera de la misma, si se omite el nombre de la clase y el operador de resolución de ámbito (`::`) antes de los nombres de las funciones se producen errores de compilación.

<a id="section-3"></a>

## Tips para prevenir errores

1. Al hacer que los datos miembros de una clase sean `private` y las funciones miembro de la clase sean `public`, se facilita la depuración debido a que los problemas con las manipulaciones de datos se localizan, ya sea en las funciones miembro de la clase o en las amigas de ésta.

1. A menos que no sea necesario inicializar los datos miembros de su clase (casi nunca), debe proporcionar constructores para asegurar que los datos miembros de su clase se inicialicen con valores significativos al momento de crear cada nuevo objeto de su clase.

1. Para asegurar que el preprocesador pueda localizar los encabezados en forma correcta, en las directivas del preprocesador `#include` se deben colocar los nombres de los encabezados definidos por el usuario entre comillas (como `"NewClass.h"`), y se deben colocar los nombres de los archivos de encabezado de la Biblioteca Estándar de C++ entre los signos `<` y `>` (como `<iostream>`).

1. Los beneficios de la integridad de datos no son automáticos sólo porque los datos miembros se hacen `private`; debemos proporcionar una verificación de validez apropiada y reportar los errores.

<a id="section-6"></a>

## Observaciones de ingeniería de software

1. Escriba programas que sean comprensibles y fáciles de mantener. El cambio es la regla, en vez de la excepción. Debemos anticipar que nuestro código será modificado en el futuro.

1. Los datos miembros se pueden inicializar en un constructor, o sus valores pueden establecerse más adelante, después de crear el objeto. Sin embargo, es una buena práctica de ingeniería de software asegurarse que un objeto esté inicializado por completo antes de que el código cliente invoque las funciones miembro de ese objeto. En general, no debemos depender del código cliente para asegurar que un objeto se inicialice de manera apropiada.

1. Hacer los datos miembros `private` y controlar el acceso, en especial el acceso de escritura, a esos datos miembros a través de funciones miembro `public`, ayuda a asegurar la integridad de los datos.

[Inicio][Home] - [Arriba][Index]

[Home]: ../README.md
[Index]: #index
