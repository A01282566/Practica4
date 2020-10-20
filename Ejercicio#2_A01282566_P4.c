#include<stdio.h> 
#include <math.h>

///Ejercicio #2 

///A01282566

///Realice un programa donde reciba 2 números enteros sin signo y permita 
///realizar la división o la multiplicación de los mismos, usando solamente operadores binarios.

int main(){
    unsigned int a;
    unsigned int b;

    unsigned int resultm;
    unsigned int resultd;
    a = 500;
    b = 1;

    resultm = a << b; // Multiplicar por 2
    resultd = a >> b; // Dividir entre 2
    
    printf("La multiplicación es %d \n", resultm);
    printf("La división es %d \n", resultd); 
    
}