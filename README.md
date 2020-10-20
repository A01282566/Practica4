# Practica 4. Operaciones binarias en C 

## Objectivos

El estudiante se familiarizará con el manejo de operaciones binarias utilizando el lenguaje de programación C,
realizando una serie de problemas sencillos para su mejor comprensión.

## Instrucciones

En la siguiente práctica, se listarán distintos problemas que pueden ser resueltos con el lenguaje de programación C,
los cuales deben de ser resueltos o donde su función principal sea utilizando los operadores binarios o Bitwise, cada
uno tendrá el valor de 25% de la demostración.

### Encuentra el único elememto de un arreglo.
Dado un arreglo donde cada elemento ocurre tres veces, excepto uno que aparece una sola vez. Encuentra el elemento
único. El tiempo de complejidad es O(n) y O(1) de espacio extra. 

Examplo:
Input: arr[] = {10, 1, 10, 3, 10, 1, 1, 2, 3, 3}
Output: 2


### Multiplicaciones y divisiones
Realice un programa donde reciba 2 números enteros sin signo y permita realizar la división o la multiplicación de los
mismos, usando solamente operadores binarios.

### Calcule el cuadrado de un número sin utilizar ningún operador numérico.

Dado un entero N, calcule el cuadrado de un numero sin utilizar \*, / o librerías de potencias.

Input: n = 5
Output: 25

Input: 7
Output: 49

Input: n = 12
Output: 144

### Generador de secuencias de Grey Code

Dado un numero N, genera los patrones de bits de 0 a 2^n-1, donde cada patrón sucessivo difiere en 1 bit.

Ejemplo:
El siguiente es para una secuencia de 2-bit (n = 2)
  00 01 11 10
3-bite (n = 3)
  000 001 011 010 110 111 101 100
4-bit (n = 4)
  0000 0001 0011 0010 0110 0111 0101 0100 1100 1101 1111 
  1110 1010 1011 1001 1000


### Reporte
Para esta práctica, reporta un screeshot de la demostración de cada uno de los problemas, así como adjuntando el código
del problema principal, además de explicar la solución.

Problema #1

Para encontrar el único elemento en un arreglo donde sí se repiten 3 números, primero se creó una función llamada “obtenerUnico” y se inicializaron las variables: primbits, otrosbits,elemento_unico, i y tamaño en cero.
Luego en un for, se estableció una condición que indica que mientras que la i sea menor que el tamaño del arreglo, primero se deben obtener los bits que hay al inicio y los que tiene el elemento que se genera con ese mismo arreglo. Luego, se le agregan esos bits a los otros mediante un XOR.
Posteriormente, se le aplica también un XOR a los nuevos bits con “primbits” para saber el número de veces que aparece un número impar dentro del arreglo.
Después, se eliminan los bits comunes y los que aparecen en otrosbits y primbits.
Finalmente, en el main se pone el arreglo, se obtiene el tamaño de este y se imprime el resultado,

Problema #2

Para realizar un programa donde se reciban dos números enteros sin signo y se puedan dividir y multiplicar, se usó solamente operadores binarios. Como éstos indican el desplazamiento de los lugares, si se multiplica o divide por uno, significa realmente hacer estas operaciones pero con el número 2.
Siguiendo esta lógica, únicamente se declararon las variables y se utilizó “<<“ para multiplicar y “>>” para dividir.
Con un printf, se logró mostrar el resultado en la pantalla.

Problema #3

Para elevar al cuadrado un número entero sin usar librerías de potencias, se hizo un while para que mientras una variable i es mayor que cero, se haga un and con el número 1 y compare si es igual a este, si no, se hace un postincremento al número y un postdecremento al contador.
Si i es divido entre 1, a contar se le hace otro postincremento. Estas operaciones darán como resultado el número al cuadrado.

Problema #4

Aquí se usaron varias librerías como malloc, string y stdlib. Primero se creó una función sin retorno. Y en ésta se reservaron espacios extras y se le añade texto usando la cadena inicial. Luego se hacen operaciones para devolver la resultante. Después, se le hacen postincrementos al arreglo y se le asignan números específicos de bytes.
Finalmente, se imprimen los resultados en código grey, pero para esto primero se establece un for que vaya comparando la variable “i” con “contador”.

### File uploads
En el repositorio de la práctica de github se adjuntará el código fuente (archivos .c) de cada uno de los problemas.


### Demonstration
Se realizará un screenshoot de cada una de la resolución de cada uno de los problemas, además se grabará un video
explicando la solución y ejecutandola para validar su comprobación.
Video: https://www.youtube.com/watch?v=bERhFKiJMc0

## Conclusion

A través de la implementación de ésta práctica pude desarrollar e ir mejorando en cada ejercicio, mi comprensión sobre el uso y manejo de operadores binarios combinados con el lenguaje de programación C. Cabe mencionar que, aunque los planteamientos de los problemas no suenan comlpejos, en realidad sí lo son, ya que éstos operadores son diferentes a los conocidos tradicionalmente y, además, tienen ciertas diferencias significativas, sobre todo cuando se necesita tomar en cuenta los bits, strings o espacios. Algo que podría ayudar a la solución de estos problemas es ponter en cada uno, un pantallazo del resultado esperado, para así, tener un panorama más amplio de lo que en realidad se espera.
