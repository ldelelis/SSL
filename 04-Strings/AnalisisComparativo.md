Comparacion: String en C y en Python
====================================

||C|Python|
|-|-|------|
|El tipo es parte del lenguaje en algun nivel?|Si. Se lo considera "cadena" a un array de caracteres indivicuales|Si. A alto nivel, el string se maneja como un objeto|
|El tipo es parte de la biblioteca?|No. Si bien no hay un tipo "string" propiamente dicho, C provee los arreglos de caracteres para manejarlos.|Si. El tipo `string` es un objeto "built-in" de la biblioteca estandar de python|
|Que alfabeto usa?|Soporta todos los caracteres ASCII, incluidas las secuencias de escape no representativas|Ademas de los caracteres ascii, soporta caracteres Unicode, tanto en Python 2 (mediante una especificacion especial de strings prefijadas con `u`), como en Python 3 (por defecto)|
|Como se resuelve la alocacion de memoria?|Puede ser tanto durante compilacion, si estan declarados de forma estatica, o en runtime si se crean mediante malloc|Se alocan en tiempo de ejecucion, y un Garbage Collector se encarga de borrar instancias sin uso|
|El tipo tiene mutabilidad o es inmutable?|El array de caracteres es mutable|Es inmutable|
|El tipo es un *first class citizen*?|No|Si|
|Cual es la mecanica para ese tipo cuando se los pasa como argumentos?|Al ser un puntero a la posicion inicial, se pasa por referencia a la alocacion real|Se pasa una copia del string|
|Y cuando son retornados por una funcion?|Se devuelve el mismo puntero a la alocacion inicial|Se devuelve el estado de esa copia, como un nuevo objeto|
