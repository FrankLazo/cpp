# Visual Studio 2022

Sneaky Kitty Game Dev
<https://www.youtube.com/playlist?list=PLnHeglBaPYu9FFgnYww2UC1g3F7fYWkaT>

Nuevo proyecto:

1. Crear un proyecto.
2. Seleccionar lenguaje **C++**.
3. Seleccionar tipo de proyecto **Consola**.
4. Seleccionar la plantilla **Aplicación de consola**.
5. Siguiente.
6. Indicar nombre del proyecto.

Atajos de teclado:

- Ejecutar programa: `Ctrl + F5`
- Depurar programa: `F5`

Clases en encabezados:

1. Explorador de soluciones: Archivos de encabezado.
1. Click derecho: Agregar: Clase: Nombre.
1. Creará el archivo `.h` y `.cpp`

Encabezados:

1. Explorador de soluciones: Archivos de encabezado.
1. Click derecho: Agregar: Nuevo elemento.
1. Archivo de encabezado: Nombre.

## Unreal Engine

Crear proyecto:

1. New project: Games.
1. Select template: First person.
1. Project settings: C++ and Name.

Si aparece error de **NetFxSDK**:

1. Abrir Visual Studio Installer.
1. Modificar: Componentes individuales.
1. Instalar última versión de **SDK de .NET Framework**.

Abrir Visual Studio:

1. File: Open Visual Studio.

Si se desea otro editor de texto:

1. Edit: Editor Preferences.
1. General: Source Code.

Mostrar **Output Log**:

1. Window: Developer Tools.

En el editor, para comprobar que el código corra bien:

1. Games: NombreProyecto.
1. Click derecho: Compilar.

Reagrupar paneles:

- Place Actors + World Outliner + Details.
- Not: World Settings.

Visibilidad de contenido:

1. Content Browser: View Options.

## Unreal Engine C++

Sólo diferencias con la sintaxis normal de C++.

Tipos de variables:

- Signed char: `int8`
- Unsigned char: `uint8`
- Signed int: `int32`
- Unsigned int: `uint32`
- Signed long: `int64`
- Unsigned long: `uint64`
- Form strings: `FString`
- Another strings: `FName`, `TEXT`
- Vectors: `TArray`

Poco probable ver un `while`, a menos que esté en su propio *thread*.

- FIXME: clases: `protected` permite a las clases herederas, acceder a los miembros o funciones declarados, `private` no.

- FIXME: structures: `public` / separar partes del código y reutilizarlas.

- FIXME:

```c++
int* pointer;

objectName->member;

// copy: hace una copia del objeto del argumento
void ChangePlayerAgeCopy( Person Player )
{
    Player.age = 50;
}

// puntero: pasa la dirección de memoria del objeto y modifica ese objeto
void ChangePlayerAgePointer( Person* Player )
{
    Player->age = 50;
}

// referencia: pasa al propio objeto y lo modifica
// para evitar crear copias de elementos muy pesados.
void ChangePlayerAgeReference( Person& Player )
{
    Player.age = 50;
}
```

FIXME: Generar números aleatorios:

```c++
#include <random>   // Funciones para números aleatorios
#include <chrono>   // Para cambiar la semilla

// std::default_random_engine Dre;
std::default_random_engine Dre(std::chrono::system_clock::now().time_since_epoch().count());
std::uniform_int_distribution<int> Distribution(0, 2);
```

### FirstProject

```bash
# Código fuente del proyecto
Solution::FirstProject/Games/FirstProject/Source/

# Plantilla en primera persona: Personaje principal
./FirstProject/FirstProjectCharacter/
```

```bash
# Clases
#
# UObjectBase
#   UObjectBaseUtility
#       UObject
#           AActor
#               APawn
#                   ACharacter
```

**Actor**: es algo que existe en el mundo.
**Pawn**: se le puede aplicar un **PlayerController**.
**Character**: posee un **CharacterMovement**.

## Otros

Los compiladores de C++ normalmente mejoran el código para hacerlo más eficiente.
