# Introducción a las computadoras y a C++

<a id="index"></a>

## Índice

1. [Errores comunes de programación](#section-2)
1. [Tips de rendimiento](#section-4)
1. [Tips de portabilidad](#section-5)
1. [Observaciones de ingeniería de software](#section-6)

[Inicio][Home]

<a id="section-2"></a>

## Errores comunes de programación

1. Los errores, como la división entre cero, ocurren a medida que se ejecuta un programa, por lo cual se les llama **errores en tiempo de ejecución**. Los **errores fatales en tiempo de ejecución** hacen que los programas terminen inmediatamente, sin haber realizado correctamente su trabajo. Los errores no fatales en tiempo de ejecución permiten a los programas ejecutarse hasta terminar su trabajo, lo que a menudo produce resultados incorrectos.

<a id="section-4"></a>

## Tips de rendimiento

1. Los intérpretes tienen una ventaja sobre los compiladores en las secuencias de comandos de Internet. Un programa interpretado puede comenzar a ejecutarse tan pronto como se descarga en la máquina cliente, sin necesidad de compilarse antes de poder ejecutarse. Por otra parte, las secuencias de comandos interpretados generalmente se ejecutan con más lentitud que el código compilado.

1. Utilizar las funciones y clases de la Biblioteca estándar de C++ en vez de escribir sus propias versiones puede mejorar el rendimiento de sus programas, ya que están escritas cuidadosamente para funcionar de manera eficiente. Esta técnica también reduce el tiempo de desarrollo de los programas.

<a id="section-5"></a>

## Tips de portabilidad

1. Utilizar las funciones y clases de la Biblioteca estándar de C++ en vez de escribir sus propias versiones mejora la portabilidad de sus programas, ya que estas funciones y clases se incluyen en todas las implementaciones de C++.

<a id="section-6"></a>

## Observaciones de ingeniería de software

1. Utilice un método de "construcción en bloques" para crear programas. Evite reinventar la rueda. Use piezas existentes siempre que sea posible. Esta práctica denominada **reutilización de software** es el fundamento de la programación orientada a objetos.

1. Cuando programe en C++, generalmente utilizará los siguientes bloques de construcción: clases y funciones de la Biblioteca estándar de C++, clases y funciones creadas por usted mismo y sus colegas, y clases y funciones de varias bibliotecas populares desarrolladas por terceros.

[Inicio][Home] - [Arriba][Index]

[Home]: ../README.md
[Index]: #index
