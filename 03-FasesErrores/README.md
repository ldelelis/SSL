# Fases de la Traduccion y Errores

## hello2.c

Se preproceso con el siguiente comando: `gcc -std=c18 -E hello2.c -o hello2.i`

En el archivo `hello2.i` se observan los contenidos del archivo de cabecera `stdio.h`, ademas de que se removio el comentario que se encontraba entre `int` y `main`

## hello3.c

Se preproceso con el siguiente comando: `gcc -std=c18 -E hello3.c -o hello3.i`

El archivo `hello3.i` practicamente no posee diferencias con su archivo fuente, ademas de unos comentarios de gcc, debido a que el archivo fuente no incluye directivas al preprocesador.

Se compilo el archivo preporcesado con el siguiente comando: `gcc -std=c18 -S hello3.i -o hello3.s`

La ejecucion fallo, ya que no se pudo parsear el contenido de la fuente, ya que falta una llave. Ademas, arroja un warning por una declaracion implicita de una funcion `prontf`

## hello4.c

Se preproceso con el siguiente comando: `gcc -std=c18 -E hello4.c -o hello4.i`

Se pudo compilar la fuente correctamente con el comando: `gcc -std=c18 -S hello4.i -o hello4.s`

Se ensamblo la fuente compilada con el siguiente comando: `gcc -std=c18 -c hello4.s -o hello4.o`

Al intentar vincular la fuente ensamblada con `gcc -std=c18 hello4.o -o hello4`, el enlazador `ld` falla, indicando que no existe una referencia al simbolo `prontf`.

## hello5.c

Se preproceso con el siguiente comando: `gcc -std=c18 -E hello5.c -o hello5.i`

Se pudo compilar la fuente correctamente con el comando: `gcc -std=c18 -S hello5.i -o hello5.s`

Se ensamblo la fuente compilada con el siguiente comando: `gcc -std=c18 -c hello5.s -o hello5.o`

Se vinculo la fuente ensamblada con `gcc -std=c18 hello5.o -o hello5` correctamente, produciendo un binario ejecutable.

Al correrlo, sin embargo, imprime resultados aleatrios, que seria el contenido "basura" del ingreso estandar `stdin`

## hello6.c

Se preproceso con el siguiente comando: `gcc -std=c18 -E hello6.c -o hello6.i`

Se pudo compilar la fuente correctamente con el comando: `gcc -std=c18 -S hello6.i -o hello6.s`

Se ensamblo la fuente compilada con el siguiente comando: `gcc -std=c18 -c hello6.s -o hello6.o`

Se vinculo la fuente ensamblada con `gcc -std=c18 hello6.o -o hello6` correctamente, produciendo un binario ejecutable.

Al correrlo, el programa imprime por la salida estandar `stdout` el resultado esperado: `La respuesta es 42`, y sale con un codigo 0.

# hello7.c

Se genero el ejecutable en base a la fuente provista con el comando `gcc -std=c18 -o hello7`

Este ejecutable funciona, ya que printf se considera una libreria "built-in" del lenguaje (es decir, esta incluida en glibc), y por lo tanto no es necesario declarar explicitamente su origen. Aun asi, el compilador nos imprime una advertencia:

```
hello7.c: In function ‘main’:
hello7.c:3:2: warning: implicit declaration of function ‘printf’ [-Wimplicit-function-declaration]
    3 |  printf("La respuesta es %d\n", i);
      |  ^~~~~~
hello7.c:3:2: warning: incompatible implicit declaration of built-in function ‘printf’
hello7.c:1:1: note: include ‘<stdio.h>’ or provide a declaration of ‘printf’
  +++ |+#include <stdio.h>
    1 | int main(void){

```
