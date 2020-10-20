#include <stdio.h>
#include <malloc.h> 
#include <math.h>
#include <string.h> 
#include <stdlib.h> 

///Ejercicio #4

///A01282566

///Dado un numero N, genera los patrones de bits de 0 a 2^n-1, 
///donde cada patrón sucesivo difiere en 1 bit.

int *arreglo, contador = 0;
int n = 3;
int i = 0;
int x = 0;

void bite_a_binario(int a,int n) //Función sin retorno
{
    static char b[9];
    b[0] = '\0'; //para reservar espacios extra   

    int c;
    for (c = 128; c > 0; c >>= 1)
    {
        strcat(b, ((a & c) == c) ? "1" : "0"); //Le añade más texto a la cadena
        //usando la cadena inicial y devuelve la resultante
    }
    int i = 8-n;
	while(i<8){
    	printf("%c",b[i]);
    	i++;
    }
}

int codigo_grey(int n)
{
    arreglo[contador++]=0; //Le hace postincrementos al arreglo
	arreglo[contador++]=1;
	for(i=1 ; i < n; i++){
		x = contador -1;
		while(x>=0){
			arreglo[contador++] = arreglo[x--] | 1<<i;
		}
	}
	
} 
main()
{
	arreglo = (int*)malloc(pow(2,n)*sizeof(int)); //asignar un número específico de bytes
	codigo_grey(n);
	printf("\nCódigo grey\n");
	for(i=0;i<contador;i++){
		bite_a_binario(arreglo[i],n);
		printf("\n");
	}
}