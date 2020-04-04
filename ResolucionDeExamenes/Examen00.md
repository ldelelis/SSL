Parte 1
=======

Indique la tarea más representativa para la cual un Ingeniero en Sistemas de Información está calificado
--------------------------------------------------------------------------------------------------------

Crear un producto solucion a un problema

Defina informacion
------------------

Dato procesado relevante al lector, preciso, y concreto

Indique las asignaturas del area de programacion
------------------------------------------------

* Matematica Discreta
* Algoritmos y estructuras de datos
* Paradigmas de Programacion
* Gestion de datos
* Ingenieria en Software

Indique las asignaturas del area de sistemas de informacion
-----------------------------------------------------------

* Sistemas y organizacion
* Analisis de sistemas
* Diseño de sistemas

Indique el paradigma de programación aplicado en primer año de la carrera
-------------------------------------------------------------------------

Se uso el paradigma estructurado

Defina abstraccion
------------------

Separacion de los detalles para enfocarse en lo importante

---

Parte 2
=======

Indique diferencias entre secuencia y conjunto
----------------------------------------------

La diferencia es que en un conjunto, el orden de sus elementos es irrelevante, mientras que en una secuencia no lo es.

Defina el concepto matematico secuencia
---------------------------------------

Coleccion de valores en un orden significativo

Defina funcion matematica
-------------------------

Relacion de asociacion entre dos conjuntos (pueden ser distintos o iguales)

Defina grafo
------------

Estructura topologica compuesta por vertices, aristas, y una funcion de conexion que determina las conexiones entre estos dos

Defina particion de un conjunto
-------------------------------

Los n subconjuntos de un conjunto A, tal que su union vuelve a formar el conjunto A

Sea X={a, b}, indique P(X)
--------------------------

P(X) = {a}, {b}

Defina lenguaje formal
----------------------

Concatenacion de palabras formadas por un conjunto finitio de simbolos dentro de un alfabeto

Defina automata finito
----------------------

Modelo compuesto por un lenguaje, un conjunto de estados (del cual 1 es inicial, y el resto pueden ser finales o intermedios), y una
funcion de transicion que dictamina como cambian estos estados

---

Parte 3
=======

Defina algoritmo
----------------

Secuencia finita de instrucciones

Defina programacion estructurada
--------------------------------

Estilo de programacion en base a bloques de codigo como componentes, para mejorar claridad y legibilidad

Indique las tres estructuras de control de flujo de ejecución de la programación estructurada
---------------------------------------------------------------------------------------------

  * If
  * For
  * While

Indique las diferencias entre parametro y argumento
---------------------------------------------------

  * Parametro: valor que recibe una funcion
  * Argumento: valor que se le pasa a la ejecucion de una funcion

Explique las dos formas de transferencia de argumentos
------------------------------------------------------

  * Pasaje por valor: la funcion recibe una copia del parametro, con el mismo valor, pero referenciando una entidad distinta
  * Pasaje por referencia: la funcion recibe por parametro una referencia a una variable, por lo cual persisten modificaciones a su valor por fuera de la funcion

Explique las diferencias entre parámetros de entrada, de salida y de entrada/salida
-----------------------------------------------------------------------------------

  * Parametro de entrada: contiene valores que fueron pasados a la función desde su invocacion
  * Parametro de salida: contiene valores que son asignados dentro de la función y devueltos al contexto de la invocacion
  * Parametro de entrada/salida: contiene tanto valores que fueron pasados en la invocacion, y que ademas se modifican y devuelven durante su ejecucion

Defina tipo de dato abstracto
-----------------------------

Es un tipo de dato definido por encima de un tipo primitivo, en general definido para facilitar su uso

Indique las diferencias entre una pila y una cola
-------------------------------------------------

  * Pila: se accede siempre al ultimo valor que se incluyo en la estructura (orden UEPS/LIFO)
  * Cola: se accede siempre al primer elemento que se ingreso, en orden PEPS/FIFO

Defina archivo
--------------

Conjunto de bloques de datos persistidos en disco, que puede ser en texto plano (acceso secuencial), o en formato binario (acceso aleatorio)

 Diseñe un algoritmo que dado un arreglo de naturales a y su longitud n calcule el promedio
-------------------------------------------------------------------------------------------

```
int promedio(int[] numeros, int longitud) {
    int suma = 0;
    for (int i=0; i<longitud; i++) {
        suma += numeros[i];
    }
    return suma / longitud;
}
```
