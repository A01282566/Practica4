#include <stdio.h> 

///Ejercicio #1 

///A01282566

///Encuentra el único elemento de un arreglo.
///Dado un arreglo donde cada elemento ocurre tres veces, excepto uno que aparece una sola vez.

int obtenerUnico(int arreglo[], int tamano) 
{ 
    int primbits = 0;
    int otrosbits = 0; 
    int elemento_unico; 
  
    for (int i = 0; i < tamano; i++) { 

        otrosbits = otrosbits | (primbits & arreglo[i]); 
        /* Aquí se obtienen los bits que son que hay al inicio y 
        los que tiene el elemento que se genera con el arreglo .
        Luego, se le agregan esos bits a los otros mediante un OR */
  
        primbits = primbits ^ arreglo[i]; 
        /* Posteriormente, se le aplica un XOR a los nuevos bits con los 'primbits' 
        para saber el número de veces que aparece un número impar */
  
        elemento_unico = ~(primbits & otrosbits); 
        /* Se eliminan los bits comunes, es decir, los que aparecen de nuevo en
        "primbits" y en "otrosbits" */
    
        primbits &= elemento_unico; 
        /* Se borran los bits comunes en "primbits" */
        
        otrosbits &= elemento_unico; 
        /* Se borran los bits comunes en "otrosbits" */

    } 
    return primbits; 
} 

int main() 
{ 
    int arreglo[] = { 9, 9, 1, 9, 7, 7, 7 }; 
    int tamano = sizeof(arreglo) / sizeof(arreglo[0]); 
    printf("El elemento único es %d ", 
           obtenerUnico(arreglo, tamano)); 
} 