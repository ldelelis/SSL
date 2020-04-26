# Niveles del Lenguaje: Hello.cpp v Hello.c

## Archivos fuente

Las fuentes de C++ y C que se usaron para la comparacion estan disponibles en este directorio bajo los nombres `hello.cpp` y `hello.c` respectivamente.

## Comparaciones

||C|C++|
|-|-|---|
|Lexico|Los lexemas del archivo C son completamente entendibles por un compilador de C++|No es posible interpretar los lexemas del archivo C++ con un compilador de C. Por lo tanto, su lexico es distinto|
|Sintactica|El token `void` como parametro es necesario en este caso, para definir que main no recibe parametros de invocacion|En C++ no es necesario el uso de `void` como parametro, pero se sigue considerando un token valido|
||Al no tener la funcionalidad de namespaces, C posee un token menos: `::`|En C++ se usa el token `::` para resolver llamadas a namespaces, por lo cual estas llamadas no son interpretables por C|
|Semantica|C logra el objetivo de escribir **hello world** usando la funcion `printf` expuesta en la libreria `stdio.h`|En cambio, C++ logra esto mandando una cadena de texto al objeto global `cout`, en el namespace `std` que expone la libreria `iostream`|
